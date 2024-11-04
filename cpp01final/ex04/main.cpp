#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}

	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error: File can not be read" << std::endl;
		return 1;
	}

	std::string content;
	std::string line;
	while (std::getline(file, line))
	{
		content += line + "\n";
	}

	if (content.empty())
	{
		std::cout << "Error: File is empty!" << std::endl;
		file.close();
		return (1);
	}
	file.close(); // Close the input file stream

	std::string to_find = argv[2];
	std::string to_replace = argv[3];
	if (to_find.empty())
	{
		std::cout << "Error: only non-empty string can be replaced!" << std::endl;
		return (1);
	}
	size_t pos = 0;
	std::string result;
	while ((pos = content.find(to_find, pos)) != std::string::npos)
	{
		result.append(content, 0, pos);
		result.append(to_replace);
		content.erase(0, pos + to_find.length());
		pos = 0;
	}
	result.append(content);

	std::ofstream newFile(argv[1]);
	if (!newFile.is_open())
	{
		std::cout << "Error: Unable to open file for writing" << std::endl;
		return 1;
	}
	newFile << result;
	newFile.close();

	return 0;
}
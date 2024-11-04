/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:06:45 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/04 03:06:47 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of the string variable ( &str ):           " << &str << "\n";
    std::cout << "Memory address held by string pointer ( stringPTR ):      " << stringPTR << "\n";
    std::cout << "Memory address held by string reference ( &stringREF ):   " << &stringREF << "\n";
    
    std::cout << "\nValue of the string variable (str):                   " << str << "\n";
    std::cout << "Value pointed to by string pointer (*stringPTR):      " << *stringPTR << "\n";
    std::cout << "Value pointed to by string reference (stringREF):     " << stringREF << "\n";
    return 0;
}
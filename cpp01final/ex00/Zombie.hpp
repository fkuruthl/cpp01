/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:17:37 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/04 03:17:39 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Zombie
{
public:
	void announce(void);

	Zombie(const std::string& name);
	~Zombie();

private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
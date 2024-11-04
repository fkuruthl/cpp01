/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuruthl <fkuruthl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 02:53:27 by fkuruthl          #+#    #+#             */
/*   Updated: 2024/11/04 02:53:30 by fkuruthl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie my_zombie("My Zombie");
    my_zombie.announce();
    Zombie *new_zombie = newZombie("New Zombie");
    new_zombie->announce();
    randomChump("Random Chump");
    delete new_zombie;
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:54:50 by jholl             #+#    #+#             */
/*   Updated: 2022/03/23 12:59:07 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main(void)
{
	Zombie zombie_instancied_without_func("Zombie_instancied_without_func");
	zombie_instancied_without_func.announce();
	std::cout << "This zombie will be deleted by his destructor at the end of prog." << std::endl;
	std::cout << std::endl;

	Zombie *allocated_zombie;
	allocated_zombie = newZombie("Zombie_allocated"); 
	allocated_zombie->announce();
	std::cout << "This zombie will be deleted with the line delete." << std::endl;
	delete allocated_zombie;
	std::cout << std::endl;

	randomChump("Zombie_on_the_stack");
	std::cout << "This zombie is already destroyed." << std::endl;
	std::cout << std::endl;

	return (0);
}

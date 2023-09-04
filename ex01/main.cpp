/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:04:28 by jholl             #+#    #+#             */
/*   Updated: 2022/03/23 15:48:53 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int	main(void)
{
	Zombie *new_zombie_horde = zombieHorde(SIZE_HORDE, "Zombie");
	for (int i = 0; i < SIZE_HORDE; i++)
		new_zombie_horde[i].announce();
	delete[] new_zombie_horde;
	return (0);
}

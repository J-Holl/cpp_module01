/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:14:22 by jholl             #+#    #+#             */
/*   Updated: 2022/03/23 15:48:35 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

std::string intToString(int x)
{
  std::stringstream stream;
  stream << x;
  return (stream.str());
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* new_ZombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		new_ZombieHorde[i].set_name(name + intToString(i));
	}
	return (new_ZombieHorde);
}

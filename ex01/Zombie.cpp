/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:55:46 by jholl             #+#    #+#             */
/*   Updated: 2022/03/23 15:42:37 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name):
_name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " zombie destroyed." << std::endl;
}

void	Zombie::set_name(std::string new_name)
{
	_name = new_name;	
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:52:11 by jholl             #+#    #+#             */
/*   Updated: 2022/03/24 16:13:15 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
_my_weapon(NULL), _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " <<  _my_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& my_weapon)
{
	_my_weapon = &my_weapon;
}

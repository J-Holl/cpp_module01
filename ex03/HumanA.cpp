/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:25:56 by jholl             #+#    #+#             */
/*   Updated: 2022/03/24 16:13:06 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& my_weapon):
_my_weapon(my_weapon), _name(name)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " <<  _my_weapon.getType() << std::endl;
}

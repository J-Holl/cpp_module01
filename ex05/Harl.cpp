/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:25:56 by jholl             #+#    #+#             */
/*   Updated: 2022/05/16 13:12:32 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_harl_array_func[0] = &Harl::debug;
	_harl_array_func[1] = &Harl::info;
	_harl_array_func[2] = &Harl::warning;
	_harl_array_func[3] = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	int		index_level (0);
	std::string level_string[NMBR_INDEX_LEVEL] = {"DEBUG", "INFO", "WARNING",
	"ERROR"};

	while (index_level < NMBR_INDEX_LEVEL && level != level_string[index_level])
		index_level++;
	if (index_level == NMBR_INDEX_LEVEL)
	{
		std::cout << "Invalid level. Type: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\"." << std::endl;
		return ;
	}
	((*this).*_harl_array_func[index_level])();
}

void	Harl::debug(void)
{
	std::cout << "Debug display." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info display." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning display." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error display." << std::endl;
}

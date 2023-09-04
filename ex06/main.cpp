/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:12:38 by jholl             #+#    #+#             */
/*   Updated: 2022/05/16 13:14:21 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "Bad args" << std::endl;
		return (0);
	}
		
	int index_level (0);
	std::string level(av[1]);
	std::string level_string[NMBR_INDEX_LEVEL] = {"DEBUG", "INFO", "WARNING",
	"ERROR"};
	while (index_level < NMBR_INDEX_LEVEL && level != level_string[index_level])
		index_level++;
	switch (index_level)
	{
	
		case 0:
		{
			harl.complain("DEBUG");
		}
		case 1:
		{
			harl.complain("INFO");
		}
		case 2:
		{
			harl.complain("WARNING");
		}
		case 3:
		{
			harl.complain("ERROR");
			break;
		}
		default:
		{
			std::cout << "Unexpected." << std::endl;
			break;
		}
	}
	return (0);
}

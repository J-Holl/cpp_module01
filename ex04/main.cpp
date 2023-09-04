/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:52:13 by jholl             #+#    #+#             */
/*   Updated: 2022/05/16 12:22:31 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h" 

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Arguments required: 1. File name, 2. Replaced string.";
		std::cout << "3. Replacing string." << std::endl;
		return (0);
	}

	std::string file(av[1]);
	std::ifstream ifs(av[1]);
	if (!ifs)
	{
		std::cout << "Impossible d'ouvrir: " << file << std::endl;
		return (0);
	}

	std::string file1(file + ".replace");
	std::ofstream output(file1.c_str(), std::ios::trunc);
	if (!output)
	{
		std::cerr << "Impossible de creer: " << file + ".replace" << std::endl;
	return (0);
	}

	std::stringstream operate;
	operate << ifs.rdbuf();	
	std::string s_operate(operate.str());
	int pos(0);
	std::string s_replaced(av[2]);
	std::string s_replacing(av[3]);
	if (!s_replaced.compare(s_replacing))
	{
		output << s_operate;
		return (0);
	}
	while (static_cast<const unsigned long>(pos = s_operate.find(s_replaced)) != std::string::npos)
	{
		s_operate.erase(pos, s_replaced.length());
		s_operate.insert(pos, s_replacing);
	}
	output << s_operate;
	return (0);
}

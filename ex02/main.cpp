/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:24:06 by jholl             #+#    #+#             */
/*   Updated: 2022/03/11 13:02:34 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string s ("HI THIS IS BRAIN");
	std::string *stringPTR (&s);
	std::string &stringREF (s);

	std::cout << "ADRESS PART:" << std::endl;
	std::cout << "Adress obtain with the string: " << &s << std::endl;
	std::cout << "Adress obtain with the pointer: " << stringPTR << std::endl;
	std::cout << "Adress obtain with the reference: " << &stringREF << std::endl;

	std::cout << "CONTENT PART:" << std::endl;
	std::cout << "Content obtain with the string: " << s << std::endl;
	std::cout << "Content obtain with the pointer: " << *stringPTR << std::endl;
	std::cout << "Content obtain with the reference: " << stringREF << std::endl;
}

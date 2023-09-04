/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:21:17 by jholl             #+#    #+#             */
/*   Updated: 2022/05/16 13:01:45 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

#define NMBR_INDEX_LEVEL 4
class		Harl;

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		void	debug(void);
		void	error(void);
		void	warning(void);
		void	info(void);
		typedef	void (Harl::* harl_func_ptr)();
		harl_func_ptr _harl_array_func[4];
};

#endif

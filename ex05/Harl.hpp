/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:03:44 by orakib            #+#    #+#             */
/*   Updated: 2023/07/21 19:06:34 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H

#define HARL_H

#include <iostream>
#include <string>

class	Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
};

#endif
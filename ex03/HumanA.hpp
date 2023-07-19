/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:54:54 by orakib            #+#    #+#             */
/*   Updated: 2023/07/19 10:40:08 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H

#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class	HumanA {
	private:
		Weapon		&arm;
		std::string	name;
	public:
		HumanA(std::string str, Weapon &arm);
		~HumanA();
		void	attack();
};

#endif
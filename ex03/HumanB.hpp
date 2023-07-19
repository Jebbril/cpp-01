/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:55:41 by orakib            #+#    #+#             */
/*   Updated: 2023/07/19 10:52:08 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H

#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class	HumanB {
	private:
		Weapon		*arm;
		std::string	name;
	public:
		HumanB(std::string str);
		~HumanB();
		void	setWeapon(Weapon &arm);
		void	attack();
};

#endif
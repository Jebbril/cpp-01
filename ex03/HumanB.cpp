/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:55:33 by orakib            #+#    #+#             */
/*   Updated: 2023/07/19 10:53:10 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) {
	this->name = str;
	this->arm = NULL;
}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &arm) {
	this->arm = &arm;
}

void	HumanB::attack() {
	if (this->arm)
		std::cout << this->name << " attacks with their " << this->arm->getType() << std::endl;
	else 
		std::cout << this->name << " attacks with no weapon" << std::endl;
}
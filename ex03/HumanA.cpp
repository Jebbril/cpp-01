/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:55:25 by orakib            #+#    #+#             */
/*   Updated: 2023/07/19 10:39:58 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &arm) : arm(arm) {
	this->name = str;
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->arm.getType() << std::endl;
}
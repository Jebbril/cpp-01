/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:54:34 by orakib            #+#    #+#             */
/*   Updated: 2023/07/19 08:21:30 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	this->type = "";
}

Weapon::Weapon(std::string str) {
	this->type = str;
}

Weapon::~Weapon() {}

const std::string	&Weapon::getType(void) {
	std::string	&ref = this->type;
	
	return (ref);
}

void	Weapon::setType(std::string str) {
	this->type = str;
}
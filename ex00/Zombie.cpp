/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:06:02 by orakib            #+#    #+#             */
/*   Updated: 2023/07/16 13:43:41 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::Zombie(std::string str)
{
	if (str.empty())
		this->name = "";
	else
		this->name = str;
}

Zombie::~Zombie()
{
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

void	Zombie::set_name(std::string str) {
	this->name = str;
}
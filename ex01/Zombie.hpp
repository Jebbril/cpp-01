/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:00:42 by orakib            #+#    #+#             */
/*   Updated: 2023/07/16 13:38:17 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

#define ZOMBIE_H

#include <iostream>
#include <new>

class	Zombie {
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string str);
		~Zombie();
		void	announce(void);
		void	set_name(std::string str);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
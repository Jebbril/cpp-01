/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:53:58 by orakib            #+#    #+#             */
/*   Updated: 2023/07/17 18:31:18 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

#define WEAPON_H

#include <string>

class Weapon {
	private:
		std::string	type;
	public:
		std::string	getType(void);
		void		setType(std::string str);
};

#endif
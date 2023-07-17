/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:03:08 by orakib            #+#    #+#             */
/*   Updated: 2023/07/17 14:06:26 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	int	i = -1;

	if (N <= 0)
		return (0);
	Zombie	*horde = new (std::nothrow) Zombie[N];
	if (!horde)
		return (0);
	while (++i < N) {
		horde[i] = Zombie(name);
	}
	return (horde);
}
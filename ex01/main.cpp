/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:00:32 by orakib            #+#    #+#             */
/*   Updated: 2023/07/17 15:48:50 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int	i = -1;
	int	N = 5;

	Zombie	*horde = zombieHorde(N, "omar");
	while (++i < N)
		horde[i].announce();
	delete []horde;
	
	i = -1;
	horde = zombieHorde(N, "");
	while (++i < N)
		horde[i].announce();
	delete []horde;
}
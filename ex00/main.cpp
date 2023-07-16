/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:00:32 by orakib            #+#    #+#             */
/*   Updated: 2023/07/16 15:02:13 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	*newz1 = new (std::nothrow) Zombie("omar");
	
	if (!newz1)
		return (1);
	newz1->announce();
	randomChump("omar");
	delete (newz1);
}
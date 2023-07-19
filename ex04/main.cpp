/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:59:45 by orakib            #+#    #+#             */
/*   Updated: 2023/07/19 13:22:05 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av) {
	
	
	if (ac != 4) {
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	else {
		return (mysed(av[1], av[2], av[3]));
	}
}
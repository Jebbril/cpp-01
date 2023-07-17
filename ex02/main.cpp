/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:53:11 by orakib            #+#    #+#             */
/*   Updated: 2023/07/17 16:20:33 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "This is the memory address of the string variable : " << &str << std::endl;
	std::cout << "This is the memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "This is the memory address held by stringREF      : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "This is the value of the string variable  : " << str << std::endl;
	std::cout << "This is the value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "This is the value pointed to by stringREF : " << stringREF << std::endl;
}
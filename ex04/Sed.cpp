/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:00:00 by orakib            #+#    #+#             */
/*   Updated: 2023/07/21 18:33:22 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	mysed(std::string filename, std::string s1, std::string s2) {
	std::ifstream	original;
	std::ofstream	modified;
	std::string		line;
	std::string		str;
	size_t			i;

	if (s1.length() == 0) {
		std::cerr << "The string to replace is empty !" << std::endl;
		return (1);
	}
	original.open(filename);
	if (!original.is_open()) {
		std::cerr << "Cannot open " << filename << " !" << std::endl;
		return (1);
	}
	while (getline(original, line)) {
		str.append(line);
		str.append("\n");
	}
	modified.open(filename + ".replace");
	if (!original.is_open()) {
		std::cerr << "Cannot open " << filename + ".replace" << " !" << std::endl;
		original.close();
		return (1);
	}
	if (s1 != s2) {
		while (str.find(s1) != (size_t)-1) {
			i = str.find(s1);
			str.erase(i, s1.length());
			str.insert(i, s2);
		}
	}
	modified << str;
	original.close();
	modified.close();
	return (0);
}
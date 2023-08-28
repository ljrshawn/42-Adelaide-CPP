/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:58:25 by jlyu              #+#    #+#             */
/*   Updated: 2023/08/28 14:58:27 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	PhoneBook phoneBook;
	std::string str;

	while(str != "EXIT") {
		std::cout << "ENTER a commond ~ ";
		std::getline(std::cin, str);
		if (str == "ADD")
			phoneBook.add();
		else if (str == "SEARCH")
			phoneBook.search();
		if (std::cin.eof()) {
			std::cout << std::endl;
			return 0;
		}
	}
	return 0;
}
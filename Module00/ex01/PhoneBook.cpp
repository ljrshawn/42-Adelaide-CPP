/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:58:30 by jlyu              #+#    #+#             */
/*   Updated: 2023/08/28 14:58:31 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->index = 0;
}

void PhoneBook::add() {
	std::string str;

	if (this->index > 7)
		std::cout << "Overwriting information about " << this->contacts[this->index % 8].getFirstName() << std::endl;
	str = "";
	while (str == "") {
		std::cout << "Please enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].setFirstName(str);
	}
	str = "";
	while (str == "") {
		std::cout << "Please enter a last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].setLastName(str);
	}
	str = "";
	while (str == "") {
		std::cout << "Please enter a nick name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].setNickName(str);
	}
	str = "";
	while (str == "") {
		std::cout << "Please enter a phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].setNumber(str);
	}
	this->index++;
}

void printContacts(Contact *contact, int i) {
	if (contact->getFirstName() == "")
		return;
	std::string firstName = contact->getFirstName();
	std::string lastName = contact->getLastName();
	std::string nickName = contact->getNickName();

	if (firstName.size() > 10)
		firstName = firstName.substr(0, 9) + ".";
	if (lastName.size() > 10)
		lastName = lastName.substr(0, 9) + ".";
	if (nickName.size() > 10)
		nickName = nickName.substr(0, 9) + ".";
	std::cout << std::right << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << firstName << "|"
                  << std::setw(10) << lastName << "|"
                  << std::setw(10) << nickName << std::endl;
}

void printIndex(Contact *contact, int i) {
	if (contact->getFirstName() == "") {
		std::cout << "Index invalid! You can add more contacts." << std::endl;
		return;
	}
	std::cout << std::setw(12) << "Index: " << i << std::endl;
	std::cout << std::setw(12) << "First Name: " << contact->getFirstName() << std::endl;
	std::cout << std::setw(12) << "Last Name: " << contact->getLastName() << std::endl;
	std::cout << std::setw(12) << "Nick name: " << contact->getNickName() << std::endl;
	std::cout << std::setw(12) << "P Number: " << contact->getNumber() << std::endl;
}

void PhoneBook::search() {
	if (this->index == 0)
	{
		std::cout << "Empty! You can add contacts." << std::endl;
		return;
	}
	else {
		std::cout << "     Index|First Name| Last Name| Nick name" << std::endl;
		std::cout << "----------|----------|----------|----------" << std::endl;
		int i = -1;
		while (++i < 8)
			printContacts(&(this->contacts[i]), i);
		std::cout << "----------|----------|----------|----------" << std::endl;
	}
	std::string str = "";
	while (str == "") {
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != ""){
			try {
				int index = std::stoi(str);
				if (index <= 8 && index > 0 && &(this->contacts[index]) != NULL)
					printIndex(&(this->contacts[index - 1]), index);
				else
				{
					std::cout << "Invalid index, select an index: ";
					str = "";
				}
			} catch (const std::invalid_argument &e)
			{
				std::cout << "Invalid index, select an index: ";
				str = "";
			}
		}
	}
}
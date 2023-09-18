/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:03:21 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 16:11:22 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_enePoints = 100;
	this->_attDamage = 30;
	std::cout << "FragTrap from ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_enePoints = 100;
	this->_attDamage = 30;
	std::cout << "FragTrap from ClapTrap " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap from ClapTrap " << this->_name << " destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other) {
	std::cout << "FragTrap from ClapTrap " << this->_name << " copied." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other) {
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::highFivesGuys() {
	if (this->_hitPoints <= 0)
		std::cout << "High fives request: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "FragTrap from ClapTrap " << this->_name << "  high fives request." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:23:57 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 16:11:42 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_enePoints = 50;
	this->_attDamage = 20;
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_enePoints = 50;
	this->_attDamage = 20;
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
	std::cout << "ScavTrap from ClapTrap " << this->_name << " copied." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap from ClapTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::guardGate() {
	if (this->_hitPoints <= 0)
		std::cout << "Switch: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to mode: \"Guard Gate\"." << std::endl;
}
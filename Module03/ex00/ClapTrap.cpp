/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:01:38 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 11:52:13 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "(null)";
	this->_hitPoints = 10;
	this->_enePoints = 10;
	this->_attDamage = 0;
	std::cout << "ClapTrap " << this->_name << " created with default constructor." << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name) {
	this->_hitPoints = 10;
	this->_enePoints = 10;
	this->_attDamage = 0;
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_enePoints = other._enePoints;
		this->_attDamage = other._attDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_enePoints > 0 && this->_hitPoints > 0) {
		this->_enePoints--;
		std::cout << "ClapTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attDamage;
		std::cout << " points of damage!" << std::endl;
	}
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_enePoints)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " point(s) of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead :(" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_enePoints > 0) {
		this->_enePoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " point(s)." << std::endl;
	}
	if (this->_hitPoints <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is dead." << std::endl;
	else if (!this->_enePoints)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

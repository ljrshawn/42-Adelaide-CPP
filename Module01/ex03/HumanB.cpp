/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:26:58 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 15:34:59 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
	this->_name = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:15:40 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 15:49:46 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	this->_type = "(null)";
}

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
}

std::string& Weapon::getType() {
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

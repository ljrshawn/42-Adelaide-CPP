/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:21:41 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 15:29:28 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {
	std::cout << "HumanA " << name << " created with ";
	std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

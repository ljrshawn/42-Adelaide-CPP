/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:53:00 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 10:18:59 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) :name(name) {
	std::cout << "Zombie: " << this->name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie: " << this->name << " destroyed" << std::endl;
}

std::string Zombie::getName() {
	return this->name;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:37:30 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 11:46:07 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "(null)";
	std::cout << "Zombie: " << this->name << " created" << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "Zombie: " << this->name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie: " << this->name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

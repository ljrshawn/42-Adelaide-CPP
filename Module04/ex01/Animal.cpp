/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:01:06 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/20 10:18:21 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("(null)") {
	std::cout << "Animal " << this->_type << " created with default constructor." << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout << "Animal " << this->_type << " created." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal " << this->_type << " destroyed." << std::endl;
}

Animal::Animal(Animal const &other) : _type(other._type) {
}

Animal &Animal::operator=(Animal const &other) {
	if (this != &other) {
		this->setType(other._type);
	}
	return *this;
}

Brain &Animal::getBrain() const {
	std::cout << "Animal: No Brain!!! " << std::endl;
	return *(new Brain());
}

std::string const &Animal::getType() const {
	return this->_type;
}

void Animal::setType(const std::string &type) {
	this->_type = type;
}

void Animal::makeSound() const {
	std::cout << "I am Animal!!! " << std::endl;
}
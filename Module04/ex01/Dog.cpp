/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:25:53 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 16:50:29 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->_brain = new Brain();
	std::cout << "Dog created." << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog destroyed." << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other) {
	this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(Dog const &other) {
	Animal::operator=(other);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Dog: Wooooof!!! " << std::endl;
}

Brain &Dog::getBrain() const {
	return *(this->_brain);
}

void Dog::setBrain(Brain const &brain) {
	*this->_brain = brain;
}

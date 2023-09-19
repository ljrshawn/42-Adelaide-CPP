/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:23:48 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 16:48:07 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->_brain = new Brain();
	std::cout << "Cat created." << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other) {
	this->_brain = new Brain(*other._brain);
}

Cat &Cat::operator=(Cat const &other) {
	Animal::operator=(other);
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Cat: Meoooow!!! " << std::endl;
}

Brain &Cat::getBrain() const {
	return *(this->_brain);
}

void Cat::setBrain(Brain const &brain) {
	*this->_brain = brain;
}

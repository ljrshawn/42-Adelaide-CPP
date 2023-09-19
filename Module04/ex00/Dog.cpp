/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:25:53 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 15:53:45 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog created." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog: Wooooof!!! " << std::endl;
}

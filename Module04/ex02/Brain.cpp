/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:11:32 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 16:20:47 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created with default constructor." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(Brain const &other) {
	*this = other;
}

Brain const &Brain::operator=(Brain const &other) {
	if (this != &other)
		std::copy(other._ideas, other._ideas + 100, this->_ideas);
	return *this;
}

std::string const &Brain::getIdea(int const &index) const {
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	return this->_ideas[0];
}

void Brain::setIdea(std::string const &idea, int const &index) {
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}
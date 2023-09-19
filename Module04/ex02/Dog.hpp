/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:24:25 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 16:52:23 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
private:
	Brain *_brain;
public:
	Dog();
	~Dog();

	Dog(Dog const &other);
	Dog &operator=(Dog const &other);

	void makeSound() const;

	Brain &getBrain() const;
	void setBrain(Brain const &brain);
};

#endif

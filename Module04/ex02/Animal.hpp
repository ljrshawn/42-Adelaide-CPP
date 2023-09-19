/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:01:10 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 17:04:32 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string _type;
	Animal();
	Animal(const std::string &type);
	Animal(Animal const &other);
public:
	virtual ~Animal();

	Animal &operator=(Animal const &other);

	virtual Brain &getBrain() const = 0;
	std::string const &getType() const;
	void setType(const std::string &type);
	virtual void makeSound() const;
};

#endif

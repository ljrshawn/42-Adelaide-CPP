/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:01:10 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/20 10:15:32 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
private:
	std::string _type;
public:
	Animal();
	Animal(const std::string &type);
	virtual ~Animal();

	Animal(Animal const &other);
	Animal &operator=(Animal const &other);

	virtual Brain &getBrain() const;
	std::string const &getType() const;
	void setType(const std::string &type);
	virtual void makeSound() const;
};

#endif

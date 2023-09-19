/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:52:46 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 15:52:47 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
#define WRONG_HPP

#include <iostream>

class WrongAnimal {
private:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	virtual ~WrongAnimal();

	WrongAnimal(WrongAnimal const &other);
	WrongAnimal &operator=(WrongAnimal const &other);

	std::string const &getType() const;
	void setType(const std::string &type);
	virtual void makeSound() const;
};

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	~WrongCat();

	void makeSound() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:20:57 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/20 10:40:42 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
private:
	Brain *_brain;
public:
	Cat();
	virtual ~Cat();

	Cat(Cat const &other);
	Cat &operator=(Cat const &other);

	void makeSound() const;

	Brain &getBrain() const;
	void setBrain(Brain const &brain);
};

#endif

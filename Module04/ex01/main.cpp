/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:10 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 17:31:48 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();;
	std::cout << "-------------------------------------\n";
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	Brain *brain;
	brain = &j->getBrain();
	brain->setIdea("Hello World!", 0);
	brain->setIdea("Let's play ball!!", 1);
	brain->setIdea("Feed!", 2);
	std::cout << j->getBrain().getIdea(0) << std::endl;
	std::cout << j->getBrain().getIdea(1) << std::endl;
	std::cout << "-------------------------------------\n";
	delete j;
	delete i;
}
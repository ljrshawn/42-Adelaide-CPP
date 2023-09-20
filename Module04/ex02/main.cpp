/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:10 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/20 10:43:02 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	std::cout << "-------------------------------------\n";
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	Brain *brain;
	brain = &dog->getBrain();
	brain->setIdea("Hello World!", 0);
	brain->setIdea("Let's play ball!!", 1);
	brain->setIdea("Feed!", 2);
	std::cout << dog->getBrain().getIdea(0) << std::endl;
	std::cout << dog->getBrain().getIdea(1) << std::endl;
	std::cout << "-------------------------------------\n";
	Animal *animal = dog;
	std::cout << animal->getType() << std::endl;
	std::cout << "-------------------------------------\n";
	delete cat;
	delete dog;
}
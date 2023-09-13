/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:58:28 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 11:19:44 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name);

int main() {
	Zombie *zombie = newZombie("test");
	zombie->announce();
	randomChump("hello");
	delete zombie;

	return 0;
}

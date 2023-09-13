/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:55:02 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 12:13:08 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
	int size = 5;
	Zombie *zs = zombieHorde(size, "hello");
	for (int i = 0; i < size; i++)
		zs[i].announce();
	delete [] zs;
	return 0;
}
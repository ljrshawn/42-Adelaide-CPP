/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:53:39 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 14:48:24 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap a("a");

	a.attack("b");
	a.takeDamage(90);
	a.beRepaired(10);
	a.attack("c");
	a.attack("d");
	a.attack("e");
	a.attack("f");
	a.attack("g");
	a.attack("h");
	a.attack("i");
	a.attack("j");
	a.attack("k");
	a.takeDamage(30);
	a.beRepaired(10);
	a.attack("l");
	a.attack("m");
	a.guardGate();
}
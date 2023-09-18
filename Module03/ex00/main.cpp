/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:53:39 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 11:53:41 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a("a");

	a.attack("b");
	a.takeDamage(2);
	a.beRepaired(2);
	a.attack("c");
	a.attack("d");
	a.attack("e");
	a.attack("f");
	a.attack("g");
	a.takeDamage(2);
	a.beRepaired(2);
	a.attack("h");
	a.attack("i");
	a.attack("j");
	a.attack("k");
	a.attack("l");
	a.attack("m");
}
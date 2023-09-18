/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:05:46 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 11:46:20 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int _hitPoints, _enePoints, _attDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
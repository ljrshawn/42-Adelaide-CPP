/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:11:21 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 12:11:22 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &other);

	void guardGate();
};

#endif
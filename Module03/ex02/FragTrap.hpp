/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:02:23 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/18 15:02:38 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string const &name);
	~FragTrap();

	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);
};

#endif
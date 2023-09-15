/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:21:39 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/15 15:50:55 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _value;
	static const int _bit = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	// Operators
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	Fixed operator==(const Fixed &other) const;
	Fixed operator!=(const Fixed &other) const;
	Fixed operator<=(const Fixed &other) const;
	Fixed operator>=(const Fixed &other) const;
	Fixed operator<(const Fixed &other) const;
	Fixed operator>(const Fixed &other) const;

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int value);
	Fixed operator--(int value);

	static Fixed min(Fixed &one, Fixed &two);
	static const Fixed &min(const Fixed &one, const Fixed &two);
	static Fixed max(Fixed &one, Fixed &two);
	static const Fixed &max(const Fixed &one, const Fixed &two);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif

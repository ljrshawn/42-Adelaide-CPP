/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:21:49 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/15 16:13:24 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value << this->_bit) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << this->_bit))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		// std::cout << "Copy assignment operator called" << std::endl;
		_value = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
	return ((float) this->_value / (1 << this->_bit));
}

int Fixed::toInt( void ) const {
	return (this->_value >> this->_bit);
}

// Operators
Fixed Fixed::operator+(const Fixed &other) const {
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator==(const Fixed &other) const{
	return (this->toFloat() == other.toFloat());
}

Fixed Fixed::operator!=(const Fixed &other) const{
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator<=(const Fixed &other) const{
	return (this->toFloat() <= other.toFloat());
}

Fixed Fixed::operator>=(const Fixed &other) const{
	return (this->toFloat() >= other.toFloat());
}

Fixed Fixed::operator<(const Fixed &other) const{
	return (this->toFloat() < other.toFloat());
}

Fixed Fixed::operator>(const Fixed &other) const{
	return (this->toFloat() > other.toFloat());
}


Fixed &Fixed::operator++(void) {
	return (this->setRawBits(this->getRawBits() + 1), *this);
}

Fixed &Fixed::operator--(void) {
	return (this->setRawBits(this->getRawBits() - 1), *this);
}

Fixed Fixed::operator++(int value) {
	Fixed tem;
	tem = *this;
	if (!value)
		value = 1;
	return (this->setRawBits(this->getRawBits() + value), tem);
}

Fixed Fixed::operator--(int value) {
	Fixed tem;
	tem = *this;
	if (!value)
		value = 1;
	return (this->setRawBits(this->getRawBits() - value), tem);
}

Fixed Fixed::min(Fixed &one, Fixed &two) {
	return (one.getRawBits() < two.getRawBits() ? one : two);
}

const Fixed &Fixed::min(const Fixed &one, const Fixed &two) {
	return (one.getRawBits() < two.getRawBits() ? one : two);
}

Fixed Fixed::max(Fixed &one, Fixed &two) {
	return (one.getRawBits() > two.getRawBits() ? one : two);
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two) {
	return (one.getRawBits() > two.getRawBits() ? one : two);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

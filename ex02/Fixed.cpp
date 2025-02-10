/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:50:36 by christian         #+#    #+#             */
/*   Updated: 2025/02/10 20:54:40 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	//std::cout << "default constructor" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "int constructor" << std::endl;
	this->_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "float constructor" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}


Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "copy constructor" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	// std::cout << "copy assignment operator" << std::endl;
	if (this != &copy)
		this->_fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function" << std::endl;
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &copy) const
{
	return this->_fixedPointValue > copy._fixedPointValue;
}

bool Fixed::operator<(const Fixed &copy) const
{
	return this->_fixedPointValue < copy._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return this->_fixedPointValue >= copy._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return this->_fixedPointValue <= copy._fixedPointValue;
}

bool Fixed::operator==(const Fixed &copy) const
{
	return this->_fixedPointValue == copy._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return this->_fixedPointValue != copy._fixedPointValue;
}

Fixed Fixed::operator+(const Fixed &copy) const
{
	Fixed newValue;
	newValue._fixedPointValue = this->_fixedPointValue + copy._fixedPointValue;
	return newValue;
}

Fixed Fixed::operator-(const Fixed &copy) const
{
	Fixed newValue;
	newValue._fixedPointValue = this->_fixedPointValue - copy._fixedPointValue;
	return newValue;
}

Fixed Fixed::operator*(const Fixed &copy) const
{
	Fixed newValue;
	newValue._fixedPointValue = (this->_fixedPointValue * copy._fixedPointValue) >> _fractionalBits;
	return newValue;
}

Fixed Fixed::operator/(const Fixed &copy) const
{
	if (copy._fixedPointValue == 0)
		{
		std::cerr << "Division by zero is not allowed. Will just return 0" << std::endl;
		return 0;
		}
	Fixed newValue;
	newValue._fixedPointValue = (this->_fixedPointValue << _fractionalBits) / copy._fixedPointValue;
	return newValue;
}

Fixed &Fixed::operator++()
{
	++this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->_fixedPointValue;
	return temp;
}

Fixed &Fixed::operator--()
{
	--this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--this->_fixedPointValue;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? b : a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? b : a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a._fixedPointValue > b._fixedPointValue) ? a : b;
}

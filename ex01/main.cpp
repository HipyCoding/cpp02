/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:50:41 by christian         #+#    #+#             */
/*   Updated: 2025/02/10 20:28:36 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
Fixed const e;
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

// ./a.out
// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Copy assignment operator called
// Float constructor called
// Copy assignment operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called

// int main(void) 
// 	{
// 	// float constructor
// 	Fixed a(3.14f);
// 	Fixed b(42.42f);
	
// 	// toFloat() conversion
// 	std::cout << "a as float: " << a.toFloat() << std::endl;
// 	std::cout << "b as float: " << b.toFloat() << std::endl;

// 	// raw bits for comparison
// 	std::cout << "a raw bits: " << a.getRawBits() << std::endl;
// 	std::cout << "b raw bits: " << b.getRawBits() << std::endl;

// 	// shifted back to integer
// 	std::cout << "a as int: " << a.toInt() << std::endl;
// 	std::cout << "b as int: " << b.toInt() << std::endl;

// 	return 0;
// }

// for the example of 3.14:
// in binary it is 00000011.00100100
// shifted << 8bits makes it 00000011 00100100.00000000
// which is the same as multiplying by 256 (2 to the power of 8)
// which is 804 in decimal (our number in rawbits)
// to shift it back we divide by 256 again
// and get 3.140625, which is a different number due to rounding margins

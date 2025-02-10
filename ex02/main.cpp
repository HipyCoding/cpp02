/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:50:41 by christian         #+#    #+#             */
/*   Updated: 2025/02/10 22:48:47 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}

// in this case a gets incremented
// by the smalles representable increment
// which is 1 / 256 = 0.0039...

// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016

// ----more thorough main function for testing----

// void printSeparator(const std::string& testName) {
// 	std::cout << "\n--- " << testName << " ---\n";
// }

// int main() {
// 	// Test 1: Constructors and Basic Operations
// 	printSeparator("Constructors and Basic Operations");
// 	{
// 		// Default constructor
// 		Fixed a;
// 		std::cout << "a: " << a << std::endl;

// 		// Integer constructor
// 		Fixed b(10);
// 		std::cout << "b (int constructor): " << b << std::endl;

// 		// Floating-point constructor
// 		Fixed c(42.42f);
// 		std::cout << "c (float constructor): " << c << std::endl;

// 		// Copy constructor
// 		Fixed d(b);
// 		std::cout << "d (copy of b): " << d << std::endl;
// 	}

// 	// Test 2: Comparison Operators
// 	printSeparator("Comparison Operators");
// 	{
// 		Fixed a(5.5f);
// 		Fixed b(10.0f);
// 		Fixed c(5.5f);

// 		std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
// 		std::cout << "a > b: " << (a > b) << std::endl;
// 		std::cout << "a < b: " << (a < b) << std::endl;
// 		std::cout << "a >= c: " << (a >= c) << std::endl;
// 		std::cout << "a <= c: " << (a <= c) << std::endl;
// 		std::cout << "a == c: " << (a == c) << std::endl;
// 		std::cout << "a != b: " << (a != b) << std::endl;
// 	}

// 	// Test 3: Arithmetic Operators
// 	printSeparator("Arithmetic Operators");
// 	{
// 		Fixed a(1.0f);
// 		Fixed b(3.0f);
// 		Fixed c = a / b;

// 		std::cout << "a = " << a << ", b = " << b << std::endl;
// 		std::cout << "a + b: " << (a + b) << std::endl;
// 		std::cout << "a - b: " << (a - b) << std::endl;
// 		std::cout << "a * b: " << (a * b) << std::endl;
// 		std::cout << "a / b: " << (a / b) << std::endl;
// 		std::cout << "c = a / b = " << c << std::endl;
// 		c = b * c;
// 		std::cout << "b * c: " << (c) << std::endl;
// 	}

// 	// Test 4: Increment/Decrement Operators
// 	printSeparator("Decrement Operators");
// 	{
// 		Fixed a(5.5f);
		
// 		// Tests for decrement
// 		std::cout << "a: " << a << std::endl;
// 		std::cout << "--a: " << --a << std::endl;
// 		std::cout << "a--: " << a-- << std::endl;
// 		std::cout << "Final value of a: " << a << std::endl;
// 	}

// 	// Test 5: Min/Max Static Methods
// 	printSeparator("Min/Max Static Methods");
// 	{
// 		Fixed a(5.5f);
// 		Fixed b(10.0f);
// 		const Fixed c(7.7f);

// 		std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
		
// 		// Non-const min/max
// 		std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
// 		std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
		
// 		// Const min/max
// 		std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
// 		std::cout << "max(a, c): " << Fixed::max(a, c) << std::endl;
// 	}

// 	// Test 6: Conversion Methods
// 	printSeparator("Conversion Methods");
// 	{
// 		Fixed a(42.42f);
		
// 		std::cout << "a: " << a << std::endl;
// 		std::cout << "a as int: " << a.toInt() << std::endl;
// 		std::cout << "a as float: " << a.toFloat() << std::endl;
// 	}

// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:50:29 by christian         #+#    #+#             */
/*   Updated: 2025/02/10 16:52:51 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}

// int main(void)
// {
// 	Fixed a;
// 	std::cout << "raw bits set by default to: " << a.getRawBits() << std::endl;
// 	a.setRawBits(42);
// 	std::cout << "raw bits set to: " << a.getRawBits() << std::endl;
// 	Fixed b(a);
// 	std::cout << "raw bits copied from a to b: " << b.getRawBits() << std::endl;
// 	Fixed c;
// 	c = b;
// 	std::cout << "raw bits assigned form b to c: " << c.getRawBits() << std::endl;

// 	return (0);
// }


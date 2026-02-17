/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:41:47 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/17 18:56:53 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"


// test sur detectType
// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 	{
// 		std::cout << "Usage: ./convert <literal>\n";
// 		return 1;
// 	}

// 	std::string input = av[1];

// 	ScalarConverter::LiteralType type =
// 		ScalarConverter::detectType(input);

// 	switch (type)
// 	{
// 		case ScalarConverter::CHAR:
// 			std::cout << "Type detected: CHAR\n";
// 			break;
// 		case ScalarConverter::INT:
// 			std::cout << "Type detected: INT\n";
// 			break;
// 		case ScalarConverter::FLOAT:
// 			std::cout << "Type detected: FLOAT\n";
// 			break;
// 		case ScalarConverter::DOUBLE:
// 			std::cout << "Type detected: DOUBLE\n";
// 			break;
// 		default:
// 			std::cout << "Type detected: INVALID\n";
// 	}

// 	return 0;
// }

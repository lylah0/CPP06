/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:16:51 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/10 15:59:52 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout << "ScalarConverter default constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter&){
	std::cout << "ScalarConverter copy constructor called." << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&){
	std::cout << "ScalarConverter assignment operator= called." << std::endl;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "ScalarConverter destructor called." << std::endl;
}

ScalarConverter::LiteralType	ScalarConverter::detectType(const std::string& s){

}

void	ScalarConverter::convert(const std::string& literal){

}

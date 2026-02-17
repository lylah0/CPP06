/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:16:51 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/17 17:06:44 by lylrandr         ###   ########.fr       */
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

static bool IsFloat(const std::string& s){
	if (s.length() < 4)
		return (false);
	bool		hasDigit = false;
	bool		hasDot = false;
	std::string	copy = s.substr(0, s.length() - 1);
	if (s[s.length() - 1] == 'f'){
		for (size_t i = 0; i < copy.length(); i++){
			if (std::isdigit(copy[i]))
				hasDigit = true;
			else if (copy[i] == '.'){
				if (hasDot)
					return (false);
				if (i == copy.length() - 1 || i == 0)
					return (false);
				else
					hasDot = true;
			}
			else if ((copy[i] == '+' || copy[i] == '-') && i == 0)
				continue;
			else
				return (false);
		}
		if (!hasDigit || !hasDot)
			return (false);
		return (true);
	}
	return (false);
}

static bool	IsDouble(const std::string& s)
{
	bool	hasDigit = false;
	bool	hasDot = false;

	if (s.length() < 3)
		return false;
	if (s[s.length() - 1] == 'f')
		return false;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (std::isdigit(s[i]))
			hasDigit = true;
		else if (s[i] == '.')
		{
			if (hasDot)
				return false;
			if (i == 0 || i == s.length() - 1)
				return (false);
			hasDot = true;
		}
		else if ((s[i] == '+' || s[i] == '-') && i == 0)
			continue;
		else
	return (false);
	}
	if (!hasDigit || !hasDot)
		return (false);
	return (true);
}

ScalarConverter::LiteralType	ScalarConverter::detectType(const std::string& s){
	if (s == "+inf" || s == "-inf" || s == "nan" || IsDouble(s))
		return (DOUBLE);
	if (s == "+inff" || s == "-inff" || s == "nanf" || IsFloat(s))
		return (FLOAT);
	if (s.length() == 3 && s[0] == '\'' && s[3] == '\'')
		return (CHAR);
	if ()
		return (INT);
	else
		return (INVALID);
}

void	ScalarConverter::convert(const std::string& literal){

}

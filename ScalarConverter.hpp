/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:30:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/17 18:55:22 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
# include <string>

class ScalarConverter{
	private :

		enum LiteralType{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			INVALID
		};

		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		ScalarConverter& operator=(const ScalarConverter&);
		~ScalarConverter();

		static LiteralType	detectType(const std::string& s);

	public :

		static void	convert(const std::string& literal);
};

#endif

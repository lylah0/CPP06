/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:41:47 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/18 16:12:15 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int	main(int ac, char **av){
	if (ac == 2){
		ScalarConverter::convert(av[1]);
		return (0);
	}
	std::cout << "format: ./convert <literal>" << std::endl;
	return (1);
}

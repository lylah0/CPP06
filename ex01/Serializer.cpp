/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:22:09 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/27 16:45:38 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer&){
	std::cout << "Copy constructor called" << std::endl;
}

Serializer&	Serializer::operator=(const Serializer& rhs){
	(void)rhs;
	return(*this);
}

Serializer::~Serializer(){
	std::cout << "Destructor called" << std::endl;
}


uintptr_t	Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

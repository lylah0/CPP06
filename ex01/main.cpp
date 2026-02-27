/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:33:31 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/27 16:48:13 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(){
	Data	a;

	a.age = 11;
	a.name = "Noemie";

	std::cout << "data original ptr : " << &a << std::endl;
	std::cout << "serialize : " << Serializer::serialize(&a) << std::endl;
	std::cout << "deserialize : " << Serializer::deserialize(Serializer::serialize(&a)) << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:02:00 by lylrandr          #+#    #+#             */
/*   Updated: 2026/02/27 15:20:52 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <string>
# include <cstdint>
# include <iostream>

struct Data{
	std::string	name;
	int			age;
};

class Serializer{
	private :
		Serializer();
		Serializer(const Serializer&);
		Serializer&	operator=(const Serializer& rhs);
		~Serializer();

	public :
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif

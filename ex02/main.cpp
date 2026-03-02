/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:01:37 by lylrandr          #+#    #+#             */
/*   Updated: 2026/03/02 16:56:02 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Functions.hpp"


//srand genere nb aleatoire sur la base de seed (time) -> change chaque seconde
int	main(){
	srand(time(NULL));
	Base	*p = generate();

	std::cout << "===test pointeur:" << std::endl;
	identify(p);
	std::cout << "===test reference:" << std::endl;
	identify(*p);
	delete(p);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:07 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 10:01:34 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat( void ): Animal("Cat") {
	std::cout << "Cat constructor create" << std::endl;
}

Cat::Cat( const Cat &cp ){
	*this = cp;
}

Cat& Cat::operator=( const Cat &cp ){
	if (this != &cp){
		this->type = cp.type;
	}
	return (*this);
}

Cat::~Cat( void ){
	std::cout << "Cat Destoy." << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meaow Meaowwwwwww!!!" << std::endl;
}

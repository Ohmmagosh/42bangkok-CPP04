/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:07 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:49:21 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat( void ): Animal("Cat") {
	std::cout << "Cat constructor call" << std::endl;
	this->brain = new Brain();
}

Cat::Cat( const Cat &cp ){
	*this = cp;
}

Cat& Cat::operator=( const Cat &cp ){
	std::cout << "copy assignment call" << std::endl;
	if (this != &cp){
		delete this->brain;
		this->brain = new Brain(*cp.brain);
		this->type = cp.type;
	}
	return (*this);
}

Cat::~Cat( void ){
	std::cout << "Cat Destoy." << std::endl;
	delete this->brain;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meaow Meaowwwwwww!!!" << std::endl;
}

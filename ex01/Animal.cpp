/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:45:54 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/09 22:15:45 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Default") {
	std::cout << "Default Animal constructor call" << std::endl;
}

Animal::Animal( std::string type ): type(type){
	std::cout << "Animal constructor type " << type << " call." << std::endl;
}

Animal::Animal(const Animal &cp){
	*this = cp;
	std::cout << "copy constructor call" << std::endl;
}

Animal& Animal::operator=( const Animal &cp){
	if (this != &cp){
		this->type = cp.type;
	}
	return (*this);
}

Animal::~Animal( void ){
	std::cout << "Animal deconstructor destroy " << this->getType() << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal sound" << std::endl;
}

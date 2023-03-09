/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:43:00 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 10:00:11 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("Default"){
	std::cout << this->type << " Constructor create " << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): type(type){
	std::cout << this->type << " Constructor create " << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &cp ){
	*this = cp;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &cp ){
	if (this != &cp){
		this->type = cp.type;
	}
	std::cout << "copy assignment" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal Deconstrunctor destroy " << this->getType() << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}



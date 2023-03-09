/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:05 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 10:01:18 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog") {
	std::cout << "Dog constructor create" << std::endl;
}

Dog::Dog( const Dog &cp){
	*this = cp;
}

Dog& Dog::operator=(const Dog &cp){
	if (this != &cp){
		this->type = cp.type;
	}
	return (*this);
}

Dog::~Dog( void ){
	std::cout << "Dog Destoy." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Bowwww Bowwwwwww!!!" << std::endl;
}

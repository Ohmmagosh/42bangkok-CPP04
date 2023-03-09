/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:05 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/09 22:17:05 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog") {
	std::cout << "Dog constructor call" << std::endl;
	this->brain = new Brain();
}

Dog::Dog( const Dog &cp){
	*this = cp;
	std::cout << "Dog copy constructor call" << std::endl;
}

Dog& Dog::operator=(const Dog &cp){
	std::cout << "copy assing call" << std::endl;
	if (this != &cp){
		delete this->brain;
		this->brain = new Brain(*cp.brain);
		this->type = cp.type;
	}
	return (*this);
}

Dog::~Dog( void ){
	//for (int i = 0; i < 100; i++)
	//{
	//	std::cout << i << std::endl;
	//	std::cout << this->brain->idea[i] << std::endl;
	//}
	delete this->brain;
	std::cout << "Dog Destoy." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Bowwww Bowwwwwww!!!" << std::endl;
}

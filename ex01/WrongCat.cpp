/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:42:57 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 09:19:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat"){
	std::cout << "WrongCat Constructor create " << this->type << std::endl;
}

WrongCat::WrongCat( const WrongCat &cp){
	*this = cp;
}

WrongCat&	WrongCat::operator=( const WrongCat &cp ) {
	if(this != &cp){
		this->type = cp.type;
	}
	return (*this);
}

WrongCat::~WrongCat (){
	std::cout << "WrongCat destroy " << this->type << std::endl;
}

void	WrongCat::makeSound( void ) const{
	std::cout << "WrongCat sound " << std::endl;
}

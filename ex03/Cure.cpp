/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:42:55 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:21:23 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure( void )
: AMateria("cure")
{
	//std::cout << "Cure constructor call" << std::endl;
}


Cure::~Cure(){
	//std::cout <<"Cure deconstructor call" << std::endl;
}

void Cure::use( ICharacter &target ){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const {
	return new Cure;
}

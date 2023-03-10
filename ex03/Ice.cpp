/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:30:38 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:23:34 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice( void )
: AMateria("ice")
{
	//std::cout << "Ice constructor call" << std::endl;
}


Ice::~Ice(){
	//std::cout <<"Ice deconstructor call" << std::endl;
}

void Ice::use( ICharacter &target ){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}

Ice* Ice::clone() const {
	return new Ice;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:27:36 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:23:01 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( const std::string &type )
: type(type)
{
	//std::cout << "AMateria " << this->type <<" constructor call." << std::endl;
}

AMateria::~AMateria(){
	//std::cout << "AMateria " << this->type <<" deconstructor call." << std::endl;
}

const std::string& AMateria::getType( void ) const{
	return this->type;
}

void	AMateria::use( ICharacter &target ){
	std::cout << "AMateria on "<< target.getName() << std::endl;
	//std::cout << this->description.replace(this->description.find("<name>"), 6, target.getName()) << std::endl;
}

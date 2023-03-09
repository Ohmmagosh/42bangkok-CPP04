/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:40:46 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/09 23:13:41 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor call" << std::endl;
	//for (int i = 0; i < 100; i++)
	//	this->idea[i] = "Hello";
}

Brain::Brain( const Brain &cp ){
	for (int i = 0; i < 100; i++)
		this->idea[i] = cp.idea[i];
}

Brain& Brain::operator=( const Brain &cp ) {
	for (int i = 0; i < 100; i++)
		this->idea[i] = cp.idea[i];
	std::cout << "Copy assignment" << std::endl;
	return (*this);
}

Brain::~Brain(){
	std::cout << "brain decostructor destroy " << std::endl;
}

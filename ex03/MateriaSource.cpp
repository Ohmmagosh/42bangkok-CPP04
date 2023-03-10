/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:29:35 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:20:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource( void ): size(0), idx(0) {
	for (int i = 0; i < 4; i++)
		this->material[i] = 0;
	//std::cout << "MateriaSource constructor call" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &cp ){
	for (int i = 0; i < 4; i++)
		this->material[i] = cp.material[i]->clone();
	this->size = cp.size;
	this->idx = cp.idx;
	//std::cout << "Copy constructer call" << std::endl;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource &cp ){
	if (this != &cp){
		for (int i = 0; i < this->size; i++)
			delete this->material[i];
		for (int i = 0; i < 4; i++)
			this->material[i] = cp.material[i]->clone();
		this->size = cp.size;
		this->idx = cp.idx;
	}
	//std::cout << "Copy assignment calll" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < this->size; i++)
		delete this->material[i];
	//std::cout << "MateriaSource deconstructor call" << std::endl;
}

void	MateriaSource::learnMateria( AMateria *materia ){
	if (this->material[idx]){
		delete this->material[idx];
	}
	this->material[idx] = materia->clone();
	this->idx++;
	if (this->size < 4)
		this->size++;
	if (this->idx > 4)
		this->idx = 0;
}

AMateria *MateriaSource::createMateria( std::string const &type ){
	for (int i = 0; i < 4; i++){
		if (this->material[i]->getType() == type)
			return (this->material[i]->clone());
	}
	return (0);
}



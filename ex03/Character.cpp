/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:46:29 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:22:47 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

int Character::capacity = 4;

Character::Character(const std::string &name)
:name(name), inv_size(0), flr_size(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	//std::cout << "Character Constructor call" << std::endl;
}

Character::Character( const Character &cp ){
	this->name = cp.getName();
	for (int i = 0; i < cp.inv_size; i++)
		this->inventory[i] = cp.inventory[i]->clone();
	this->inv_size = cp.inv_size;
	for (int i = 0; i < cp.flr_size; i++)
		delete this->floor[i];
	for (int i = 0; i < cp.flr_size; i++)
		this->floor[i] = cp.floor[i]->clone();
	this->flr_size = cp.flr_size;
}

Character& Character::operator=( const Character &cp ){
	if (this != &cp){
			this->name = cp.getName();
		for (int i = 0; i < cp.inv_size; i++)
			delete this->inventory[i];
		for (int i = 0; i < cp.inv_size; i++)
			this->inventory[i] = cp.inventory[i]->clone();
		this->inv_size = cp.inv_size;
		for (int i = 0; i < cp.flr_size; i++)
			delete this->floor[i];
		for (int i = 0; i < cp.flr_size; i++)
			this->floor[i] = cp.floor[i]->clone();
		this->flr_size = cp.flr_size;
	}
	return (*this);
}

Character::~Character(){
	//std::cout << "Character deconstructor call" << std::endl;
	for (int i = 0; i < this->inv_size; i++)
		delete this->inventory[i];
	for (int i = 0; i < this->flr_size; i++)
		delete this->floor[i];
}

const std::string& Character::getName( ) const{
	return this->name;
}

void	Character::equip(AMateria *m){
	if (inv_size < capacity){
		this->inventory[this->inv_size] = m->clone();
		this->inv_size++;
	}
}

void	Character::unequip(int idx){
	if (idx < inv_size && idx >= 0 && this->inventory[idx] != 0){
		this->floor[this->flr_size] = this->inventory[idx];
		this->inventory[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx < inv_size && idx >= 0 && this->inventory[idx] != 0){
		this->inventory[idx]->use(target);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:32:35 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/09 23:11:21 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete i;
		delete j;
	}
	{
		Animal *i = new Dog();
		Animal *j = new Dog();

		*i = *j;
		delete j;
		delete i;
	}
	return 0;
}

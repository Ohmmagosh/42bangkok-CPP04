/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:45:52 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 09:58:03 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include <string>

class Animal {
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( std::string type);
		Animal(const Animal &cp);
		Animal& operator=( const Animal &cp);
		virtual ~Animal();
		std::string getType( void ) const;
		virtual void makeSound( void ) const;

};

#endif

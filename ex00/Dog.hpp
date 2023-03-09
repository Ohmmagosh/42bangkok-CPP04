/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:27 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 10:01:07 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog( void );
		Dog( const Dog &cp );
		Dog& operator=( const Dog &cp);
		~Dog( void );
		void	makeSound( void ) const;
};

#endif

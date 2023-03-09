/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:25 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 10:01:42 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat( void );
		Cat(const Cat &cp);
		Cat& operator=( const Cat &cp);
		~Cat( void );
		void	makeSound( void ) const;
};

#endif

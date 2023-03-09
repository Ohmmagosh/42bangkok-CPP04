/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:45:00 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/08 08:58:57 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat(const WrongCat &cp);
		WrongCat& operator=( const WrongCat &cp);
		~WrongCat( void );
		void	makeSound( void ) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:56:44 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 20:25:09 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

#include "AMateria.hpp"

class Ice : public AMateria{
	private:
	public:
		Ice( void );
		Ice( const Ice &cp );
		Ice& operator=( const Ice &cp );
		~Ice( );
		Ice* clone() const ;
		void use( ICharacter &target );

};

#endif

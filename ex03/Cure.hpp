/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:56:40 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 20:25:32 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria{
	private:
	public:
		Cure( void );
		Cure( const Cure &cp );
		Cure& operator=( const Cure &cp );
		~Cure( );
		Cure* clone() const ;
		void use( ICharacter &target );
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:27:34 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 00:32:12 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	private:
	public:
		AMateria( void );
		AMateria( const AMateria &cp );
		AMateria& operator=( const AMateria &cp );
		virtual ~AMateria( );
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter &target );
};

#endif

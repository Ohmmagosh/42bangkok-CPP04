/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:27:34 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:14:27 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter ;

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria( const std::string& type );
		AMateria( const AMateria &cp );
		AMateria& operator=( const AMateria &cp );
		virtual ~AMateria( );
		const std::string& getType( void ) const;
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter &target );
};

#endif

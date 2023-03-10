/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:29:39 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:14:51 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
# include <iostream>

class IMateriaSource;

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*material[4];
		int			size;
		int			idx;
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &cp );
		MateriaSource& operator=( const MateriaSource &cp );
		~MateriaSource( );
		void learnMateria(AMateria *);
		AMateria* createMateria(std::string const & type);

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:46:28 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/10 22:11:39 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		std::string		name;
		AMateria		*inventory[4];
		int				inv_size;
		static int		capacity;
		AMateria 		*floor[1000];
		int				flr_size;
	public:
		Character( const std::string &name );
		Character( const Character &cp );
		Character& operator=( const Character &cp );
		~Character( );
		std::string const & getName( ) const ;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif

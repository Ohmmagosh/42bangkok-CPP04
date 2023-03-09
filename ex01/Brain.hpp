/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:40:51 by psuanpro          #+#    #+#             */
/*   Updated: 2023/03/09 22:02:56 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	public:
		std::string	idea[100];
	public:
		Brain( void );
		Brain( const Brain &cp );
		Brain& operator=( const Brain &cp );
		~Brain( );
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:12:44 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/08 07:57:33 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>

using namespace std;

class	Harl {

public:

	Harl( void );
	~Harl( void );

	void	complain( string const level ) const;

private:

	void	debug( void ) const;
	void	info( void ) const;
	void	warning( void ) const;
	void	error( void ) const;

};

typedef	void (Harl::*complain_p)(void) const;

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:12:44 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/05 21:20:35 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using namespace std;

class	Harl {

public:

	Harl::Harl( void );
	Harl::~Harl( void );

	void	complain( string level );

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};
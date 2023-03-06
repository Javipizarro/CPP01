/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:12:44 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/06 15:29:46 by jpizarro         ###   ########.fr       */
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

	void	complain( string level );

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

typedef	void (Harl::*complain_p)(void) const;

#endif
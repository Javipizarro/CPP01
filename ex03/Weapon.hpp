/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:56:08 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/27 16:25:26 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

using namespace std;

class	Weapon {

public:

	Weapon( string type );
	Weapon( void );
	~Weapon( void );

	string&	getType( void );
	void	setType(string type);

private:

	string	_type;

};

#endif
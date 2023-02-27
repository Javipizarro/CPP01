/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:56:26 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/27 16:48:52 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

using namespace std;

class	HumanB {

public:

	HumanB(string name);
	~HumanB( void );
	
	string	getName( void ) const;
	void	attack( void );
	void	setWeapon( Weapon& weapon );

private:

	string	_name;
	Weapon*	_weapon;

};

#endif
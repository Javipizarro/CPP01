/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:56:23 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/27 16:34:10 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

using namespace std;

class	HumanA {

public:

	HumanA(string name, Weapon &weapon);
	~HumanA( void );
	
	string	getName( void ) const;
	void	attack( void );

private:

	string	_name;
	Weapon&	_weapon;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:56:25 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/27 16:41:15 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	cout
		<< this->_name << " has been born with a "
		<< this->_weapon.getType() << " in their hand " << endl;
	return;
}

HumanA::~HumanA ( void ) {
	cout << this->_name << " has died." << endl;
	return;
}

string	HumanA::getName( void ) const{
	return this->_name;
}

void	HumanA::attack ( void ) {
	cout
		<< this->_name << " attacks with their " << this->_weapon.getType() << endl;
	return;
}


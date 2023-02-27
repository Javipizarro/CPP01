/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:56:28 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/27 16:48:43 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (string name) : _name(name), _weapon(NULL) {
	cout
		<< this->_name << " has been born empty handed." << endl;
	return;
}

HumanB::~HumanB ( void ) {
	cout << this->_name << " has died." << endl;
	return;
}

string	HumanB::getName( void ) const {
	return this->_name;
}


void	HumanB::attack ( void ) {
	cout
		<< this->_name << " attacks with their "
		<< (this->_weapon ? this->_weapon->getType() : "hand??.")
		<< endl;
	return;
}

void	HumanB::setWeapon ( Weapon& weapon ) {
	this->_weapon = &weapon;
	cout
		<< this->_name << " has now grabbed a " << this->_weapon->getType() << endl;
	 return;
}
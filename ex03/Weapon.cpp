/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:56:20 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/27 16:39:44 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( string type ) : _type(type) {
	cout << this->_type << " has been created." << endl;
	return;
}

Weapon::Weapon( void ) : _type("") {
	return;
}

Weapon::~Weapon( void ) {
	if (this->_type[0])
		cout << this->_type << " destroyed" << endl;
	return;
}

string&	Weapon::getType( void ) {
	return this->_type;
}

void	Weapon::setType(string type) {
	this->_type = type;
	return;
}

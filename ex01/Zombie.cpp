/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:51:33 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/08 09:43:00 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ) {
	cout << "A zombie has been created" << endl;
	return;
}

Zombie::~Zombie (void) {
	cout << "Zombie " << this->_name << " destroyed" << endl;
	return;
}

void	Zombie::announce (void) const {
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
	return;
}

void	Zombie::setName ( string const name ) {
	this->_name = name;
	return;
}
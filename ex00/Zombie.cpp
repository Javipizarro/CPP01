/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:51:33 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/22 22:08:37 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (string name) : _name(name) {
	cout << "Zombie " << this->_name << "created" << endl;
	return;
}

Zombie::~Zombie (void) {
	cout << "Zombie " << this->_name << "destroyed" << endl;
	return;
}

void	Zombie::announce (void) {
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
	return;
}
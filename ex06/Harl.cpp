/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:14:25 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/08 07:35:51 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	return;
}

Harl::~Harl( void ) {
	return;
}

void	Harl::complain( string const level ) const {
	size_t i;

	string	levels[NBR_LVLS] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (i = 0; i < NBR_LVLS; i++) {
		if (!level.compare(levels[i])) {
			break;
		}
	}
	switch (i) {
		case 0: Harl::debug();
		case 1: Harl::info();
		case 2: Harl::warning();
		case 3: Harl::error(); break;
		default: cout << "[ Probably complaining about insignificant problems. ]" << endl; break;
	}
}

void	Harl::debug ( void ) const {
	cout
		<< "[ DEBUG ]" << endl
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << endl
		<< "I just love it!" << endl
		<< endl;
}

void	Harl::info ( void ) const {
	cout
		<< "[ INFO ]" << endl
		<< "I cannot believe adding extra bacon cost more money." << endl
		<< "You don’t put enough! If you did I would not have to ask for it!"<< endl
		<< endl;
}

void	Harl::warning ( void ) const {
	cout
		<< "[ WARNING ]" << endl
		<< "I think I deserve to have some extra bacon for free." << endl
		<< "I’ve been coming here for years and you just started working here last month." << endl
		<< endl;
}

void	Harl::error ( void ) const {
	cout
		<< "[ ERROR ]" << endl
		<< "This is unacceptable, I want to speak to the manager now." << endl
		<< endl;
}

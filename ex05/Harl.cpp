/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:14:25 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/08 08:02:53 by jpizarro         ###   ########.fr       */
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

	string const	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*complains[4])( void ) const = {
		&Harl::debug,
		&Harl::info, 
		&Harl::warning,
		&Harl::error 
	};

	for (i = 0; i < 4; i++) {
		if (!level.compare(levels[i])) {
			(this->*complains[i])();
			break;
		}
	}
	if (i >= 4 && level.compare("EXIT"))
		cout << "Invalid level, please try again" << endl;
}

void	Harl::debug ( void ) const {
	cout
		<< endl
		<< "[ DEBUG ]" << endl
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << endl
		<< "I just love it!" << endl
		<< endl;
}

void	Harl::info ( void ) const {
	cout
		<< endl
		<< "[ INFO ]" << endl
		<< "I cannot believe adding extra bacon cost more money." << endl
		<< "You don’t put enough! If you did I would not have to ask for it!"<< endl
		<< endl;
}

void	Harl::warning ( void ) const {
	cout
		<< endl
		<< "[ WARNING ]" << endl
		<< "I think I deserve to have some extra bacon for free." << endl
		<< "I’ve been coming here for years and you just started working here last month." << endl
		<< endl;
}

void	Harl::error ( void ) const {
	cout
		<< endl
		<< "[ ERROR ]" << endl
		<< "This is unacceptable, I want to speak to the manager now." << endl
		<< endl;
}

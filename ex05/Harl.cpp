/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:14:25 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/06 15:51:47 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	return;
}

Harl::~Harl( void ) {
	return;
}

void	Harl::complain( string level ) {
	size_t i;

	string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*complains[4])( void ) = {
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

void	Harl::debug( void ) {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
	return;
}

void	Harl::info( void ) {
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
	return;
}
void	Harl::warning( void ) {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
	return;
}
void	Harl::error( void ) {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
	return;
}
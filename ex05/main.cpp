/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:13:22 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/06 15:52:30 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using namespace std;

int		main ( void ) {
	Harl harl;
	string complain;
	
	cout
		<< endl
		<< "Hello, this is Harl," << endl
		<< "I love burgers, with lots of bacon." << endl
		<< "And I do love to complain." << endl;

	do {
		cout
			<< endl
			<< "What kind of complain do you want to receive??" << endl
			<< "DEBUG" << endl
			<< "INFO" << endl
			<< "WARNING" << endl
			<< "ERROR" << endl;
		cin >> complain;
		harl.complain(complain);
	} while (complain.compare("EXIT"));

	cout
		<< endl
		<< "OK, BYE!!" << endl;

	return (0);
}
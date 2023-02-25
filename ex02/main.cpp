/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:20:51 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/25 23:47:08 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define LOG(x, y) std::cout << x << y << std::endl;

int		main( void ) {
	std::string	string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	LOG("","");
	LOG("Memory address of string:    ", &string);
	LOG("Memory address in stringPTR: ", stringPTR);
	LOG("Memory address in stringREF: ", &stringREF);
	LOG("","");
	LOG("string value:                ", string);
	LOG("value pointed by stringPTR:  ", *stringPTR);
	LOG("value pointed by stringREF:  ", stringREF);
	return (0);
}
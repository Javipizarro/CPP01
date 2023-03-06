/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:13:22 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/06 16:46:23 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using namespace std;

int		main(int argc, char* argv[]) {
	Harl harl;

	if (argc != 2) {
		cout << "invalid number of arguments" << endl;
		return (2);
	}
	harl.complain(argv[1]);
	return (0);
}
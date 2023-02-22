/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:40:00 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/23 00:35:38 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void){

	string	input, name;
	Zombie	*zombie;
	int		brains;

	cout << "Welcome to ZombieLand" << endl;
	cout << "Do yoy want to create a Zombie or a Chump?" << endl;
	do {
		cin >> input;
		for (int i = 0; input[i]; i++)
			input[i] = toupper(input[i]);
		if (input == "Z" || input == "ZOMBIE") {
			cout << "Wnat is this Zombie's name?" << endl;
			cin >> name;
			zombie = newZombie(name);
			cout << "OK, it looks scary..." << endl;
			cout << "From 0 to 10, how many brains do you want it to eat?" << endl;
			cin >> brains;
			if (!std::cin.good()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "OK it's going to starve then...";
			}
			brains ? 1 : brains = 0;
			brains > 10 ? brains = 10 : 1;
			brains < 0 ? brains = 0 : 1;
			for (int i = 0; i < brains; i++)
				zombie->announce();
			delete zombie;
		} else if (input == "C" || input == "CHUMP") {
			cout << "What is your Chump's name?" << endl;
			cin >> name;
			randomChump(name);
			cout << "MMmmm, this one didn't eat that much..." << endl;
		} else if (input != "EXIT" || input != "BYE") {
			cout << "I'm not sure what kind of creature is that one." << endl;
			cout << "Let's try it again:" << endl;
		}
	} while (input != "EXIT" || "BYE");
	cout << "See ya!" << endl;
	return (0);
}
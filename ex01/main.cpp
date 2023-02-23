/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:40:00 by jpizarro          #+#    #+#             */
/*   Updated: 2023/02/23 22:30:48 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool	sameWords(string a, string b) {
	for (int i = 0; a[i] && b[i]; i++) {
		a[i] = toupper(a[i]);
		b[i] = toupper(b[i]);
	}
	return (a == b);
}

int		main(void){

	string	feed, input, name;
	Zombie*	zombies;
	int		zombieQty;

	cout
		<< endl
		<< "Welcome to ZombieHordLand" << endl;
//	while (sameWords(input ,"Y") || sameWords(input ,"YES")){
	do {
		cout
			<< endl
			<< "From 0 to 100, how many zombies do you want in your Horde?" << endl;
				cin >> zombieQty;
				if (!std::cin.good()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout
						<< endl
						<< "They are going to be 3, then..." << endl;
				}
				zombieQty ? 1 : zombieQty = 3;
				zombieQty > 100 ? zombieQty = 100 : 1;
				zombieQty < 0 ? zombieQty = 0 : 1;
		cout
			<< "How are they going to called?" << endl;
			cin >> name;
		zombies = zombieHorde(zombieQty, name);
		cout
			<< endl
			<< "Do you want to feed them?" << endl;
		do {
			cin >> feed;
			if (sameWords(feed ,"Y") || sameWords(feed ,"YES")) {
				for (int i = 0; i < zombieQty; i++){
					zombies[i].announce();
				}
				cout
					<< endl
					<< "Do you want to feed them AGAIN?" << endl;
			} else {
				cout
					<< "OOoooK, I guess they will starve to death..." << endl
					<< endl;
			}
		} while (sameWords(feed ,"Y") || sameWords(feed ,"YES"));
		cout
			<< endl
			<< "Do you want to create a new ZombieHord?" << endl;
		cin >> input;
//		}
		delete [] zombies;
	} while (sameWords(input ,"Y") || sameWords(input ,"YES"));

	cout
		<< "See ya!" << endl;
	return (0);
}
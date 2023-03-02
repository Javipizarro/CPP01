/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:02:30 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/01 12:20:47 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using namespace std;

int		main(int argc, char *argv[]) {
	std::ifstream iFile;
	std::ofstream oFile;

	if (argc > 4) {
		cout << "Too many arguments" << endl;
		return (1);
//	} else if (argv < 4) {
//		cout << "Too few arguments" << endl;
		return (1);
	}


	iFile.open(argv[1]);
	if (!iFile.is_open()) {
		cout << "Error while opening input file " << argv[1] << endl;
		return (1);
	}

	string oFileName = argv[1];
	oFileName.append(".replace");
	oFile.open(oFileName);
	if (!oFile.is_open()) {
		cout << "Error while creating output file " << oFileName << endl;
		iFile.close();
		return (1);
	}
	
//	string line;
//	for (int i = 0; getline(iFile, line); i++) {
//		i ? oFile << endl << line : oFile << line;
//	}

	string line, buff;
	for (int i = 0; getline(iFile, line); i++) {
		if (i)
			buff.append("\n");
		buff.append(line);
	}
	oFile << buff;

	iFile.close();
	oFile.close();

	return (0);
}
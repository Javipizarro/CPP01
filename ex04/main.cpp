/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:02:30 by jpizarro          #+#    #+#             */
/*   Updated: 2023/03/05 21:02:16 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using namespace std;

bool	invalidArgs(int argc) {
	if (argc > 4) {
		cout << "Too many arguments" << endl;
		return true;
	} else if (argc < 4) {
		cout << "Too few arguments" << endl;
		return true;
	}
	return false;
}

bool	openFiles(ifstream& iFile, ofstream& oFile, string filePath) {
	iFile.open(filePath);
	if (!iFile.is_open()) {
		cout << "Error while opening input file " << filePath << endl;
		return false;
	}

	filePath.append(".replace");
	oFile.open(filePath);
	if (!oFile.is_open()) {
		cout << "Error while creating output file " << filePath << endl;
		iFile.close();
		return false;
	}
	return true;
}

void	replace(ifstream& iFile, ofstream& oFile, const string s1, const string s2) {
	string	line, buff;
	size_t	eraseLen = s1.length(), insertLen = s2.length(), lastPos = 0;
	
	for (int i = 0; getline(iFile, line); i++) {
		if (i)
			buff.append("\n");
		buff.append(line);
	}
	while ((lastPos = buff.find(s1, lastPos)) != string::npos) {
		buff.erase(lastPos, eraseLen);
		buff.insert(lastPos, s2);
		lastPos += insertLen;
	}
	oFile << buff;
}

int		main(int argc, char *argv[]) {
	ifstream iFile;
	ofstream oFile;

	if (invalidArgs(argc))
		return (1);
	if (!openFiles(iFile, oFile, argv[1]))
		return (2);
	replace(iFile, oFile, argv[2], argv[3]);
	iFile.close();
	oFile.close();

	return (0);
}
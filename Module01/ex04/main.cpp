/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:01:02 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/13 17:16:30 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(std::string &filename, std::string &str, std::string &strRep)
{
	std::ifstream inputFile(filename);
	if (!inputFile) {
		std::cout << "Error: Unable to open file " << filename << std::endl;
		return;
	}

	std::string line;
	std::ofstream outputFile(filename + ".replace");

	while (std::getline(inputFile, line)) {
		size_t start = 0;
		size_t pos = line.find(str);
		while (pos != std::string::npos) {
			outputFile << line.substr(start, pos - start);
			outputFile << strRep;
			start = pos + str.length();
			pos = line.find(str, start);
		}
		outputFile << line.substr(start) << std::endl;
	}
	std::cout << "Replacement completed: " << filename << std::endl;
}

int main(int argc, char *argv[]) {
	if (argc == 4) {
		std::string filename = argv[1];
		std::string str = argv[2];
		std::string strRep = argv[3];
		replace(filename , str, strRep);
	} else {
		std::cout << "Please input correctly: <filename> string1 strinf2" << std::endl;
	}
}
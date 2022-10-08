/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:54:52 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/26 17:37:47 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_file.hpp"

ReplaceFile::ReplaceFile(void) {
}

ReplaceFile::~ReplaceFile(void) {
}

void ReplaceFile::Rfile(std::ifstream& ifs_file, const std::string& s1, const std::string& s2) {
	std::ofstream	ofs_file;
	std::string		line;

	ofs_file.open("result.replace");
	while (std::getline(ifs_file, line)) {
		if (line.empty())
			return ;
		ofs_file << TreatLine(line, s1, s2) << std::endl;
	}
}

std::string ReplaceFile::TreatLine(std::string line, std::string s1, std::string s2) {
	std::size_t	start = 0;
	std::string	new_string;
	for (;;) {
		start = line.find(s1);
		if (start >= 100000000)
			break;
		line.erase(start, s1.length());
		line.insert(start, s2);
	}
	std::cout << line << std::endl;
	return (line);
}

#ifndef REPLACE_FILE_HPP
# define REPLACE_FILE_HPP

#include <iostream>
#include <string>
#include <fstream>

class ReplaceFile
{
	public:
		ReplaceFile(void);
		~ReplaceFile(void);
		void Rfile(std::ifstream& ifs_file, const std::string& s1, const std::string& s2);

	private:
		std::string TreatLine(std::string line, std::string s1, std::string s2);
};


#endif

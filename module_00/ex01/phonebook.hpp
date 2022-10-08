#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <iomanip>

# include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(/* args */);
		~PhoneBook();
		void				AddContact();
		void				GetContact();
		std::string	ExtractInformation();
		void				PrintInformationFormatted(std::string information);
		void				PrintContactSelect(int index);
	private:
		Contact				_contacts[8];
		int					_current_index;
		int					_check_index;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:34:26 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/18 16:06:50 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_current_index = 0;
	this->_check_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::AddContact()
{
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << "Enter first name: ";
	_contacts[_current_index].SetFirstName(ExtractInformation());
	std::cout << "Enter last name: ";
	_contacts[_current_index].SetLastName(ExtractInformation());
	std::cout << "Enter nickname: ";
	_contacts[_current_index].SetNickname(ExtractInformation());
	std::cout << "Enter phone number: ";
	_contacts[_current_index].SetPhoneNumber(ExtractInformation());
	std::cout << "Enter dark secret: ";
	_contacts[_current_index].SetDarkSecret(ExtractInformation());

	_current_index++;
	if (_current_index == 8)
		_current_index = 0;
	if (_check_index < 8)
		_check_index++;

}


std::string PhoneBook::ExtractInformation() {
	std::string information;
	for (;;) {
		std::getline(std::cin, information);
		if (!information.empty()) {
			return (information);
		}
		std::cout << "Invalid input" << std::endl;
	}
}

void	PhoneBook::GetContact() {
	int	index;

	std::cout << "|   INDEX  |";
	std::cout << "|FIRST NAME|";
	std::cout << "| LAST NAME|";
	std::cout << "| NICKNAME |";
	std::cout << std::endl;

	for (int i = 0; i < _check_index; i++) {
		std::cout << "|" << std::right << std::setw(10) << i + 1 << "|";
		PrintInformationFormatted(_contacts[i].GetFirstName());
		PrintInformationFormatted(_contacts[i].GetLastName());
		PrintInformationFormatted(_contacts[i].GetNickname());
		std::cout << std::endl;
	}

	std::cout << "Select a contact: ";
	std::cin >> index;
	PrintContactSelect(index);
}

void	PhoneBook::PrintInformationFormatted(std::string information) {
	if (information.length() > 9) {
		std::cout << "|" << std::right << std::setw(10) << information.substr(0, 9) + '.' << "|";
	} else {
		std::cout << std::right << std::setw(10) << information << "|";
	}
}

void PhoneBook::PrintContactSelect(int index) {
	for (;;) {
		if (index < 1 || index > 8 || _check_index < index) {
			if (_check_index == 0) {
				std::cout << "No contacts" << std::endl;
				break ;
			}
			std::cout << "Invalid input" << std::endl;
			std::cout << "Select a contact: ";
			std::cin >> index;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		} else {
			std::cout << _contacts[index - 1].GetFirstName() << std::endl;
			std::cout << _contacts[index - 1].GetLastName() << std::endl;
			std::cout << _contacts[index - 1].GetNickname() << std::endl;
			std::cout << _contacts[index - 1].GetPhoneNumber() << std::endl;
			std::cout << _contacts[index - 1].GetDarkSecret() << std::endl;
			break ;
		}
	}
}

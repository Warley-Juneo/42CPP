/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:37:57 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/17 22:59:53 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string Contact::GetFirstName() {
	return (_firstName);
}

void Contact::SetFirstName(std::string firstName) {
	_firstName = firstName;
}

std::string Contact::GetLastName() {
	return (_lastName);
}

void Contact::SetLastName(std::string lastName) {
	_lastName = lastName;
}

std::string Contact::GetNickname() {
	return (_nickname);
}

void Contact::SetNickname(std::string nickname) {
	_nickname = nickname;
}

std::string Contact::GetPhoneNumber() {
	return (_phoneNumber);
}

void Contact::SetPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}

std::string Contact::GetDarkSecret() {
	return (_darkSecret);
}

void Contact::SetDarkSecret(std::string darkSecret) {
	_darkSecret = darkSecret;
}

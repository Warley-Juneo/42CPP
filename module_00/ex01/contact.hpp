/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:37:26 by wjuneo-f          #+#    #+#             */
/*   Updated: 2022/08/17 19:44:41 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact(/* args */);
		~Contact();
		std::string GetFirstName();
		void SetFirstName(std::string firstName);
		std::string GetLastName();
		void SetLastName(std::string lastName);
		std::string GetNickname();
		void SetNickname(std::string nickname);
		std::string GetPhoneNumber();
		void SetPhoneNumber(std::string phoneNumber);
		std::string GetDarkSecret();
		void SetDarkSecret(std::string darkSecret);
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkSecret;
};




#endif

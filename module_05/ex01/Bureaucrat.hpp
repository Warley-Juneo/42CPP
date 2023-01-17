#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat( std::string name, int grade );
        Bureaucrat(Bureaucrat const& src);
        Bureaucrat&	operator=(Bureaucrat const& src);
		~Bureaucrat();

		const std::string	getName( void ) const;
		int					getGrade( void ) const;

		void				upgrade( void );
		void				downgrade( void );

        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };

		class gradeTooHighException : public std::exception {
            public:
                char const* what() const throw();
        };

        void				verifyException(int grade);

		void				signForm(Form& src) const;

	private:
		const std::string 	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& src);

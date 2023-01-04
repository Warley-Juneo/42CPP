#pragma once

#include <iostream>
#include <string>

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

        class GradeTooHighException : public std::exception {
			public:
				const char* what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what( void ) const throw();
		};
		
        void verifyException(int grade);

	private:
		const std::string 	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& src);

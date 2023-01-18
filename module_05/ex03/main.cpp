/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:49:37 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/04 12:25:01 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main () {
    Bureaucrat bureaucrat("thomas", 1);

    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    rrf->beSigned(bureaucrat);
    rrf->execute(bureaucrat);

    AForm* rrg;
    rrg = someRandomIntern.makeForm("presidential pardon", "Lol");

    rrg->beSigned(bureaucrat);
    rrg->execute(bureaucrat);

    AForm* rrh;
    rrh = someRandomIntern.makeForm("shrubbery creation", "Aika");

    rrh->beSigned(bureaucrat);
    rrh->execute(bureaucrat);

    delete rrf;
    delete rrg;
    delete rrh;
}
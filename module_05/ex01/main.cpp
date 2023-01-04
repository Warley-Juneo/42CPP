/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:20:47 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/03 12:20:46 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
    Bureaucrat bureaucrat = Bureaucrat("João", 80);
    Form form = Form("School", 50, 25);

    std::cout << bureaucrat << std::endl;
    std::cout << form << std::endl;
    form.beSigned(bureaucrat);
    std::cout << form << std::endl;
    bureaucrat.signForm(form);
}
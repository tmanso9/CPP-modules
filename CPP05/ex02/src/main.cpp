/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/18 18:38:33 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// #include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void	logAttempt( std::string name, int grade)
{
	std::cout << "Trying to construct a bureaucrat named " << name << " with a grade of " << grade << "..." << std::endl;
}

int	main(void)
{
	// PresidentialPardonForm	a("Alex");
	// ShrubberyCreationForm	s("Alex");
	RobotomyRequestForm			r("Alex");
	Bureaucrat				B("Ben", 45);

	// std::cout << B << a << s;
	// B.signForm( a );
	// B.executeForm( a );
	// B.signForm( s );
	// B.executeForm(s);
	// std::cout << a << s;
	std::cout << r;
	B.signForm(r);
	B.executeForm(r);
}
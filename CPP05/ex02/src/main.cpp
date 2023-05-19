/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/19 13:58:46 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat	Marvin("Marvin", 150);
			Bureaucrat	Jesus("Jesus", 1);
			std::cout << Marvin << Jesus;
			ShrubberyCreationForm	s("Beelzebub");
			LOG("");
			std::cout << s;
			Marvin.signForm(s);
			Jesus.signForm(s);
			std::cout << s;
			LOG("");
			Marvin.executeForm(s);
			LOG("");
			Jesus.executeForm(s);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
		}
		catch(Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
		}
		catch(ShrubberyCreationForm::CannotCreateFileException& e)
		{
			std::cerr << "Form could not be executed because " << e.what() << ".\n";
		}
		catch(AForm::FormNotSignedException& e)
		{
			std::cerr << "Form could not be executed because " << e.what() << ".\n";
		}
	}
	std::cout << "\n----------------------------------------------------" << std::endl;
	{
		try
		{
			LOG("");
			Bureaucrat	Marvin("Marvin", 60);
			Bureaucrat	Jesus("Jesus", 1);
			std::cout << Marvin << Jesus;
			RobotomyRequestForm	p("Beelzebub");
			LOG("");
			std::cout << p;
			Marvin.signForm(p);
			std::cout << p;
			LOG("");
			Marvin.executeForm(p);
			LOG("");
			Jesus.executeForm(p);
			Jesus.executeForm(p);
			Jesus.executeForm(p);
			Jesus.executeForm(p);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
		}
		catch(Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
		}
		catch(ShrubberyCreationForm::CannotCreateFileException& e)
		{
			std::cerr << "Form could not be executed because " << e.what() << ".\n";
		}
		catch(AForm::FormNotSignedException& e)
		{
			std::cerr << "Form could not be executed because " << e.what() << ".\n";
		}
	}
	std::cout << "\n----------------------------------------------------" << std::endl;
	{
		try
		{
			LOG("");
			Bureaucrat	Marvin("Marvin", 60);
			Bureaucrat	Jesus("Jesus", 1);
			std::cout << Marvin << Jesus;
			PresidentialPardonForm	p("Beelzebub");
			LOG("");
			std::cout << p;
			Marvin.signForm(p);
			std::cout << p;
			LOG("");
			Marvin.executeForm(p);
			LOG("");
			Jesus.executeForm(p);
			Jesus.signForm(p);
			Jesus.executeForm(p);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
		}
		catch(Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
		}
		catch(ShrubberyCreationForm::CannotCreateFileException& e)
		{
			std::cerr << "Form could not be executed because " << e.what() << ".\n";
		}
		catch(AForm::FormNotSignedException& e)
		{
			std::cerr << "Form could not be executed because " << e.what() << ".\n";
		}
	}
}
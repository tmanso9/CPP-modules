/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:09:06 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/18 17:59:33 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
	_target = "/";
	this->setSigned(false);
	this->setName("Robotomy request");
	this->setToSign(72);
	this->setToExecute(45);
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
{
	_target = target;
	this->setSigned(false);
	this->setName("Robotomy request");
	this->setToSign(72);
	this->setToExecute(45);
	srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src)
{
	_target = src.getTarget();
	this->setSigned(src.getSigned());
	this->setName(src.getName());
	this->setToSign(src.getToSign());
	this->setToExecute(src.getToExecute());
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	this->_target = src.getTarget();
	this->setSigned(src.getSigned());
	this->setName(src.getName());
	this->setToSign(src.getToSign());
	this->setToExecute(src.getToExecute());
	return *this;
}

std::string		RobotomyRequestForm::getTarget( void ) const
{
	return _target;
}

void	RobotomyRequestForm::execute ( Bureaucrat const & executor ) const
{
	if (this->canExecute( executor ))
	{
		std::cout << "**drill drill**" << std::endl;
		int robot = rand() - (RAND_MAX / 2);
		if (robot >= 0)
			std::cout << _target << " has been robotomized." << std::endl;
		else
			std::cout << "Robotomy has failed." << std::endl;
	}
}

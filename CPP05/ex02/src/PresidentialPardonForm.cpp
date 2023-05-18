/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:09:06 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/18 17:59:33 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
{
	_target = "/";
	this->setSigned(false);
	this->setName("Presidential pardon");
	this->setToSign(25);
	this->setToExecute(5);
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
{
	_target = target;
	this->setSigned(false);
	this->setName("Presidential pardon");
	this->setToSign(25);
	this->setToExecute(5);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src)
{
	_target = src.getTarget();
	this->setSigned(src.getSigned());
	this->setName(src.getName());
	this->setToSign(src.getToSign());
	this->setToExecute(src.getToExecute());
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	this->_target = src.getTarget();
	this->setSigned(src.getSigned());
	this->setName(src.getName());
	this->setToSign(src.getToSign());
	this->setToExecute(src.getToExecute());
	return *this;
}

std::string		PresidentialPardonForm::getTarget( void ) const
{
	return _target;
}

void	PresidentialPardonForm::execute ( Bureaucrat const & executor ) const
{
	if (this->canExecute( executor ))
		std::cout << "Zaphod Beeblebrox pardoned " << _target << std::endl;
}

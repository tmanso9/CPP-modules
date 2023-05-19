/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:09:15 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/19 15:03:56 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm( void )
	:
		_name("default"),
		_signed(false),
		_toSign(1),
		_toExecute(1)
{
	// LOG("Form void constructor called");
}

AForm::AForm( AForm const & src)
	:
		_name(src.getName()),
		_signed(src.getSigned()),
		_toSign(src.getToSign()),
		_toExecute(src.getToExecute())
{
	// LOG("Form copy constructor called");
}

AForm & AForm::operator=( AForm const & src )
{
	this->_name = src.getName();
	this->_signed = src.getSigned();
	this->_toSign = src.getToSign();
	this->_toExecute = src.getToExecute();

	return *this;
}

AForm::~AForm()
{
	// std::cout << "Destructor called for " << _name << " form" << std::endl;
}

AForm::AForm( std::string name, int toSign, int toExecute )
	:
		_name(name),
		_signed(false),
		_toSign(toSign),
		_toExecute(toExecute)
{
	if (toSign < 1 || toExecute < 1)
		throw GradeTooHighException();
	if (toSign > 150 || toExecute > 150)
		throw GradeTooLowException();
}

std::string	AForm::getName( void ) const
{
	return _name;
}

bool	AForm::getSigned( void ) const
{
	return _signed;
}

int	AForm::getToSign( void ) const
{
	return _toSign;
}

int	AForm::getToExecute( void ) const
{
	return _toExecute;
}

void	AForm::beSigned( Bureaucrat src )
{
	if (src.getGrade() > _toSign)
		throw GradeTooLowException();
	_signed = true;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("form is not signed");
}

const char* AForm::VoidFormException::what() const throw()
{
	return ("Form wasn't created");
}

void	AForm::execute( const Bureaucrat & src ) const
{
	if (!_signed)
		throw FormNotSignedException();
	if ( src.getGrade() > _toExecute)
		throw GradeTooLowException();
	execution();
}

std::ostream & operator<<( std::ostream & out, AForm const & src)
{
	out << "Form " << src.getName();
	out << " is " << (src.getSigned() ? "signed. " : "not signed. ");
	out << "You need grade " << src.getToSign() << " to sign it and ";
	out << src.getToExecute() << " to execute it."  << std::endl;
	return out;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:50:12 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/18 16:12:38 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class AForm
{
private:
	std::string			_name;
	bool				_signed;
	int					_toSign;
	int					_toExecute;
	
public:
	AForm( void );
	AForm( AForm const &);
	AForm & operator=( AForm const & );
	virtual ~AForm();
	
	AForm( std::string, int, int);
	bool			getSigned( void ) const;
	std::string		getName( void ) const;
	int				getToSign( void ) const;
	int				getToExecute( void ) const;
	void			setSigned( bool );
	void			setName( std::string );
	void			setToSign( int );
	void			setToExecute( int );
	void			beSigned( Bureaucrat );
	virtual void	execute ( Bureaucrat const & ) const = 0;
	bool			canExecute( Bureaucrat ) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("grade is too high");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("grade is too low");
			}
	};
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("form is not signed");
			}
	};
};

std::ostream & operator<<( std::ostream &, AForm const &);

#endif // !AFORM_HPP
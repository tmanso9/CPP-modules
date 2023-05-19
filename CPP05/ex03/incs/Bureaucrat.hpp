/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:10:31 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/19 15:03:43 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>
# include <exception>

# define LOG(x) std::cout << x << std::endl;

class AForm;

class Bureaucrat
{
private:
	std::string	_name;
	int			_grade;
	Bureaucrat( void );
public:
	Bureaucrat( Bureaucrat const & );
	Bureaucrat & operator=( Bureaucrat const & );
	~Bureaucrat();
	
	Bureaucrat( std::string, int );
	
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(void);
	void		decrementGrade(void);
	void		signForm( AForm & );
	void		executeForm( AForm const & );

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &	operator<<(std::ostream &, Bureaucrat const & );

#endif
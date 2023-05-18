/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:09:25 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/18 16:17:28 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const &);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &	operator=( PresidentialPardonForm const & );
	PresidentialPardonForm( std::string target);

	virtual void	execute ( Bureaucrat const & ) const;
	std::string		getTarget( void ) const;
};

#endif // !PRESIDENTIALPARDONFORM_HPP
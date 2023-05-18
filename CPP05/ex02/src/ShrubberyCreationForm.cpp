/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:09:06 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/18 16:15:32 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
	_target = "/";
	this->setSigned(false);
	this->setName("Shrubbery creation");
	this->setToSign(145);
	this->setToExecute(137);
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
{
	_target = target;
	this->setSigned(false);
	this->setName("Shrubbery creation");
	this->setToSign(145);
	this->setToExecute(137);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src)
{
	_target = src.getTarget();
	this->setSigned(src.getSigned());
	this->setName(src.getName());
	this->setToSign(src.getToSign());
	this->setToExecute(src.getToExecute());
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	this->_target = src.getTarget();
	this->setSigned(src.getSigned());
	this->setName(src.getName());
	this->setToSign(src.getToSign());
	this->setToExecute(src.getToExecute());
	return *this;
}

std::string		ShrubberyCreationForm::getTarget( void ) const
{
	return _target;
}

void	ShrubberyCreationForm::execute ( Bureaucrat const & executor ) const
{
	if (this->canExecute( executor ))
	{
		std::ofstream	outfile((_target + "_shrubbery").c_str(), std::ofstream::trunc);
		if (!outfile)
			throw CannotCreateFileException();
		outfile << "                                                         .\n \
                                              .         ;  \n \
                 .              .              ;%     ;;   \n \
                   ,           ,                :;%  %;   \n \
                    :         ;                   :;%;'     .,   \n \
           ,.        %;     %;            ;        %;'    ,;\n \
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n \
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n \
               ;%;      %;        ;%;        % ;%;  ,%;'\n \
                `%;.     ;%;     %;'         `;%%;.%;'\n \
                 `:;%.    ;%%. %@;        %; ;@%;%'\n \
                    `:%;.  :;bd%;          %;@%;'\n \
                      `@%:.  :;%.         ;@@%;'   \n \
                        `@%.  `;@%.      ;@@%;         \n \
                          `@%%. `@%%    ;@@%;        \n \
                            ;@%. :@%%  %@@%;       \n \
                              %@bd%%%bd%%:;     \n \
                                #@%%%%%:;;\n \
                                %@@%%%::;\n \
                                %@@@%(o);  . '         \n \
                                %@@@o%;:(.,'         \n \
                            `.. %@@@o%::;         \n \
                               `)@@@o%::;         \n \
                                %@@(o)::;        \n \
                               .%@@@@%::;         \n \
                               ;%@@@@%::;.          \n \
                              ;%@@@@%%:;;;. \n \
                          ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
		outfile.close();
	}
}

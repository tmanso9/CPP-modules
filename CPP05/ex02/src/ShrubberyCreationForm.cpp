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
	:
		AForm("ShrubberyCreationForm", 145, 137),
		_target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	:
		AForm("ShrubberyCreationForm", 145, 137),
		_target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src)
	:
		AForm("ShrubberyCreationForm", 145, 137),
		_target(src.getTarget())
{
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	this->_target = src.getTarget();
	return *this;
}

std::string		ShrubberyCreationForm::getTarget( void ) const
{
	return _target;
}

void	ShrubberyCreationForm::execution ( void ) const
{
	std::ofstream	outfile((_target + "_shrubbery").c_str(), std::ofstream::trunc);
	if (!outfile)
	{
		std::cerr << "Form is not executed because file could not be created." << std::endl;
		return ;
	}
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

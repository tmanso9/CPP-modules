/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:43:26 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/21 20:13:12 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src)
{
	(void)src;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & src )
{
	(void)src;
	std::cout << "ScalarConverter assignment overload called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void ScalarConverter::convert( std::string toConvert )
{
	// if (toConvert.size() == 1 && !isdigit(*toConvert.c_str()))
	// {
		std::cout << "char: ";
		if (std::isprint(std::atoi(toConvert.c_str()))) {
			std::cout << static_cast<char>(std::atoi(toConvert.c_str())) << std::endl;
		}
		else {
			std:: cout << "Non displayable" << std::endl;
		}
		std::cout << "int: ";
		std::cout << static_cast<int>(std::atoi(toConvert.c_str())) << std::endl;
		std::cout << "float: ";
		std::cout << static_cast<int>(std::atoi(toConvert.c_str())) << ".0f" << std::endl;
		std::cout << "double: ";
		std::cout << static_cast<int>(std::atoi(toConvert.c_str())) << ".0" << std::endl;
	// }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:43:26 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/22 20:17:51 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	ScalarConverter::isFloat = false;
bool	ScalarConverter::isDouble = false;
float	ScalarConverter::toFloat;
double	ScalarConverter::toDouble;

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
	if (toConvert.find('.') != std::string::npos) {
		if (toConvert.c_str()[toConvert.size() - 1] == 'f') {
			isFloat = 1;
		} else {
			isDouble = 1;
		}
	}
	if (isFloat) {
		toFloat = std::atof(toConvert.c_str());
		toDouble = static_cast<double>(toFloat);
	} else if (isDouble) {
		toDouble = std::atof(toConvert.c_str());
		toDouble = static_cast<float>(toFloat);
	}
	std::cout << toConvert << ": " << isFloat << " " << isDouble << std::endl;
	std::cout << toFloat << " " << toDouble << std::endl;
}

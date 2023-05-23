/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:43:26 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/23 18:38:39 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	ScalarConverter::isFloat = false;
bool	ScalarConverter::isDouble = false;
float	ScalarConverter::toFloat;
double	ScalarConverter::toDouble;
char	ScalarConverter::toChar;
int		ScalarConverter::toInt;

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

void	ScalarConverter::printResult( char c )
{
	if (isprint(c) && c != ' ') {
		std::cout << "char:\t'" << c <<"'" << std::endl;
	} else {
		std::cout << "char:\t" << "Non displayable" << std::endl;
	}
	std::cout << "int:\t" << static_cast<int>(c) << std::endl;
	std::cout << "float:\t" << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double:\t" << static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::printResult( int i )
{
	toChar = static_cast<char>( i );
	toInt = i;
	toFloat = static_cast<float>( i );
	toDouble = static_cast<double>( i );
	if (isprint(toChar) && toChar != ' ') {
		std::cout << "char:\t'" << toChar <<"'" << std::endl;
	} else {
		std::cout << "char:\t" << "Non displayable" << std::endl;
	}
	std::cout << "int:\t" << toInt << std::endl;
	std::cout << "float:\t" << toFloat << ".0f" << std::endl;
	std::cout << "double:\t" << toDouble << ".0" << std::endl;
}

void	ScalarConverter::printResult( double f )
{
	toChar = static_cast<char>( f );
	toInt = static_cast<int>( f );
	toDouble = static_cast<double>( f );
	if (isprint(toChar) && toChar != ' ') {
		std::cout << "char:\t'" << toChar <<"'" << std::endl;
	} else {
		std::cout << "char:\t" << "Non displayable" << std::endl;
	}
	std::cout << "int:\t" << toInt << std::endl;
	std::cout << "float:\t" << f << (f - toInt == 0 ? ".0f" : "f") << std::endl;
	std::cout << "double:\t" << toDouble << (f - toInt == 0 ? ".0" : "") << std::endl;
}

void ScalarConverter::convert( std::string toConvert )
{
	if (toConvert.size() == 1 && !isdigit(*toConvert.c_str())) {
		printResult(static_cast<char>(*toConvert.c_str()));
		return ;
	} else if (toConvert.find('.') != std::string::npos /* || \
			(!toConvert.compare("-inff") || !toConvert.compare("+inff")) */) {
		if (toConvert.c_str()[toConvert.size() - 1] == 'f') {
			printResult((std::atof(toConvert.c_str())));
		} else {
			printResult((std::atof(toConvert.c_str())));
		}
	} else if (toConvert.find_first_not_of("0123456789-+") == std::string::npos) {
		printResult(static_cast<int>(std::atoi(toConvert.c_str())));
	}
	else {
		if (!toConvert.compare("nanf") || !toConvert.compare("nan")) {
			std::cout << "char:\t" << "impossible" << std::endl;
			std::cout << "int:\t" << "impossible" << std::endl;
			std::cout << "float:\t" << "nanf" << std::endl;
			std::cout << "double:\t" << "nan" << std::endl;
		} else if (!toConvert.compare("-inff") || !toConvert.compare("+inff") || \
					toConvert.find("+inf")) {
			std::cout << "char:\t" << "impossible" << std::endl;
			std::cout << "int:\t" << "impossible" << std::endl;
			toDouble = std::atof(toConvert.c_str());
			toFloat = static_cast<float>(toDouble);
			std::cout << "float:\t" << toFloat << "f" << std::endl;
			std::cout << "double:\t" << toDouble << std::endl;
		} else {
			std::cout << "error: wrong argument" << std::endl;
		}
	}
	if (isFloat || isDouble) {
		
	}
}

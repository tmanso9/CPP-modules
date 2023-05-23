/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:18:19 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/23 17:45:25 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <cstdlib>
# include <string>

class ScalarConverter
{
private:
	ScalarConverter(/* args */);
	ScalarConverter( ScalarConverter const &);
	ScalarConverter & operator=( ScalarConverter const & );

	static bool	isFloat;
	static bool	isDouble;
	static bool	isChar;

	static float	toFloat;
	static double	toDouble;
	static char		toChar;
	static int		toInt;

	static void		printResult( char c );
	static void		printResult( double f );
	static void		printResult( int i );
public:
	~ScalarConverter();
	
	static void convert( std::string );
};

#endif
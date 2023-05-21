/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:18:19 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/21 20:12:57 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <cstdlib>

class ScalarConverter
{
private:
public:
	ScalarConverter(/* args */);
	ScalarConverter( ScalarConverter const &);
	~ScalarConverter();
	ScalarConverter & operator=( ScalarConverter const & );
	
	void convert( std::string );
};

#endif
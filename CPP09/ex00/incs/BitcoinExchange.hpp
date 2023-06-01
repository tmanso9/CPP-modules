/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:28:47 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/01 18:48:10 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <string>
# include <cstdlib>
# include <exception>
# include <map>

class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange( std::string filename );
	~BitcoinExchange();

	bool checkDate( std::string );
	class badInputException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

private:
	std::map<std::string, float>	data;
	
};

#endif // !BITCOINEXCHANGE_HPP
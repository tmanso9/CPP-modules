/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:32:33 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/01 18:53:39 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange( std::string filename )
{
	std::ifstream infile(filename.c_str(), std::ifstream::in);
	// std::ifstream infile(filename.c_str(), std::ifstream::in);
	if (!infile)
		return ; /* Need exception */
	std::string str;
	std::getline(infile, str);
	std::ofstream out("test", std::ofstream::trunc);
	if (!out)
		return ; /* Need exception */
		
	while (!str.empty()){
		if (std::isdigit(str.at(0))) {
			std::size_t sep = str.find(',');
			std::string date = str.substr(0, sep);
			std::string val = str.substr(sep + 1);
			// std::cout << val << "\t"  <<  std::atof(val.c_str()) << std::endl;

			try
			{
				checkDate(date);
				out << date;
				out << " => " << std::setprecision(7) << val << std::endl;
			}
			catch ( const std::exception & e)
			{
				out << e.what() << " => " << date << std::endl;
			}
			data[date] = std::atof(val.c_str());
		}
		std::getline(infile, str);
	}
	for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++) {
		std::cout << it->first << "," << std::setprecision(7) << it->second << std::endl;
	}
	infile.close();
	out.close();
}

bool BitcoinExchange::checkDate( std::string date )
{
	std::size_t firstSep = date.find('-');
	std::size_t lastSep = date.find_last_of('-');

	if (date.substr(firstSep + 1, lastSep - firstSep - 1).find_first_not_of("0123456789") != std::string::npos) {
		throw badInputException();
		return false;
	}
	
	std::string year = date.substr(0, firstSep);
	std::string month = date.substr(firstSep + 1, lastSep - firstSep - 1);
	std::string day = date.substr(lastSep + 1);
	if (year.size() != 4 || month.size() != 2 || day.size() != 2) {
		throw badInputException();
		return false;
	}
	// std::cout << year << "-" << month << "-" << day << std::endl;

	return true;
}

const char* BitcoinExchange::badInputException::what() const throw()
{
	return "Error: bad input";
}
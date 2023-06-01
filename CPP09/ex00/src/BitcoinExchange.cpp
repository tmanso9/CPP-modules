/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:32:33 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/01 17:06:25 by touteiro         ###   ########.fr       */
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
		return ;
	std::string str;
	std::getline(infile, str);
	while (!str.empty()){
		if (std::isdigit(str.at(0))) {
			std::size_t sep = str.find(',');
			std::string date = str.substr(0, sep);
			std::string val = str.substr(sep + 1);
			// std::cout << val << "\t"  <<  std::atof(val.c_str()) << std::endl;
			data[date] = std::atof(val.c_str());
		}
		std::getline(infile, str);
	}
	std::ofstream out("test", std::ofstream::trunc);
	for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++) {
		out << it->first << "," << std::setprecision(7) << it->second << std::endl;
	}
	infile.close();
	out.close();
}
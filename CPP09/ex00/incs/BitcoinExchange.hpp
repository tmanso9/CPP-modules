/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:28:47 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/01 17:00:04 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <string>
# include <cstdlib>
# include <map>

class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange( std::string filename );
	~BitcoinExchange();

private:
	std::map<std::string, float>	data;
	
};

#endif // !BITCOINEXCHANGE_HPP
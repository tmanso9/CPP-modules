/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/23 18:33:22 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char**argv)
{
	if (argc != 2 || !(static_cast<std::string>(argv[1]).size())) {
		std::cerr << "Wrong arguments!" << std::endl;
		std::cerr << "Usage: ./ScalarConverter <number to convert>" << std::endl;
		return 2;
	}

	ScalarConverter::convert(argv[1]);
}
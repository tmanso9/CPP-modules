/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/21 19:43:00 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char**argv)
{
	if (argc != 2) {
		std::cerr << "Wrong number of arguments!" << std::endl;
		std::cerr << "Usage: ./ScalarConverter <number to convert>" << std::endl;
		return 2;
	}
	ScalarConverter	S;

	S.convert(argv[1]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/29 00:33:36 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	std::srand(time(NULL));
	std::vector<int>	toFill;
	for (int i = 0; i < 5000000; i++) {
		toFill.push_back(rand() - (INT_MAX / 2));
	}
	
	Span sp = Span(450000);
	try
	{
		// sp.addNumber(3);
		// sp.addNumber(5);
		sp.addNumber(-42);
		// sp.addNumber(0, 55);
		sp.addNumber(toFill.begin(), toFill.end());
		// std::cout << sp << std::endl;
		if (sp.getArr().size()) {
			std::cout << "size: " << sp.getArr().size() << std::endl;
			std::cout << "max: " << *std::max_element(sp.getArr().begin(), sp.getArr().end()) << std::endl;
			std::cout << "min: " << *std::min_element(sp.getArr().begin(), sp.getArr().end()) << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

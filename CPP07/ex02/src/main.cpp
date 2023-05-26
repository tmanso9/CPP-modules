/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/26 13:18:59 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> a(static_cast<unsigned int>(10));

	std::cout << a.size() << "\t" << a[3] << std::endl;
	a[3] = 52;
	std::cout << a.size() << "\t" << a[3] << std::endl;

	Array<int>	b(a);
	std::cout << b.size() << "\t" << b[3] << std::endl;
	b[3] = 64;
	std::cout << a.size() << "\t" << a[3] << std::endl;
	a = b;
	std::cout << a.size() << "\t" << a[3] << std::endl;

	try
	{
		b[-2];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	unsigned int max = 52;
	Array<char>	f(max);
	char	*h = new char[max];

	try
	{
		LOG("---Testing initial values---");
		unsigned int i = 0;
		for (; i < max; i++) {
			if (f[i] != h[i]) {
				std::cerr << i << ":\tUps, initialized with wrong number" << std::endl;
				break ;
			}
		}
		if (i == max) {
			std::cout << "\tAll OK" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}

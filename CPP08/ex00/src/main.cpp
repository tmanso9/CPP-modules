/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/26 20:38:41 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <string>

int	main(void)
{
	std::list<int> lst;

	lst.push_back(32);
	lst.push_back(5);
	lst.push_back(1);
	lst.push_back(-7);
	lst.push_back(54);
	lst.push_back(32);
	try
	{
		std::list<int>::iterator it = easyfind(lst, 54);
		std::cout << *it-- << std::endl;
		std::cout << *it << std::endl;
		it = easyfind(lst, 32);
		std::cout << *it-- << std::endl;
		std::cout << *it << std::endl;
		it = easyfind(lst, 876);
		std::cout << *it-- << std::endl;
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	
	std::string str = "Hello World";
	try
	{
		std::string::iterator it = easyfind(str, 'e');
		std::cout << *it++ << std::endl;
		std::cout << *it << std::endl;
		std::cout << *easyfind(str, 'Z') << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

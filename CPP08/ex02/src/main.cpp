/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/29 20:26:41 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	// std::stack<int> test;
	// test.push(45);
	// test.push(100);
	// std::cout << test.top() << ++(&test.top()) << std::endl;
	// test.pop();
	// std::cout << test.top() << std::endl;
	
	MutantStack<int> a;

	a.push(45);
	a.push(47);
	a.push(49);
	a.push(100);

	MutantStack<int>::iterator it = a.begin();
	MutantStack<int>::iterator ite = a.end();
	// (void)ite;
	std::cout << *it << " " << *ite << " " << std::endl;
	// for (; it != ite; it++) {
	// 	std::cout << *it << " ";
	// }
}

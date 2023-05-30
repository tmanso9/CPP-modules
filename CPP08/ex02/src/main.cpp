/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/30 18:39:53 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	{
		// std::stack<int> test;
		// test.push(45);
		// test.push(100);
		// std::cout << test.top() << std::endl;
		// test.pop();
		// std::cout << test.top() << std::endl;
		
		
		MutantStack<int> a;

		a.push(45);
		a.push(47);
		a.push(49);
		a.push(100);

		MutantStack<int>::iterator it = a.begin();
		MutantStack<int>::iterator it2 = it;
		MutantStack<int>::iterator ite = a.end();
		// (void)ite;
		it++;
		// std::cout << *it << " " << *ite << " " << std::endl;
		it--;
		// std::cout << *it << " " << *ite << " " << std::endl;
		
		for (; it2 != ite; it2++) {
			std::cout << *it2 << " ";
		}
		std::cout << std::endl;
		a.pop();
		it = a.begin();
		for (; it != ite; it++) {
			std::cout << *it << " ";
		}
	}
	/* {
		std::cout << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		return 0;
	} */
}

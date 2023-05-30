/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/30 20:08:53 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

# define LOG(x) std::cout << x << std::endl;

int	main(void)
{
	{
		LOG("----Testing original main----");
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
		
		LOG("----Comparing results with std::list----");
		std::list<int> ltest;
		ltest.push_back(5);
		ltest.push_back(17);
		std::cout << ltest.back() << std::endl;
		ltest.pop_back();
		std::cout << ltest.size() << std::endl;
		ltest.push_back(3);
		ltest.push_back(5);
		ltest.push_back(737);
		ltest.push_back(0);
		std::list<int>::iterator it2 = --ltest.end()--;
		std::list<int>::iterator ite2 = --ltest.begin();
		++it2;
		--it2;
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			--it2;
		}
	}
	{
		LOG("\n----Now for my own main----");
		MutantStack<int> a;

		a.push(45);
		a.push(47);
		a.push(49);
		a.push(100);

		MutantStack<int>::iterator it = a.begin();
		MutantStack<int>::iterator it2 = it;
		MutantStack<int>::iterator ite = a.end();
		it++;
		it--;
		for (; it2 != ite; it2++) {
			std::cout << *it2 << " ";
		}
		std::cout << std::endl;
		a.pop();
		it = a.begin();
		for (; it != ite; it++) {
			std::cout << *it << " ";
		}
		// LOG("");
		// LOG(*(++it));
		// std::cout << *it;
	}
	
}

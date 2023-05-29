/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:41:22 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/29 20:25:54 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <cstddef>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	std::stack<T> data;
public:
	MutantStack<T>(/* args */) {};
	~MutantStack(){};

	struct iterator {
		typedef std::bidirectional_iterator_tag iterator_category;
		typedef std::ptrdiff_t difference_type;
		typedef T value_type;
		typedef T* pointer;
		typedef T& reference;

		iterator( pointer ptr ) : m_ptr(ptr){};

		reference operator*() const { return *m_ptr; };
		iterator& operator--() { m_ptr--; return *this; };
		iterator & operator++() { m_ptr++; return *this; };
		iterator operator++(T none) {
			(void)none;
			iterator tmp = *this;
			++(*this);
			return (tmp);
		};

		bool operator!=( const iterator & other ) {
			return this->m_ptr != other.m_ptr;
		}

		private:
			pointer m_ptr;
	};
	iterator begin() { return iterator(&this->top()); };
	iterator end() { 
		std::stack<T> & tmp(*this);
		size_t initial = this->size();
		for (size_t i = 0; i < (initial - 1); i++ ) {
			std::cout << tmp.top() << " ";
			tmp.pop();
		}
		std::cout << tmp.top() << std::endl;
		return &tmp.top();
	};
	void test() { 
		std::cout << this->size();
	};
};

#endif
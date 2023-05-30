/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:41:22 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/30 20:05:35 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <cstddef>
# include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>() {};
	~MutantStack(){};

	struct iterator {

		iterator() : m_ptr(NULL){};
		iterator( T* ptr ) : m_ptr(ptr){};

		T& operator*() const { return *m_ptr; };
		iterator& operator--() { m_ptr++; return *this; };
		iterator & operator++() {
			m_ptr--;
			return *this;
		};
		iterator operator--(T none) {
			(void)none;
			iterator tmp = *this;
			--(*this);
			return (tmp);
		};
		iterator operator++(T none) {
			(void)none;
			iterator tmp = *this;
			++(*this);
			return (tmp);
		};

		bool operator!=( const iterator & other ) {
			return this->m_ptr != other.m_ptr;
		}

		bool operator==( const iterator & other ) {
			return this->m_ptr == other.m_ptr;
		}

		private:
			T* m_ptr;
	};
	iterator begin() { return iterator(&this->top()); };
	iterator end() { return &this->top() - this->size(); };
};

#endif
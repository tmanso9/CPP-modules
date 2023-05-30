/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:41:22 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/30 21:27:44 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <cstddef>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>() {};
	~MutantStack(){};

	/* struct iterator {

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
	}; */

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
	iterator begin() { return this->c.begin(); };
	const_iterator begin() const { return this->c.begin(); };
	reverse_iterator rbegin() { return this->c.rbegin(); };
	const_reverse_iterator rbegin() const { return this->c.rbegin(); };
	iterator end() { return this->c.end(); };
	const_iterator end() const { return this->c.end(); };
	reverse_iterator rend() { return this->c.rend(); };
	const_reverse_iterator rend() const { return this->c.rend(); };
};

#endif
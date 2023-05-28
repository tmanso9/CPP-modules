/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:10:25 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/28 23:33:55 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <cstdlib>
# include <algorithm>
# include <numeric>

class Span
{
private:
	static unsigned int	_shortest;
	unsigned int		N;
	std::vector<int>	_arr;
public:
	Span( void );
	Span( Span const & );
	Span( unsigned int );
	~Span();
	
	Span & operator=( Span const & );
	int operator[]( unsigned int ) const;
	
	void	addNumber( int );
	void	addNumber( int, int );
	void	addNumber( std::vector<int>::iterator, std::vector<int>::iterator );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );
	std::vector<int> & getArr( void );

	class noSpanException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Not enough numbers in array"; };
	};

	class fullArrException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Array is full"; };
	};

	class outOfRangeException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Index out of range"; };
	};
};

std::ostream & operator<<( std::ostream & o, Span & src );

#endif
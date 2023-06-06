/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:53:08 by touteiro          #+#    #+#             */
/*   Updated: 2023/06/06 02:08:45 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <limits.h>
# include <string>
# include <list>
# include <vector>
# include <algorithm>
# include <time.h>

class PmergeMe
{
private:
	PmergeMe( void );
	PmergeMe( PmergeMe const & );
	PmergeMe & operator=( PmergeMe const & );
	
	static std::list<int>	_lst;
	static std::list<int>	_sortedLst;
	static std::list<std::pair<int, int> > _lstPairs;
	
	static std::vector<int>	_vect;
	static std::vector<int>	_sortedVect;
	static std::vector<std::pair<int, int> > _vectPairs;

	static void parseInput( std::vector<std::string> );
	static void mergeInsertVect( std::vector<int> & );
	static void mergeInsertList( void );
	
	template <typename T>
	static void printSequence( T & arr )
	{
		typename T::iterator it = arr.begin();
		size_t i = 1;
		for (; i < 15 && i < arr.size(); i++) {
			std::cout << *it++ << " ";
		}
		if (i < arr.size()) {
			std::cout << "[...]";
		} else {
			std::cout << *it;
		}
		std::cout << std::endl;
	};
public:
	~PmergeMe();

	static void	sort( std::vector<std::string> );
};



#endif
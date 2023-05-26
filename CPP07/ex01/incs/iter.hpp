/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:10:56 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/26 11:26:28 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <cstddef>
# include <iostream>

template<typename T>
void	printVal( T & data ){
	std::cout << data << "\t";
}

template<typename T>
void	timesTwo( T & data ){
	data *= 2;
}

template<typename T>
void	iter(T *arr, std::size_t len, void(*f)(T &)){
	for (std::size_t i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif
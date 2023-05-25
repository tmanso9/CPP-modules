/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:17:59 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/25 19:20:58 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template<typename T>
void	swap( T & a, T & b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

#endif // !SWAP_HPP
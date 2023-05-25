/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:13:44 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/25 19:26:50 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template<typename T>
T const & max( T const & x, T const & y) {
	return (x >= y ? x : y );
}

#endif // !MAX_HPP
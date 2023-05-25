/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Min.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:13:44 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/25 19:22:44 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template<typename T>
T const & min( T const & x, T const & y) {
	return (x <= y ? x : y );
}

#endif // !MIN_HPP
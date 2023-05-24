/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:44:12 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/24 17:32:09 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
private:
	Data();
	int	_data;
	
public:
	Data( int );
	Data( Data const & );
	Data & operator=( Data const & );
	~Data();

	int	getData( void ) const;
};

#endif // !DATA_HPP
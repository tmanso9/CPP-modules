/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:44:04 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/24 16:45:00 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(/* args */)
{
}

Data::~Data()
{
}

Data::Data( int data ) : _data(data)
{	
}

Data::Data( Data const & src )
{
	_data = src.getData();
}

Data & Data::operator=( Data const & src )
{
	this->_data = src.getData();
	return *this;
}

int	Data::getData( void ) const
{
	return _data;
}
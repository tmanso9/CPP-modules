/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:00:00 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/24 19:24:39 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <iostream>

struct Data
{
	int 	n;
	char	c;
};

class Serializer
{
private:
	Serializer( void );
	Serializer( Serializer const & );
	Serializer & operator=( Serializer const & );
	
public:
	~Serializer();
	
	static uintptr_t	serialize( Data* );
	static Data*		deserialize( uintptr_t );
};


#endif // !SERIALIZER_HPP
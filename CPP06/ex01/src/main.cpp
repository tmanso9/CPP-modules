/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/24 19:27:00 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		*original = new Data;
	uintptr_t	serialized;
	Data		*finalRes;
	
	original->n = 65;
	original->c = 'r';
	std::cout << "Original pointer:\t\t" << original << std::endl;
	std::cout << "Original values:\t\t" << original->n << "\t" << original->c << std::endl;

	serialized = Serializer::serialize(original);
	finalRes = Serializer::deserialize(serialized);
	std::cout << "Pointer after serializer:\t" << finalRes << std::endl;
	std::cout << "Values after serializer:\t" << finalRes->n << "\t" << finalRes->c << std::endl;
	
	delete original;
}
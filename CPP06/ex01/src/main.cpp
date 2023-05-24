/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touteiro <touteiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:35:17 by touteiro          #+#    #+#             */
/*   Updated: 2023/05/24 17:29:12 by touteiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		*original = new Data(1500);
	uintptr_t	serialized;
	Data		*finalRes;
	
	std::cout << "Original pointer:\t" << original << std::endl;
	std::cout << "Original value:\t" << original->getData() << std::endl;

	serialized = Serializer::serialize(original);
	finalRes = Serializer::deserialize(serialized);
	std::cout << "Pointer after serializer:\t" << finalRes << std::endl;
	std::cout << "Value after serializer:\t" << finalRes->getData() << std::endl;
	
	delete original;
}
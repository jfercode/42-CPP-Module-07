/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:45:19 by jaferna2          #+#    #+#             */
/*   Updated: 2025/07/23 18:10:13 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Array.hpp"

int main(void)
{
	try
	{
		Array<int> intArray(5);
		
		std::cout << "TESTING ARRAY CREATION + VALOR MODIFICATION..." << std::endl;
		for (size_t i = 0; i < intArray.size(); ++i)
			intArray[i] = static_cast<int>(i *10);
		for (size_t i = 0; i < intArray.size(); ++i)
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		
		std::cout << "intArray size: " << intArray.size() << std::endl;
		
		std::cout << "TESTING COPY ARRAY + VALOR [0] MODIFICATION..." << std::endl;
		Array<int> copy = intArray;
		copy[0] = 999;
		std::cout << "copy[0] = " << copy[0] << " | intArray[0] = " << intArray[0] << std::endl;
		
		std::cout << "TESTING INDEX OUT OF BOUNDS EXCEPTION ..." << std::endl;
		std::cout << intArray[100] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return (0);
}

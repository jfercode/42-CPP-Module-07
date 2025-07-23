/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:29:49 by jaferna2          #+#    #+#             */
/*   Updated: 2025/07/23 17:52:06 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#pragma once

#include <iostream>
#include <stdexcept>
#include <cstddef>

template <typename T>
class Array
{
private:
	T* 			data;
	size_t		len;	
public:
	Array(void);
	Array(unsigned int n);
	Array(const Array &other);
	~Array(void);

	
	Array& operator=(const Array &other);
	T& operator[](size_t index);
	const T& operator[](size_t index) const;

	size_t	size(void) const;
	
	class IndexOutOfBoundException : public std::exception {
		const char *what() const throw();
	};
};

#include "../source/Array.tpp"

#endif

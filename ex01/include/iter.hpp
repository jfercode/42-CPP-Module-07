/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:12:20 by jaferna2          #+#    #+#             */
/*   Updated: 2025/07/23 17:19:21 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#pragma once

#include <iostream>
#include <cstddef>

template <typename T>
void	iter(T *array, size_t array_length, void (*func)(T &))
{
	for (size_t i = 0; i < array_length; ++i)
		func(array[i]);
}

template <typename T>
void	iter(T *array, size_t array_length, void (*func)(const T &))
{
	for (size_t i = 0; i < array_length; ++i)
		func(array[i]);
}
#endif

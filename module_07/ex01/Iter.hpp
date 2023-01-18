/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:31:53 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/10 15:08:36 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename F>
void iter( T* arr, int length, F func ) {
	for (int i = 0; i < length; i++) {
		func(arr[i]);
	}
}

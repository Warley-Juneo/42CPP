/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:04:13 by wjuneo-f          #+#    #+#             */
/*   Updated: 2023/01/10 15:09:26 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template <typename T>
class Array {
	public:
		Array() : _obj(NULL), _size(0) {}
		Array( unsigned int n ) : _obj(new T[n]), _size(n) {}

		Array( const Array<T>& src ) : _obj(new T[src._size]), _size(src._size) {
			for (unsigned int i = 0; i < src._size; i++) {
				_obj[i] = src._obj[i];
			}
		}
		Array& operator=( const Array<T>& src ) {
			if (this == &src) {
				return *this;
			}
			if (_obj != NULL) {
				delete[] _obj;
			}
			_obj = new T[src._size];
			_size = src._size;
			for (unsigned int i = 0; i < src._size; i++) {
				_obj[i] = src._obj[i];
			}
			return (*this);
		}

		T& operator[]( unsigned int index ) {
			if (index >= _size) {
				throw std::exception();
			}
			return (_obj[index]);
		}

		unsigned int	size() const { return _size; }

		~Array() {
			if (_obj != NULL) {
				delete[] _obj;
			}
		}
	private:
		T*				_obj;
		unsigned int	_size;
};

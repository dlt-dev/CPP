/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:38:38 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 18:12:59 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
Array<T>::Array() : _data(NULL), _length(0)
{
    
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(NULL), _length(n)
{
	if (n > 0)
		_data = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other) : _data(NULL), _length(other._length)
{
	if (_length > 0)
    {
		_data = new T[_length]();
		for (unsigned int i = 0; i < _length; i++)
        {
            _data[i] = other._data[i];
        }
        
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
		return *this;

	delete[] _data;

	_length = other._length;
	_data = NULL;

	if (_length > 0)
	{
		_data = new T[_length]();
		for (unsigned int i = 0; i < _length; i++)
			_data[i] = other._data[i];
	}

	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;

}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _length)
		throw std::out_of_range("Array index out of range");

    return _data[index];

}


template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _length)
		throw std::out_of_range("Array index out of range");

    return _data[index];

}

template <typename T>
unsigned int Array<T>::size() const
{

	return _length;
}
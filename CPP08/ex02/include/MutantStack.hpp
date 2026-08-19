/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:38:54 by jdelattr          #+#    #+#             */
/*   Updated: 2026/08/16 18:13:20 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <string>
#include <exception>
#include <cctype>
#include <stdint.h>

#include <limits>
#include <cstdlib>

#include <cstddef>


// template <typename T, typename Container = std::deque<T> >
// class stack
// {
// 	protected:
// 		Container c;   //conteneur appelé c dans la norme

// 	public:
// 		void push(const T& val) { c.push_back(val); }
// 		void pop() { c.pop_back(); }
// 		T& top() { return c.back(); }
// 		bool empty() const { return c.empty(); }
// 		size_t size() const { return c.size(); }
// };


template <typename T>
class MutantStack : public std::stack<T> // inherit de std::stack
{

	public:
		MutantStack()
		{

		}

        // appelle explicitement le constructeur de la copie
		MutantStack(const MutantStack& other) : std::stack<T>(other)
		{

		}

        // pareil pour operator = de stack
		MutantStack& operator=(const MutantStack& other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}

		~MutantStack()
		{
		}


        //alias iterator
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

		const_iterator begin() const
		{
			return this->c.begin();
		}

		const_iterator end() const
		{
			return this->c.end();
		}

};

#endif

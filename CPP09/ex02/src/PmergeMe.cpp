/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelattr <jdelattr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:23:28 by jdelattr          #+#    #+#             */
/*   Updated: 2026/09/25 17:57:15 by jdelattr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <climits> 
#include <stack>
#include <sstream>
#include <sys/time.h>

// - TERMINER LA CONVERSION POUR LES LIST
// - MAIN FONCTIONELLE
// - METTRE AU PROPRE + SHEMATISATION

typedef std::vector<int> bloc;

struct Elem
{
	bloc value;
	int id;
};

struct PairElem
{
	Elem a;
	Elem b;
	
};

double           			 getMicroseconds();
//void             			 printNumbers(const std::string& isWhat, const std::vector<int>& numbers);
bool            			 isValidPositiveInt(const std::string& s);


int              			 lastVal(const Elem& ele);
Elem             			 makeElem(const bloc& newBloc, int& nextId);


int                          findIdVector(const std::vector<Elem>& ele, int targetId);
std::list<Elem>::iterator    findIdList(std::list<Elem>& lst, int targetId);
Elem                         findBById(std::list<PairElem>& pairs, int targetId);


std::vector<int>  			 jacobsthalOrder(int pendSize);


std::vector<Elem>			 sortRecursiveVector(std::vector<Elem> ele);
std::list<Elem>   			 sortRecursiveList(std::list<Elem> ele);


std::vector<int> 			 flattenVector(std::vector<Elem>& ele);
std::vector<int>  			 flattenList(std::list<Elem>& ele);


PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other) 
: _input(other._input), _sortedVector(other._sortedVector), _sortedList(other._sortedList), _timeVector(other._timeVector), _timeList(other._timeList) 
{

}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this == &other)
		return *this;

	_input = other._input;
	_sortedVector = other._sortedVector;
	_sortedList = other._sortedList;
	_timeVector = other._timeVector;
	_timeList = other._timeList;

	return *this;
}

PmergeMe::~PmergeMe()
{
}

// Constructeur réel
PmergeMe::PmergeMe(const std::vector<int>& input)
{
	_input = input;
}

const std::vector<int>& PmergeMe::getInput() const
{
    return this->_input;
}

const std::vector<int>& PmergeMe::getSortedVector() const
{
	return this->_sortedVector;
}

const std::vector<int>& PmergeMe::getSortedList() const
{
	return this->_sortedList;
}

double PmergeMe::getTimeVector() const
{
	return this->_timeVector;
}

double PmergeMe::getTimeList() const
{
	return this->_timeList;
}


bool isValidPositiveInt(const std::string& s)
{
	if (s.empty())
		return false;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(s[i])))
            return false;
    }

	std::istringstream iss(s);
	long value;
	iss >> value;

	if (value > INT_MAX)
		return false;


		
	return true;
}


double getMicroseconds()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (double)tv.tv_sec * 1000000.0 + (double)tv.tv_usec;
}


std::vector<int> jacobsthalOrder(int pendSize)
{

	std::vector<int> jacobList;
	
	long j0 = 0;
	long j1 = 1;
	long j2;

	while (true) // ordre
	{
		j2 = j1 + 2* j0;
		if (j2 >= 3)
			jacobList.push_back((int) j2);
		j0 = j1;
		j1 = j2;
		if (j2 > pendSize + 1)
			break;
	}
	
	std::vector<int> order;
	if (pendSize <= 0)
		return (order);

	int prev = 1;
	

	for (size_t i = 0; i < jacobList.size(); i++)
	{
		int cap;
		cap = std::min(jacobList[i], pendSize + 1);
		for (int idx = cap; idx > prev; idx--)
			order.push_back(idx - 2);
		prev = cap;
		if (prev >= pendSize + 1)
			break;
	}
	
	return order;
	
}

int lastVal(const Elem& ele)
{
	
	return ele.value.back();
	
}

Elem makeElem(const bloc& newBloc, int &nextId)
{
	Elem newEle;

	newEle.value = newBloc;
	newEle.id = nextId;
	
	return newEle;
	
}

int findIdVector(const std::vector<Elem>& ele, int targetId)
{
	for (size_t i = 0; i < ele.size(); i++)
	{
		if (ele[i].id == targetId)
			return (int)i;
	}
	return -1;
}

std::list<Elem>::iterator findIdList(std::list<Elem>& lst, int targetId)
{
    std::list<Elem>::iterator it;

    for (it = lst.begin(); it != lst.end(); ++it)
    {
        if (it->id == targetId)
            return it;
            
    }
    return lst.end();

}

Elem findBById(std::list<PairElem>& pairs, int targetId)
{
	std::list<PairElem>::iterator it;
	
	for (it = pairs.begin(); it != pairs.end(); ++it)
	{
		if (it->a.id == targetId)
			return it->b;
		
	}
	return Elem();
}


std::list<Elem> sortRecursiveList(std::list<Elem> ele)
{
	if (ele.size() <= 1)
		return ele;

	std::list<Elem> aList;

	bool hasOdd = false;
	Elem odd;
	
	// 1 pairage
	
	std::list<Elem>::iterator it = ele.begin();
	std::list<PairElem> pairs;
	
	while (it != ele.end())
	{

		
		std::list<Elem>::iterator next = it;
		++next;
		
		if (next == ele.end())
		{
			hasOdd = true;
			odd = *it;
			break;
		}


		
		Elem b;
		Elem a;		
		
		int val1 = lastVal(*it);
		int val2 = lastVal(*next);

		if (val1 < val2)
		{
			b = *it;
			a = *next;
		}

		else
		{
			b = *next;
    		a = *it;
		}
		
		PairElem p;
		p.a = a;
		p.b = b;
		pairs.push_back(p);
		aList.push_back(a);

		++next;
		it = next;
	}
	

	std::list<Elem> sortedA = sortRecursiveList(aList);
	
	std::list<Elem> main;
	std::list<Elem> pend;
	
	// 2 main

	Elem b1 = findBById(pairs, sortedA.front().id);
	
	main.push_back(b1);

	
	std::list<Elem>::iterator itA;
	for (itA = sortedA.begin(); itA != sortedA.end() ; ++itA)
		main.push_back(*itA);
	

	// 3 pend

	
	std::list<Elem>::iterator itPend = sortedA.begin();
	itPend++;
	for (; itPend != sortedA.end(); ++itPend)
	{
		Elem b = findBById(pairs, itPend->id);
		pend.push_back(b);
	}
	if (hasOdd)
		pend.push_back(odd);


	std::vector<int> order = jacobsthalOrder(pend.size());

	// 4 insertion

	for (size_t o = 0; o < order.size(); o++)
	{
        int p = order[o];
		
		std::list<Elem>::iterator pendIt = pend.begin();
		std::advance(pendIt, p);
		Elem toInsert = *pendIt;

		
		bool isOdd = (hasOdd && p == (int)pend.size() -1);
		std::list<Elem>::iterator boundIt;

		
        if (isOdd)
            boundIt = main.end();
        else
		{
			std::list<Elem>::iterator boundElemIt = sortedA.begin();
			std::advance(boundElemIt, p+1);
			int boundId = boundElemIt->id;

			boundIt = findIdList(main, boundId);
		}
            

        std::list<Elem>::iterator searchIt = main.begin();
        int target = lastVal(toInsert);

        while (searchIt != boundIt && lastVal(*searchIt) < target)
            ++searchIt;

        main.insert(searchIt, toInsert);
		
	}	

	return main;
	
}	



std::vector<Elem> sortRecursiveVector(std::vector<Elem> ele)
{
	if (ele.size() <= 1)
		return ele;

	std::vector<Elem> aList;
	std::vector<Elem> bList;

	bool hasOdd = false;
	Elem odd;
	
	// 1 pairage
	
	size_t i;

	for (i = 0; i + 1 < ele.size(); i += 2)
	{
		int val1 = lastVal(ele[i]);
		int val2 = lastVal(ele[i + 1]);
		
		Elem b;
		Elem a;

		if (val1 < val2)
		{
			b = ele[i];
			a = ele[i + 1];
		}

		else
		{
			b = ele[i + 1];
    		a = ele[i];
		}
		aList.push_back(a);
		bList.push_back(b);
	}
	
	if (i < ele.size())
	{
		hasOdd = true;
		odd = ele[i];
	}
	

	std::vector<Elem> sortedA = sortRecursiveVector(aList);
	
	std::vector<Elem> main;
	std::vector<Elem> pend;
	
	// 2 main

	int idx = findIdVector(aList, sortedA[0].id);
	Elem b1 = bList[idx];
	
	main.push_back(b1);

	for (size_t y = 0; y < sortedA.size(); y++)
		main.push_back(sortedA[y]);
	

	// 3 pend
	
	for (size_t z = 1; z < sortedA.size(); z++)
	{
		idx = findIdVector(aList, sortedA[z].id);
		Elem b = bList[idx];
		pend.push_back(b);
	}
	if (hasOdd)
		pend.push_back(odd);


	std::vector<int> order = jacobsthalOrder(pend.size());

	// 4 insertion

	for (size_t o = 0; o < order.size(); o++)
	{
		int p = order[o];
		Elem toInsert = pend[p];
		bool isOdd = (hasOdd && p == (int)pend.size() -1);
		size_t boundIdx;

		if (isOdd)
			boundIdx = main.size();
		
		else
			boundIdx = (size_t)findIdVector(main, sortedA[p + 1].id);
			
		int target = lastVal(toInsert);

		size_t lo = 0;
		size_t hi = boundIdx;

		while (lo < hi)
		{
			size_t mid = lo + (hi - lo) / 2;

			if (lastVal(main[mid]) < target)
				lo = mid + 1;
			else
				hi = mid;
		}
		main.insert(main.begin() + lo, toInsert);
		
	}	

	return main;
	
}	



std::vector<int> flattenVector(std::vector<Elem>& ele)
{
	std::vector<int> flateList;
	
	for (size_t i = 0; i < ele.size(); i++)
	{
		
		for (size_t y = 0; y < ele[i].value.size(); y++)
		{
			flateList.push_back(ele[i].value[y]);
		}
	}
	return flateList;
	
	
}

std::vector<int> flattenList(std::list<Elem>& ele)
{
	std::vector<int> flateList;
	std::list<Elem>::iterator it;
	
	for (it = ele.begin(); it != ele.end(); ++it )
	{
		
		for (size_t y = 0; y < it->value.size(); y++)
		{
			flateList.push_back(it->value[y]);
		}
	}
	return flateList;
	
	
}

// std::vector<int> fordJohnson(std::vector<int>& input)
// {
// 	int nextId = 0;
	
// 	std::vector<Elem> elements;
// 	std::vector<Elem> sorted;
	
// 	for (int i = 0; i < input.size() ; i++)
// 	{
		
// 		bloc newBloc;
// 		newBloc.push_back(input[i]);
// 		elements.push_back(makeElem(newBloc, nextId));
// 		nextId++;
		
// 	}
// 	sorted = sortRecursive(elements);
// 	return flatten(sorted);
	
// }

void PmergeMe::sortWithVector()
{
    double start = getMicroseconds();

    int nextId = 0;

    std::vector<Elem> elements;
    std::vector<Elem> sorted;
    
    for (size_t i = 0; i < _input.size() ; i++)
    {
        
        bloc newBloc;
        newBloc.push_back(this->_input[i]);
        elements.push_back(makeElem(newBloc, nextId));
        nextId++;
        
    }
    sorted = sortRecursiveVector(elements);
    _sortedVector = flattenVector(sorted);
    
    
    double end = getMicroseconds();
    _timeVector = end - start;
    
}

void PmergeMe::sortWithList()
{
    double start = getMicroseconds();

    int nextId = 0;
	std::list<Elem> elements;

	for (size_t i = 0; i < _input.size(); i++)
	{
		bloc newBloc;
		newBloc.push_back(this->_input[i]);
		elements.push_back(makeElem(newBloc, nextId));
		nextId++;
	}
    
	std::list<Elem> sorted = sortRecursiveList(elements);
	_sortedList = flattenList(sorted);
    
    double end = getMicroseconds();
    _timeList = end - start;
}


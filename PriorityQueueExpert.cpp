// PriorityQueueExpert.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  
#include<queue>  
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	




	//for (size_t i = 0; i < size; ++i)
		//vector.push_back(buffer[i]);
	
	
	priority_queue<int> p;  // variable declaration.  
	p.push(10); // inserting 10 in a queue, top=10  
	p.push(30); // inserting 30 in a queue, top=30  
	p.push(20); // inserting 20 in a queue, top=20  
	cout << "Number of elements available in 'p' :" << p.size() << endl;
	while (!p.empty())
	{
		std::cout << p.top() << std::endl;
		p.pop();
	}
	
	
	priority_queue<int> p;  // priority queue declaration  
	priority_queue<int> q;  // priority queue declaration  
	p.push(1); // inserting element '1' in p.  
	p.push(2); // inserting element '2' in p.  
	p.push(3); // inserting element '3' in p.  
	p.push(4); // inserting element '4' in p.  
	q.push(5); // inserting element '5' in q.  
	q.push(6); // inserting element '6' in q.  
	q.push(7); // inserting element '7' in q.  
	q.push(8); // inserting element '8' in q.  
	p.swap(q);
	std::cout << "Elements of p are : " << std::endl;
	while (!p.empty())
	{
		std::cout << p.top() << std::endl;
		p.pop();
	}
	std::cout << "Elements of q are :" << std::endl;
	while (!q.empty())
	{
		std::cout << q.top() << std::endl;
		q.pop();
	}
	
	
	

	
	
	return 0;
}


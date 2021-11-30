#pragma once
#include <cassert>
#include<iostream>
#include "PriorityQueue.h"

using namespace std;

int main()
{
	cout << "Sinan Kolip's Priority queue data structure example!" << endl << endl;

	const int SIZE = 8;
	PriorityQueue<int> que(SIZE);
	
	que.push(12); //least priorty 0
	que.push(71,1);
	que.push(144,2);
	que.push(42);
	que.push(39, 3);
	que.push(88,1);


	cout << "Front"  << endl;
	while (que.isEmpty() == false)
	{
		cout << "  |  " << "Value: " << *que.front()<<  "  Priority: " << que.front().getPriorty();
		cout << endl;

		que.pop();
	}

	cout  << "Back" << endl<<endl;

	if (que.isEmpty() == true)
	{
		cout << "The container is empty." << endl;
	}
	else
	{
		cout << "The container is NOT empty." << endl;
	}

	return 0;
}
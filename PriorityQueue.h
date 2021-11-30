#pragma once
#pragma once

#include "PriorityQueueLinkedList.h"

template<class T>
class PriorityQueue
{
public:
	PriorityQueue(int size)
	{
		assert(size > 0);
		m_size = size;
	}
	~PriorityQueue() {}

	// Priority Queue Functions
	void push(T val, int priorty = 0)
	{
		assert(m_elements.GetSize() < m_size);

		if (m_elements.GetSize() == 0)
		{
			m_elements.Push_Back(val, priorty);
		}
		else
		{
			LinkIterator<T> it;
			it = m_elements.Begin();

			while (it.isValid())
			{
				if (priorty>it.getPriorty())
				{
					break;	// Move the iterator to the place where we want to insert the new node into
				}

				it++;
			}

			if (it.isValid())
			{
				m_elements.Insert_Before(it, val, priorty);
			}
			else
			{
				m_elements.Push_Back(val, priorty);
			}
		}
	}

	void pop()
	{
		m_elements.Pop_Front();
	}

	LinkIterator<T> front()
	{
		LinkIterator<T> it;
		it = m_elements.Begin();

		return it;
	}


	bool isEmpty()
	{
		return (m_elements.GetSize() == 0);
	}

private:
	LinkedList<T> m_elements; // Priority Queue Linked List
	int m_size;
};
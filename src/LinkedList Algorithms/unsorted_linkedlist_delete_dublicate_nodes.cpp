#include "unsorted_linkedlist_delete_dublicate_nodes.h"

#include "linkedlist.h"

auto unsorted_linkedlist_delete_dublicate_nodes(LinkedList &llist)
	-> void
	{
	auto current = llist.getHead();
	if (!current)
		return;
	while(current)
		{
		auto lcurrent = current;
		while(lcurrent->next)
			{
			if(lcurrent->next->data == current->data)
				{
				auto tmp = lcurrent->next->next;
				delete lcurrent->next;
				lcurrent->next = tmp;
				}
			else
				lcurrent = lcurrent->next;
			}
		current = current->next;
		}
	}
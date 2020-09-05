#include "linkedlist.h"
#include <iostream>

//struct LinkedList::Node
//	{
//    int data;
//   LinkedList::Node *next;
//	};

LinkedList::LinkedList()
	: m_head{nullptr}
	, m_tail{nullptr}
	{
	}

LinkedList::~LinkedList()
	{
	auto current = m_head;
	auto next = static_cast<Node*>(nullptr);
	while(current)
		{
		next = current->next;
		delete current;
		current = next;
		}
	}

auto LinkedList::display()
	-> void
	{
	auto current = m_head;
	while(current)
		{
		std::cout << current->data << ' ';
		current = current->next;
		}
	std::cout << '\n'; 
	}

auto LinkedList::insert(int value)
	-> void
	{
	if (!m_head)
		{
		m_head 		 = new Node;
		m_head->next = nullptr;
		m_head->data = value;
		m_tail 		 = m_head;
		return;
		}
	m_tail->next = new Node;
	m_tail 		 = m_tail->next;
	m_tail->data = value;
	m_tail->next = nullptr;
	}

auto LinkedList::getHead() const 
	-> Node*
	{
	return m_head;
	}

auto LinkedList::getTail() const 
	-> Node*
	{
	return m_tail;
	}
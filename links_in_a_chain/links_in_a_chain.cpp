// links_in_a_chain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ChainLink.h"
#include "Node.h"

using namespace std;

void append_node(ChainLink chain);
ChainLink create_chain(string color);

Node* head;
Node* tail;

int main()
{
	Node* head = new Node(create_chain("Red"));
	tail = head;

	append_node(create_chain("Orange"));
	append_node(create_chain("Yellow"));
	append_node(create_chain("Green"));
	append_node(create_chain("Blue"));
	append_node(create_chain("Purple"));
}

void append_node(ChainLink chain) {
	Node* new_node = new Node(chain);
	tail->next_node = new_node;
	tail = new_node;
}

ChainLink create_chain(string color) {
	ChainLink place_holder(color);
	return place_holder;
}

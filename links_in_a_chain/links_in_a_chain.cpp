// links_in_a_chain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ChainLink.h"
#include "Node.h"

using namespace std;

void append_node(ChainLink chain);

Node* head;
Node* tail;

int main()
{
	
}

void append_node(ChainLink chain) {
	Node* new_node = new Node(chain);
}
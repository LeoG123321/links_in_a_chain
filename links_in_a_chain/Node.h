#pragma once
#include "ChainLink.h"
#include <string>

class Node
{
public:
	ChainLink chain;
	Node* next_node = NULL;
	Node(string color) {
		ChainLink place_holder(color);
		chain = place_holder;
	}
};
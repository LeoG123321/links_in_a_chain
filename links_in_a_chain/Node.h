#pragma once
#include "ChainLink.h"

class Node
{
public:
	ChainLink chain;
	Node* next_node;
	Node(ChainLink chain);
};


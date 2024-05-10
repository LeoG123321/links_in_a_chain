#pragma once
#include "ChainLink.h"
#include <string>

class Node
{
public:
	ChainLink chain;
	Node* next_node = NULL;
	Node(ChainLink chain);
};
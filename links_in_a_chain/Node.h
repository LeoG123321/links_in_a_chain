#pragma once
#include "ChainLink.h"
#include <string>
using namespace std;

class Node
{
public:
	ChainLink *chain;
	Node* next_node;
	Node(ChainLink);
};


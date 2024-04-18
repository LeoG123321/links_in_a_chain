/*
	Leonardo Gonzalez	4/16/2024

	Week 14				Links in a Chain
*/

#include <iostream>
#include "Node.h"

using namespace std;

void append_node(string color);
string data_at_index(int index);
void display_all_data();

Node* head;
Node* tail;
int node_size = 0;

int main()
{
	head = new Node("Red");
	tail = head;
	node_size++;

	cout << node_size << endl;

	append_node("Orange");
	append_node("Yellow");
	append_node("Green");
	append_node("Blue");
	append_node("Purple");

	cout << node_size << endl;

	cout << endl;

	cout << head->chain.get_color() << endl;
	cout << head->next_node->chain.get_color() << endl;
	cout << head->next_node->next_node->chain.get_color() << endl;
	cout << head->next_node->next_node->next_node->chain.get_color() << endl;
	cout << head->next_node->next_node->next_node->next_node->chain.get_color() << endl;
	cout << head->next_node->next_node->next_node->next_node->next_node->chain.get_color() << endl;

	cout << endl;

	cout << data_at_index(0) << endl;
	cout << data_at_index(1) << endl;
	cout << data_at_index(2) << endl;
	cout << data_at_index(3) << endl;
	cout << data_at_index(4) << endl;
	cout << data_at_index(5) << endl;
	cout << data_at_index(6) << endl;

	display_all_data();
}

void append_node(string color) {
	Node* new_node = new Node(color);
	tail->next_node = new_node;
	tail = new_node;
	node_size++;
}

string data_at_index(int index) {
	if (index >= node_size) {
		return "Error: Input Out Of Range.";
	}
	Node* node = head;
	for (int i = 0; i < index; i++) {
		node = node->next_node;
	}
	return node->chain.get_color();
}

void display_all_data() {
	cout << endl << "Displaying All Data:" << endl;
	Node* node = head;
	for (int i = 0; i < node_size; i++) {
		cout << node->chain.get_color() << endl;
		node = node->next_node;
	}
}
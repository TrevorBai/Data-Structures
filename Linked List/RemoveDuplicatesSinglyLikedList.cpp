#include <iostream>
using namespace std;

// Create Node struct
struct Node {
	int data;
	struct Node* next;
};

// Utility function to create a new Node 
struct Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

// Print nodes in a linked list
void printList(struct Node* node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

// Remove duplicated nodes
void removeDuplicates(struct Node* start)
{
	struct Node *ptr1, *ptr2, *dup;
	ptr1 = start;

	// Check every node for ptr1
	while (ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;

		// Check if the rest of nodes equals 
		// to what ptr1 points to
		while (ptr2->next != NULL)
		{
			// Delete duplicates if there are
			if (ptr1->data == ptr2->next->data)
			{
				// Delete one duplicate
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}

int main() {
	
	struct Node* start = newNode(3);
	start->next = newNode(4);
	start->next->next = newNode(3);
	start->next->next->next = newNode(6);

	cout << "Linked list before removing duplicates: " << endl;
	printList(start);

	removeDuplicates(start);

	cout << "\nLinked list after removing duplicates: " << endl;
	printList(start);

	std::cin.get();
	return 0;
}
// C++ program to merge k sorted
// arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct ListNode {
	int data;
	ListNode* next;
};

/* Function to print nodes in 
a given linked list */
void printList(ListNode* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

// The main function that
// takes an array of lists
// arr[0..last] and generates
// the sorted output
ListNode* mergeKLists(vector<ListNode*>& lists) 
{

	for(int i = 1; i <= lists.size(); i++){
            while(true){
                 ListNode *head_0 = lists[0] , *head_i = lists[i];
            
                if(head_i == NULL)
                    break;
                
                if(head_0->val >= head_i->val){
                    lists[i] = head_i->next;
                    head_i->next = head_0;
                    lists[0] = head_i;
                }
                
                else{
                    while(head_i->next != NULL){
                        if(head_0->next->val >= head_i->val){
                            lists[i] = head_i->next;
                            head_i->next = head_0;
                            lists[0]->next = head_i;
                            break;
                        }
                        head_0= head_0->next;
                        
                        if(head_0->next == NULL ){
                            lists[i] = head_i->next;
                            head_i->next = NULL;
                            head_0->next = head_i;
                            head_0->next->next = NULL;
                            break;
                        }
                            
                    }
                }
            }
            
            
        }
        
        return lists[0];
}

// Utility function to create a new node.
ListNode* newNode(int data)
{
	struct Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

// Driver program to test
// above functions
int main()
{
	// Number of linked lists
	int k = 3;

	// Number of elements in each list
	int n = 4;

	// an array of pointers storing the
	// head nodes of the linked lists
	ListNode* lists;

	arr[0] = newNode(1);
	arr[0]->next = newNode(3);
	arr[0]->next->next = newNode(5);
	arr[0]->next->next->next = newNode(7);

	arr[1] = newNode(2);
	arr[1]->next = newNode(4);
	arr[1]->next->next = newNode(6);
	arr[1]->next->next->next = newNode(8);

	arr[2] = newNode(0);
	arr[2]->next = newNode(9);
	arr[2]->next->next = newNode(10);
	arr[2]->next->next->next = newNode(11);

	// Merge all lists
	ListNode* head = mergeKLists(lists);

	printList(head);

	return 0;
}

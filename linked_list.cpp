# include <iostream>

using namespace std;

/**
 * Node Class
 */
class Node {
public:
    int data;
    Node *next;
};

/**
 * Printing nodes LinkedList
 */
void printLinkedList(Node *);

/**
 * Insert Node in between any two nodes
 * @param pos
 * @param data
 */
Node *insertNodeBeginning(int, Node *);

/**
 * Insert node at the end
 * @param pos
 * @param val
 * @param test_node
 */
void insertNodeEnd(int, Node *);

/**
 * Insert a node in the middle
 * @return
 */
Node* insertNodeMiddle(int , Node*);

/**
 * Main Function
 * @return
 */
int main() {
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data = 1;
    first->next = second;


    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printLinkedList(first);

    Node *new_node = insertNodeBeginning(5, first);

    printLinkedList(new_node);

    insertNodeEnd(22, third);
    printLinkedList(new_node);

    insertNodeMiddle(59,second);

    printLinkedList(new_node);
    return 0;
}

/**
 * Print LinkedList Function
 * @param a
 */
void printLinkedList(Node *a) {
    while (a != NULL) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

/**
 * Insert Node in between any two nodes
 * @param pos
 * @param data
 */
Node* insertNodeBeginning(int val, Node *test_node) {
    Node *new_node = NULL;
    new_node = new Node();
    new_node->data = val;
    new_node->next = test_node;
    return new_node;
}

/**
 * Insert node at the end
 * @param pos
 * @param val
 * @param test_node
 */
void insertNodeEnd(int val, Node *test_node) {
    Node *new_node = NULL;
    new_node = new Node();
    test_node->next = new_node;
    new_node->data = val;
    new_node->next = NULL;
}

Node* insertNodeMiddle(int val, Node *test_node){
    Node* new_node= NULL;
    new_node = new Node();
    new_node->next = test_node->next;
    test_node->next = new_node;
    new_node->data = val;
    return test_node;
}
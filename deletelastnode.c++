#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;
public:
    CircularLinkedList() {
        this->head = nullptr;
    }

    void add_node(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            new_node->next = head;
        }
        else {
            Node* curr = head;
            while (curr->next != head) {
                curr = curr->next;
            }
            curr->next = new_node;
            new_node->next = head;
        }
    }

    void delete_last_node() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        Node* curr = head;
        Node* prev = nullptr;
        while (curr->next != head) {
            prev = curr;
            curr = curr->next;
        }
        if (prev) {
            prev->next = head;
        }
        else {
            head = nullptr;
        }
        delete curr;
    }

    void print_list() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        Node* curr = head;
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.add_node(1);
    cll.add_node(2);
    cll.add_node(3);
    cll.add_node(4);
    cll.add_node(5);
    cll.print_list();  // Output: 1 2 3 4 5
    cll.delete_last_node();
    cll.print_list();  // Output: 1 2 3 4
    cll.delete_last_node();
    cll.print_list();  // Output: 1 2 3
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    #include <iostream>

struct Node {
    int seat_number;
    Node* next;
};

void print_seats(Node* node) {
    if (node == nullptr) {
        std::cout << "No seats available.\n";
        return;
    }

    print_seats(node->next);

    std::cout << "Seat " << node->seat_number << "\n";
}

int main() {
    // Example bus with 5 seats
    Node* seat5 = new Node{5, nullptr};
    Node* seat4 = new Node{4, seat5};
    Node* seat3 = new Node{3, seat4};
    Node* seat2 = new Node{2, seat3};
    Node* seat1 = new Node{1, seat2};

    // Find a seat
    Node* current_seat = seat1;
    while (current_seat->next != nullptr) {
        current_seat = current_seat->next;
    }
     // Print seats while moving backwards
    print_seats(current_seat);
    
    // Clean up memory
    delete seat1;
    delete seat2;
    delete seat3;
    delete seat4;
    delete seat5;

    return 0;
}
}
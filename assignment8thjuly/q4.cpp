//remove duplicate element in singly linked list in c++;

#include <iostream>
#include <unordered_set>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void removeDuplicates(ListNode* head) {
    if (!head) return;

    std::unordered_set<int> seen;
    ListNode* curr = head;
    ListNode* prev = nullptr;

    while (curr) {
        if (seen.count(curr->val)) {
            // Duplicate found, remove the current node
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            seen.insert(curr->val);
            prev = curr;
            curr = curr->next;
        }
    }
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
      cout<<"before deletion of duplicate"<<endl;
      ListNode* temp = head;
      while(temp != NULL){
        cout<<temp->val<<" "<<endl;
        temp = temp->next;
      }
    removeDuplicates(head);

    // Print the modified list
    cout<<"after delettion of duplicates"<<endl;
    ListNode* temp1 = head;
    while (temp1) {
        std::cout << temp1->val <<endl;
        temp1 = temp1->next;
    }

    // Clean up memory (delete the list)
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

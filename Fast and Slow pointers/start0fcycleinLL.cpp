// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

// Do not modify the linked list.

 

// Example 1:


// Input: head = [3,2,0,-4], pos = 1
// Output: tail connects to node index 1
// Explanation: There is a cycle in the linked list, where tail connects to the second node.
// Example 2:


// Input: head = [1,2], pos = 0
// Output: tail connects to node index 0
// Explanation: There is a cycle in the linked list, where tail connects to the first node.
// Example 3:


// Input: head = [1], pos = -1
// Output: no cycle
// Explanation: There is no cycle in the linked list.
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // Cycle found

                // Step 2: Find start of cycle
                ListNode* ptr1 = head;
                ListNode* ptr2 = slow;

                while (ptr1 != ptr2) {
                    ptr1 = ptr1->next;
                    ptr2 = ptr2->next;
                }

                return ptr1; // start of cycle
            }
        }

        return NULL; // no cycle
    }
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n == 0) {
        cout << "Empty list\n";
        return 0;
    }

    vector<ListNode*> nodes;

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nodes.push_back(new ListNode(x));
    }

    // Connect nodes normally
    for (int i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    /*
        Input cycle position:
        -1 -> No cycle
         0 -> Tail connects to node 0
         1 -> Tail connects to node 1
         etc.
    */
    int pos;
    cout << "Enter cycle position (-1 for no cycle): ";
    cin >> pos;

    if (pos >= 0 && pos < n) {
        nodes[n - 1]->next = nodes[pos];
    }

    ListNode* head = nodes[0];

    Solution obj;
    ListNode* ans = obj.detectCycle(head);

    if (ans == NULL) {
        cout << "No cycle present\n";
    } else {
        cout << "Cycle starts at node with value: "
             << ans->val << endl;
    }

    return 0;
}
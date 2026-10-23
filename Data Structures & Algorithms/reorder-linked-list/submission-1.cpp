/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        // if (!head) return;
        // vector<ListNode*> nodes;
        // for (ListNode* p = head; p; p = p->next) nodes.push_back(p);
        // int l = 0, r = nodes.size() - 1;
        // while (l < r) {
        //     nodes[l]->next = nodes[r];
        //     l++;
        //     if (l==r) break;
        //     nodes[r]->next = nodes[l];
        //     r--;
        // }
        // nodes[l]->next = nullptr;

        // the methods to solve this question is : general two pointer, recursive and last approach is half the list and then take one by one therefore we will get the reordered list:
        // using the first method is to store it 
         if (!head || !head->next) return;

    // 1. find middle
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // 2. reverse second half
    ListNode* prev = nullptr;
    ListNode* curr = slow->next;
    slow->next = nullptr;           // cut the list in two
    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }

    // 3. merge alternately
    ListNode* first = head;
    ListNode* second = prev;
    while (second) {
        ListNode* t1 = first->next;
        ListNode* t2 = second->next;
        first->next = second;
        second->next = t1;
        first = t1;
        second = t2;}
    }
};

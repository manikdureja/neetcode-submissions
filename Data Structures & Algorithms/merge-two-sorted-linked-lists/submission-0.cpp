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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode merger(0);
        ListNode* front=&merger;
        while(list1 && list2){
            if(list1->val < list2->val){
                front->next = list1;
                list1 = list1->next;
            }
            else{
                front->next=list2;
                list2 = list2->next;
            }
            front = front->next;
        }
        // while(list1){
        //     front->next = list1;
        //     list1 =list1->next;
        // }
        // while(list2){
        //     front->next=list2;
        //     list2=list2->next;
        // }
        if (list1) {
            front->next = list1;
        } else if (list2) {
            front->next = list2;
        }
        return merger.next;
        
    }
};

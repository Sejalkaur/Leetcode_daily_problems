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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0)return head;
        ListNode* tail = head;
        int len =1;
        //now tail is at last node
        while(tail->next != NULL){
            len++;
             tail = tail->next;
            
        }
        if(k%len == 0)return head; // bcz it will return the same list 
        k = k%len; // minimise krene ke lie like 13%5=3 other tahn 13
        tail->next = head; //5->head;

        ListNode* temp = head;
        int cnt =0;
        
        while(temp!= NULL){
            cnt++;
            if(cnt == len-k)break; //5-2=3 3rd node is now the last one
            else{
                temp = temp->next;
            }
        }
        //temp is at 3rd node now
        ListNode* newHead = temp->next; //4th node new head;
        temp->next = nullptr;
        return newHead;
    }
};
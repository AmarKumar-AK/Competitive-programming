/*
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.
---------------------------
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
---------------------------
Input: l1 = [], l2 = []
Output: []
---------------------------
Input: l1 = [], l2 = [0]
Output: [0]
*/
// using recursion
class Solution {
public:
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *L=NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        // compare value inside both the lists, smaller one gets added to the list and next value will be recursively passed
        if(l1->val <= l2->val){
            L = l1;
            L->next = mergeTwoLists(l1->next,l2);
        }
        else if(l1->val > l2->val){
            L = l2;
            L->next = mergeTwoLists(l1,l2->next);
        }
        
        return L;
    }
};
//////////////////////////////////////////////
// without recursion
class Solution {
public:
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *L;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        // compare value of both Node, the smaller one gets appended to the list.
        if(l1->val <= l2->val){
            L = l1;
            l1 = l1->next;
        }else if(l1->val > l2->val){
            L = l2;
            l2 = l2->next;
        }
        // a new pointer head is created so that it could point the first element of list after merging both the list
        ListNode *head = L;
        // check for smaller number inside the node untill one of the list becomes empty
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                L->next = l1;
                l1 = l1->next;
            }else if(l1->val > l2->val){
                L->next = l2;
                l2 = l2->next;
            }
            L = L->next;
        }
        // if first list becomes empty then add the element of second list to the merging list 
        if(l1==NULL) L->next = l2;
        else if(l2==NULL) L->next = l1;
        return head;
    }
};

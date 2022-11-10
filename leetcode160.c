#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* curA = headA, * curB = headB;
    int lenA = 0; int lenB = 0;
    //找尾
    while (curA)
    {
        lenA++;
        curA = curA->next;
    }
    while (curB)
    {
        lenB++;
        curB = curB->next;
    }

    //尾节点不相等就不相交
    if (curA != curB)
        return NULL;

    int gap = abs(lenA - lenB);
    //假设认为A长B段
    struct ListNode* longList = headA, * shortList = headB;
    if (lenB > lenA)
    {
        longList = headB;
        shortList = headA;
    }

    //先走差距步
    while (gap--)
    {
        longList = longList->next;
    }

    //同时走，找交点
    while (longList != shortList)
    {
        longList = longList->next;
        shortList = shortList->next;
    }

    return longList;
}

bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}
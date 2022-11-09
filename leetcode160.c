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
    //��β
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

    //β�ڵ㲻��ȾͲ��ཻ
    if (curA != curB)
        return NULL;

    int gap = abs(lenA - lenB);
    //������ΪA��B��
    struct ListNode* longList = headA, * shortList = headB;
    if (lenB > lenA)
    {
        longList = headB;
        shortList = headA;
    }

    //���߲�ಽ
    while (gap--)
    {
        longList = longList->next;
    }

    //ͬʱ�ߣ��ҽ���
    while (longList != shortList)
    {
        longList = longList->next;
        shortList = shortList->next;
    }

    return longList;
}
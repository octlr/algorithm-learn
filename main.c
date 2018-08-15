#include <stdio.h>
#include "leetcode.h"

int main() {
    struct ListNode *node1 = (struct ListNode *) malloc(sizeof(struct ListNode));
    node1->val = 1;
    struct ListNode *node2 = (struct ListNode *) malloc(sizeof(struct ListNode));
    node2->val = 2;
    node1->next = node2;
    struct ListNode *node3 = (struct ListNode *) malloc(sizeof(struct ListNode));
    node3->val = 3;
    node2->next = node3;
    struct ListNode *node4 = (struct ListNode *) malloc(sizeof(struct ListNode));
    node4->val = 4;
    node3->next = node4;
    struct ListNode *node5 = (struct ListNode *) malloc(sizeof(struct ListNode));
    node5->val = 5;
    node4->next = node5;
    struct ListNode *node6 = (struct ListNode *) malloc(sizeof(struct ListNode));
    node6->val = 6;
    node6->next = NULL;
    node5->next = node6;
    return 0;
}
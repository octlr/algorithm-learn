//
// Created by Administrator on 2018/8/10.
//

#include "leetcode.h"


/**
 * leetcode 算法第2题
 *
 * 给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。
 * 你可以假设除了数字 0 之外，这两个数字都不会以零开头。
 *
 *比如
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 *
 *
 */
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *result = (struct ListNode *) malloc(sizeof(struct ListNode));
    result->val = 0;
    result->next = NULL;
    struct ListNode *list = result;
    while (l1 != NULL || l2 != NULL) {
        if (l1 == NULL && l2 != NULL) {
            result->val = l2->val + result->val;
            l2 = l2->next;
        }
        if (l2 == NULL && l1 != NULL) {
            result->val = l1->val + result->val;
            l1 = l1->next;
        }
        if (l1 != NULL && l2 != NULL) {
            result->val = l1->val + l2->val + result->val;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (result->val >= 10) {
            result->val = result->val % 10;
            result->next = (struct ListNode *) malloc(sizeof(struct ListNode));
            result->next->val = 1;
            result->next->next = NULL;
        } else {
            if (l1 != NULL || l2 != NULL) {
                result->next = (struct ListNode *) malloc(sizeof(struct ListNode));
                result->next->val = 0;
                result->next->next = NULL;
            }
        }
        result = result->next;
    }
    return list;
}
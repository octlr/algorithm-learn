//
// Created by Administrator on 2018/8/10.
//
#include "leetcode.h"

/**
 * leetcode 算法第19题
 * 给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
 *比如：
 * 给定一个链表: 1->2->3->4->5, 和 n = 2.
 *当删除了倒数第二个节点后，链表变为 1->2->3->5.
 * 说明：给定的 n 保证是有效的。
 *
 * @param head
 * @param n
 * @return
 */
struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
    struct ListNode *temp_head = head;
    struct ListNode *index = head;
    struct ListNode *temp = NULL;
    int i = 1;
    while (index->next != NULL) {
        if (i < n + 1) {
            i++;
        } else {
            temp_head = temp_head->next;
        }
        index = index->next;
    }
    if (i == n) {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    } else {
        temp = temp_head->next;
        temp_head->next = temp_head->next->next;
        free(temp);
        return head;
    }
}

void testRemoveNthFromEnd() {
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
    struct ListNode *result = removeNthFromEnd(node1, 2);
    printf("输入链表: 1->2->3->4->5->6,删除节点为：2 \n");
    printf("结果:\n");
    while (result != NULL) {
        printf("  %d  ", result->val);
        result = result->next;
    }
    printf("\n");
    printf("本题解答完毕！！！！！");
    printf("\n\n");
}
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
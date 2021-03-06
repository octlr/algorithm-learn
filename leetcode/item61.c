#include "leetcode.h"

//
// Created by Administrator on 2018/8/13.
//给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。
//
//输入: 1->2->3->4->5->NULL, k = 2
//输出: 4->5->1->2->3->NULL
//解释:
//向右旋转 1 步: 5->1->2->3->4->NULL
//向右旋转 2 步: 4->5->1->2->3->NULL
//
//输入: 0->1->2->NULL, k = 4
//输出: 2->0->1->NULL
//
//解释:
//向右旋转 1 步: 2->0->1->NULL
//向右旋转 2 步: 1->2->0->NULL
//向右旋转 3 步: 0->1->2->NULL
//向右旋转 4 步: 2->0->1->NULL
//
struct ListNode *rotateRight(struct ListNode *head, int k) {
    int i = 0, j = 0, t = 1;
    struct ListNode *temp = head;
    struct ListNode *result, *end;
    while (head != NULL) {
        if (head->next == NULL) {
            end = head;
        }
        head = head->next;
        i++;
    }
    if (i < 2 || i == k || k == 0) {
        return temp;
    }

    head = temp;
    end->next = temp;
    j = i - (k % i);
    while (t != j) {
        head = head->next;
        t++;
    }
    result = head->next;
    head->next = NULL;
    return result;
}
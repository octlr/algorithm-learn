//
// Created by Administrator on 2018/8/10.
//

#ifndef ALGORITHM_LEARN_LEETCODE_H
#define ALGORITHM_LEARN_LEETCODE_H

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * leetcode 算法第42题
 * 给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。
 *  比如
 *  输入: [0,1,0,2,1,0,1,3,2,1,2,1]
 *  输出: 6
 * @param height
 * @param heightSize
 * @return
 */
int trap(int *height, int heightSize);

void testTrap();

/**
 * leetcode 算法第27题
 * 给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
   不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
   元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
   比如：
   给定 nums = [3,2,2,3], val = 3,
   函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
   你不需要考虑数组中超出新长度后面的元素。
 * @param nums
 * @param numsSize
 * @param val
 * @return
 */
int removeElement(int *nums, int numsSize, int val);
void testRemoveElement();

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
struct ListNode *removeNthFromEnd(struct ListNode *head, int n);
void testRemoveNthFromEnd();


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
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);
void testAddTwoNumbers();
#endif //ALGORITHM_LEARN_LEETCODE_H

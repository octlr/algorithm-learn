#include <stdio.h>
#include "leetcode.h"

int main() {
    int a = 0, b = 0;
    printf("请选择：\n");
    printf("1：leetcode题目\n");
    scanf("%d", &a);
    if (a == 1) {
        printf("请输入题目编号：\n");
        scanf("%d", &b);
        switch (b) {
            case 42:
                testTrap();
                break;
            case 27:
                testRemoveElement();
                break;
            case 19:
                testRemoveNthFromEnd();
                break;
            case 2:
                testAddTwoNumbers();
                break;
            default:
                break;
        }
    }
    return 0;
}
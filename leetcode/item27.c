//
// Created by Administrator on 2018/8/10.
//

#include "leetcode.h"

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
int removeElement(int *nums, int numsSize, int val) {
    int size = 0;
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (val == *(nums + i)) {
            size++;
            continue;
        } else {
            *(nums + index) = *(nums + i);
            index++;
        }
    }
    return numsSize - size;
}

void testRemoveElement() {
    printf("输入: [0,1,0,2,1,0,1,3,2,1,2,1] \n");
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int size = removeElement(a, 12, 1);
    printf("结果:\n");
    for (int i = 0; i < size; ++i) {
        printf(" %d  ", a[i]);
    }
    printf("本题解答完毕！！！！！");
    printf("\n\n");

}


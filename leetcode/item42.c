//
// Created by Administrator on 2018/8/10.
//

#include "leetcode.h"

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
int trap(int *height, int heightSize) {
    if (heightSize < 3) {
        return 0;
    }
    int result = 0;
    int index = 0;
    for (; index < heightSize - 1;) {
        int flag = 1;
        for (int j = 1; flag && j < heightSize - index; j++) {
            int b = *(height + j);
            if (*height <= b) {
                flag = 0;
            }
        }
        if (flag == 1) {
            *height = *height - 1;
        } else {
            int a = *height;
            for (int i = 1; i < heightSize - index; i++) {
                int b = *(height + i);
                if (a <= b) {
                    height = height + i;
                    index = index + i;
                    i = heightSize - index;
                } else {
                    result = (a - b) + result;
                }
            }
        }
    }
    return result;
}
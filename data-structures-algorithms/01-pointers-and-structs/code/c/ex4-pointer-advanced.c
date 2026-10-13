/* 练习4：指针进阶（函数传参 + 指针与数组）
 *
 * 编译：gcc ex4-pointer-advanced.c -o ex4 && ./ex4
 *
 * 任务：掌握指针的两大用途——函数传参、数组操作。
 *
 * 完成后对照文末【自测要点】逐条检查。
 */

#include <stdio.h>

/* ---------- 第 1 题：亲手写 swap ----------
 * 补全这个函数：通过指针交换两个 int
 * 然后在 main 里定义 a=3, b=7，调用后打印验证（应输出 7 3）
 */
void swap(int *x, int *y) {
    /* 你的代码 */


}


/* ---------- 第 2 题：一个函数"返回"两个结果 ----------
 * 补全 min_max：遍历数组，把最小值和最大值分别写入 *pmin 和 *pmax
 * main 里调用并打印
 */
void min_max(int arr[], int n, int *pmin, int *pmax) {
    /* 你的代码（提示：先把 *pmin 和 *pmax 都设为 arr[0]，再循环比较） */


}


/* ---------- 第 3 题：用指针遍历数组求和 ----------
 * 补全 array_sum：要求【不使用下标】，纯指针写法（*(p+i) 或移动 p 均可）
 */
int array_sum(int *p, int n) {
    /* 你的代码 */


    return 0;  /* 改掉这行 */
}


/* ---------- 第 4 题：手写 strlen ----------
 * 补全 my_strlen：数出字符串长度（不含结尾的 '\0'）
 * 提示：while 循环 + 判断 s[i] != '\0'，或者用指针往后走
 */
int my_strlen(const char *s) {
    /* 你的代码 */


    return 0;  /* 改掉这行 */
}


int main(void) {
    /* 第 1 题验证 */
    int a = 3, b = 7;
    /* 调用 swap 并打印 */


    /* 第 2 题验证 */
    int nums[6] = {4, 9, 1, 7, 3, 8};
    int lo, hi;
    /* 调用 min_max 并打印 lo 和 hi（应该是 1 和 9） */


    /* 第 3 题验证 */
    /* 调用 array_sum(nums, 6) 并打印（应该是 32） */


    /* 第 4 题验证 */
    /* 调用 my_strlen("pointer") 并打印（应该是 7） */


    return 0;
}

/* 【自测要点】
 * □ swap 里是 *x *y（解引用），调用时传 &a &b（取地址）——两个符号各司其职
 * □ min_max 通过指针"带回"两个结果，函数本身返回 void
 * □ array_sum 函数体内没出现 p[i] 这种下标写法
 * □ my_strlen("pointer") == 7，且没调用 <string.h> 里的 strlen
 * □ 四个结果：7 3 / 1 9 / 32 / 7
 * □ 编译零警告（-Wall）
 */

/* 练习6：综合收官 —— 迷你成绩管理系统
 *
 * 编译：gcc ex6-final.c -o ex6 && ./ex6
 *
 * 说明：这道题用到教程的【全部】知识点。
 * 建议先尝试不看旧文档独立完成，卡住了再回去查对应章节。
 *
 * 完成后对照文末【自测要点】逐条检查。
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ========== 第一部分：类型定义 ==========
 *
 * 1. 定义 struct Date：year, month, day
 * 2. 定义 struct Student：
 *      - name[20]
 *      - score
 *      - birthday（struct Date 嵌套）
 */


/* ========== 第二部分：函数实现 ==========
 *
 * 3. print_student(const struct Student *p)
 *    打印形如：张三 | 95 分 | 生日 2006-03-15
 *
 * 4. print_all(const struct Student class[], int n)
 *    遍历打印全班（内部调用 print_student）
 *
 * 5. average_score(const struct Student class[], int n)
 *    返回平均分（double）
 *
 * 6. find_top(struct Student class[], int n)
 *    返回指向最高分学生的指针
 *
 * 7. curve_scores(struct Student class[], int n, int bonus)
 *    给全班每人加 bonus 分，超过 100 的截断为 100
 *    思考：这个函数的参数为什么不能加 const？（注释里回答）
 */


int main(void) {
    /* 8. 声明含 4 名学生的数组并初始化（数据自编，含生日） */


    /* 9. 打印全班 → 打印平均分（保留 1 位小数） */


    /* 10. 找到最高分，通过返回的指针把 ta 的名字改为 "状元"，
     *     再打印全班验证原件被修改 */


    /* 11. 全班加 10 分，打印全班验证（有人应触发 100 上限） */


    /* 12. 【加分项】用 malloc 动态创建一个学生，填好数据并打印，
     *     用完 free 并置 NULL */


    return 0;
}

/* 【自测要点】
 * □ 结构体含 Date 嵌套，初始化时内层花括号正确
 * □ 只读函数全部带 const，要改数据的函数不带
 * □ 第 7 题注释里能说出"不能加 const"的原因（要修改原件）
 * □ find_top 返回 &class[best]，改名字后数组原件变化
 * □ 平均分是 double，打印用 %.1f
 * □ malloc 四步齐全：申请 → 判 NULL → 使用 → free + 置 NULL
 * □ 编译零警告（gcc -Wall）
 * □ 全程没回看过旧文档 → 优秀；每卡一次回去查 → 也正常，标出卡的知识点
 */

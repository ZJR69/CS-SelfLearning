/* 练习1：结构体基础
 *
 * 任务：管理两名学生的信息，比较谁的成绩更高。
 *
 * 要求：
 *   1. 补全 struct Student 的定义（成员：name, age, score）
 *   2. 用【指定成员初始化】的方式声明 s1（你自己编数据）
 *   3. 用【逐个赋值】的方式填充 s2（姓名必须用 strcpy）
 *   4. 打印两人完整信息
 *   5. 比较 score，打印"成绩更高的是 XXX"
 *   6. 编译运行，把输出结果贴在文件末尾注释里
 *
 * 完成后告诉 AI，我会读取并评估。
 */

#include <stdio.h>
#include <string.h>

/* 1. 在这里定义 struct Student */
struct Student {
    char name[20];
    int age;
    int score;
};

int main(void) {
    /* 2. 用指定成员初始化方式声明 s1 */
    struct Student s1 = {.name="小明",.age=15,.score=89};

    /* 3. 声明 s2，并用逐个赋值方式填充（strcpy！） */
    struct Student s2;
    s2.age = 16;
    strcpy(s2.name, "小艾");
    s2.score = 96;

    /* 4. 打印两人完整信息 */
    printf("%s %d %d \n", s1.name, s1.age, s1.score);
    printf("%s %d %d \n", s2.name, s2.age, s2.score);

    /* 5. 比较 score，打印成绩更高的人 */
    printf("成绩更高的是 %s",(s1.score >= s2.score) ? s1.name:s2.name);

    return 0;
}

/* 6. 运行输出贴在下面：
 *
 *
 */

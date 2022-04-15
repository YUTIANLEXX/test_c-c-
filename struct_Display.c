#include <stdio.h>

struct Student
{
	char cName[20];
	float fScore[3];
}student = { "SuYuQun", 98.5f, 89.0, 93.5f };

void Display(struct Student stu)
{
	printf("---Information---\n");
	printf("Name:%s\n", stu.cName);
	printf("Chinese:%.2f\n", stu.fScore[0]);
	printf("Math:%.2f\n", stu.fScore[1]);
	printf("English:%.2f\n", stu.fScore[2]);
	//计算平均分数
	printf("Average score:%.2f\n", (stu.fScore[0] + stu.fScore[1] + stu.fScore[2]) / 3);
}
int main()
{
	Display(student);
	return 0;
}
#include <stdio.h>
#include<conio.h>
struct student
{
char Name[20];
int Rollno;
int Marks;
char City[20];
char Dream[20];
};
void main()
{
int i;
struct student s[10];
for(i=0;i<10;i++)
{
printf("\nEnter student detail number:%d\n",i+1);
printf("Enter the student name:");
scanf("%s",s[i].Name);
printf("Enter the student rollno:");
scanf("%d",&s[i].Rollno);
printf("Enter the student marks:");
scanf("%d",&s[i].Marks);
printf("Enter the student city:");
scanf("%s",s[i].City);
printf("Enter the student dream:");
scanf("%s",s[i].Dream);
}
printf("\n===== 10 Student Details =====\n");
for(i=0;i<10;i++)
{
printf("\nStudent:%d\n",i+1);
printf("Name:%s\n",s[i].Name);
printf("Rollno:%d\n",s[i].Rollno);
printf("Marks:%d\n",s[i].Marks);
printf("City:%s\n",s[i].City);
printf("Dream:%s\n",s[i].Dream);
}
getch();
}

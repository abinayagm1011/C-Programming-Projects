
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main(int argc,char*argv[1])
{
int M1,M2,M3,M4,M5,Total;
float Average;
char Name[20];
if(argc==7)
{
printf("Usage:./a.out name M1 M2 M3 M4 M5\n");
}
strcpy(Name,argv[1]);
M1=atoi(argv[2]);
M2=atoi(argv[3]);
M3=atoi(argv[4]);
M4=atoi(argv[5]);
M5=atoi(argv[6]);
printf("Enter the name:");
scanf("%s",Name);
printf("Enter the marks 1:");
scanf("%d",&M1);
printf("Enter the marks 2:");
scanf("%d",&M2);
printf("Enter the marks 3:");
scanf("%d",&M3);
printf("Enter the marks 4:");
scanf("%d",&M4);
printf("Enter the marks 5:");
scanf("%d",&M5);
Total=M1+M2+M3+M4+M5;
Average=Total/5.0;
printf("\n=====STUDENT REPORT=====\n");
printf("Student Name:%s\n",Name);
printf("Mark 1:%d\n",M1);
printf("Mark 2:%d\n",M2);
printf("Mark 3:%d\n",M3);
printf("Mark 4:%d\n",M4);
printf("Mark 5:%d\n",M5);
printf("Total:%d\n",Total);
printf("Average:%.2f\n",Average);
if(M1<35||M2<35||M3<35||M4<35||M5<35)
printf("\nFail\n");
else
printf("\nPass\n");
if(Average>=90)
printf("Grade:A+\n");
else if(Average>=80)
printf("Grade:A\n");
else if(Average>=70)
printf("Grade:B\n");
else if(Average>=60)
printf("Grade:C\n");
else
printf("Grade:D\n");
getch();
return 0;
}

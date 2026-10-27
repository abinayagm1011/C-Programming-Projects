#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,choice;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
do
{
printf("\n=====Calculator=====\n");
printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. Multiplication");
printf("\n4. Division");
printf("\n5. Exit");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Addition=%d",a+b);
break;
case 2:
printf("Subtraction=%d",a-b);
break;
case 3:
printf("Multiplication=%d",a*b);
break;
case 4:
if(b!=0)
printf("Division=%d",a/b);
else
printf("Cannot divide by zero");
break;
case 5:
printf("Exiting the program.....");
break;
default:
printf("Invalid choice");
}
}
while(choice!=5);
getch();
return 0;
}
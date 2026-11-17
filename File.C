#include <stdio.h>
#include<conio.h>
int main()
{
FILE*fp;
char ch;
//Write Mode
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("Error");
}
fprintf(fp,"Welcome to C program.C is easy to learn.C uses function.C is widely used.C was developed by Dennis Ritchie.");
fclose(fp);
fp=NULL;
//Read Mode
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("Error");
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=NULL;
//Append Mode
fp=fopen("data.txt","a");
if(fp==NULL)
{
printf("Error");
}
fprintf(fp,"C trainer excellently teaching.Very clear explanation.Friendly trainer.Interative sessions.He is Patient and Supportive.");
fclose(fp);
fp=NULL;
getch();
return 0;
}

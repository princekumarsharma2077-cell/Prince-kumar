#include<stdio.h>
int main()
{
 int marks;
 printf ("Enter your marks\n");
 scanf("%d",&marks);
if(marks<30)
{
printf("your grade is C\n");
}
else if (marks>=30 &&marks<70)
{
printf("your grade is B\n");
}
else if(marks>=70&&marks<90)

printf("your grade is A\n");

else if(marks>=90&&marks<=100)
{
printf("your grade is A+\n");
}
else("Invaled marks\n");
return 0;
}
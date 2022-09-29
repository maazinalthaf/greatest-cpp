#include<stdio.h>
#include<conio.h>

void main()
{
int x,y,z;
clrscr();
printf("Enter the values of x,y,z\n");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
printf("x is the largest\n");
else if(y>x&&y>z)
printf("y is the largest\n");
else if(z>x&&z>y)
printf("z is the largest\n");
else if(x==y&&y==z)
printf("all are equal\n");
else if(x==y&&y!=z&&x>z)
printf("x and y is greater than z\n");
else if(x!=y&&y==z&&y>x)
printf("y and z is greater than x\n");
else if(x==z&&x!=y&&x>y)
printf("x and z is greater than y\n");
getch();
return 0;
}

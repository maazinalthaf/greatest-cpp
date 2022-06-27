/*program to accept 3 integer and print the largest among them*/
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter the values of x,y,z\n");
           scanf("%d%d%d",&x,&y,&z);
           if(x>y)
           if(x>z)
           printf("x is the largest\n");
           else
           printf("z is the largest\n");
           else if (y>z)
           printf("y is the largest\n");
           else
           printf("z is the largest\n");
       }
           /*End of main()*/

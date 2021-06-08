#include<stdio.h
int main()
{int c=0, num1, num, res, i, n;
 do
 {
   printf("\n\n1. Divisor of a number\n2. Factorial of a number\n3. Exit\n");
   printf("\nEnter your choice:");
   scanf("%d", &c);
   switch(c)
   {
     case 1:
             printf("Enter an integer: ");
             scanf("%d", &num1);
             printf("The Divisors of %d are : ",num1);
             for (int i=1;i<=num1;i++)
                 if (num1%i==0)
                    printf("%d ",i);
             break;
     case 2:
             printf("Enter an integer: ");
             scanf("%d", &num);
             n=num;
             res=num;
             while(num>1)
             {
               res = res*(num-1);
               num = num-1;
             }
             printf("\nFactorial of %d is %d. \n\n",n, res);
             break;
    case 3:
            printf("\nExit");
            break;
   }
 }while(c!=3);
 return 0;
}


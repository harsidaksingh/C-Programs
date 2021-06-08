#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float a,r,sum,num,den;
    printf("Enter Number of Terms : ");
    scanf("%d",&n);
    printf("\nEnter the First Term : ");
    scanf("%f",&a);
    printf("\nEnter the Common Ratio : ");
    scanf("%f",&r);
    if(r>1)
    {
     num=pow(r,n)-1;
     den=r-1;
    }
    else if(r<1)
    {
        num=1-pow(r,n);
        den=1-r;
    }
    else
        printf("\nINVALID");
    sum=a*num/den;
    printf("The Sum of the Series is : %f",sum);
    return 0;
}

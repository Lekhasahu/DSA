#include<math.h>
#include<stdio.h>

int main()
{
    double a,b,c,d,r1,r2,r3,real,imag;
    printf("Enter coefficients a,b and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if (d==0)
    {
        printf("the roots are real and equal\n");
        /* code */r1 = (-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf("root1=%lf and root2 = %lf",r1,r2);
    }
    else if (d>0)
    {
        printf("roots are real and unequal\n");
        r1=(-b+sqrt(d))/(2*a);
         r2=(-b-sqrt(d))/(2*a);
          printf("root1=%lf and root2 = %lf",r1,r2);
    }
    else{
        printf("roots are imaginary: \n");
        // real=-b/(2*a);
        // imag=sqrt(-discriminant)/(2*a);
        // printf("root1=%lf+%lf and root2=%lf-%lf",real,imag,real,imag);
    }
    
    

}
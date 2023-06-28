// Online C compiler to run C program online
#include <stdio.h>
typedef struct Complex{
    float real;
    float img;
    
}complex;
void addtwonumbers(complex c1,complex c2,complex *result);
int main() {

complex c1,c2,result;
printf("For first Number,\n:");
printf("Enter real part:\n");
scanf("%f",&c1.real);
printf("Enter imaginary part:\n");
scanf("%f",&c1.img);

printf("For second Number:\n");
printf("Enter real part:\n");
scanf("%f",&c2.real);
printf("Enter Imaginary part:\n");
scanf("%f",&c2.img);
addtwonumbers(c1,c2,&result);
printf("result.real = %.1f \n",result.real);
printf("result.img = %.1f \n",result.img);
    return 0;
}
void addtwonumbers(complex c1,complex c2,complex *result)
{
    result->real = c1.real + c2.real;
    result->img = c2.img + c2.img;
    
}

Output:

For first Number,
:Enter real part:
4.5
Enter imaginary part:
2.5
For second Number:
Enter real part:
4.6
Enter Imaginary part:
7.5
result.real = 9.1 
result.img = 15.0 

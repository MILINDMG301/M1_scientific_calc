#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include "./inc/calc_header.h"

int choice, i;
float x=10.0, y=20.0, result;
float a[]={1,2,3,4,5,6,7,8,9,10};
float b[]={11,12,13,14,15,16,17,18,19,20};
int sa=sizeof(a)/sizeof(type(a[0]));
int sb=sizeof(b)/sizeof(type(b[0]));
float theta=30;

void comp(void){

printf("\nSelect your operation (0 to exit):\n");
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. remaind\n6. mod\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch(choice) {
case 1:
result = addition(x,y);
printf("\nResult: %f\n", result);
break;
case 2:
result = substract(x,y);
printf("\nResult: %f\n", result);
break;
case 3:
result =prod(x,y);
printf("\nResult: %f\n", result);
break;
case 4:
result = division(x,y);
printf("\nResult: %f\n", result);
break;
case 5:
result = remaind(x,y);
printf("\nResult: %f\n", result);
break;
case 6:
result = mod(x);
printf("\nResult: %f\n", result);
break;
}

}

void stat(void){

printf("\nSelect your operation (0 to exit):\n");
printf("1.  sum(x)\n2.  sum(y)\n3.  sum(x^2)\n4.  sum(y^2)\n5.  sum(xy)\n6.  sum(yx^2)\n7.  sum(x^3)\n8.  mean\n9.  median\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch (choice)
{
case 1:

result = summation(a,sa);
printf("\nResult: %f\n", result);
break;
case 2:

result = summation(b,sb);
printf("\nResult: %f\n", result);
break;
case 3:
result =sqsum(a,sa);
printf("\nResult: %f\n", result);
break;
case 4:
result = sqsum(b,sb);
printf("\nResult: %f\n", result);
break;
case 5:
result = sumxy(a,b,sa);
printf("\nResult: %f\n", result);
break;
case 6:
result = xsqy(a,b,sa);
printf("\nResult: %f\n", result);
break;
case 7:
result = cubx(a,sa);
printf("\nResult: %f\n", result);
break;
case 8:
result = meanseries(a,sa);
printf("\nResult: %f\n", result);
break;
case 9:
result = medianseries(a,sa);
printf("\nResult: %f\n", result);
break;
}

}

void power(void){
printf("\nSelect your operation (0 to exit):\n");
printf("1. Square root\n2. X ^ Y\n3. X ^ 2\n4. X ^ 3\n");
printf("5. 1 / X\n6. X ^ (1 / Y)\n7. X ^ (1 / 3)\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch(choice) {
case 1:
result = sqrt(x);
printf("\nResult: %f\n", result);
break;
case 2:
result = pow(x, y);
printf("\nResult: %f\n", result);
break;
case 3:
result = square(x);
printf("\nResult: %f\n", result);
break;
case 4:
result = pow(x, 3);
printf("\nResult: %f\n", result);
break;
case 5:
result = pow(x, -1);
printf("\nResult: %f\n", result);
break;
case 6:
result = pow(x, (1/y));
printf("\nResult: %f\n", result);
break;
case 7:
y = 3;
result = pow(x, (1/y));
printf("\nResult: %f\n", result);
break;
}
}


void gp(void){
int choice;
printf("\nSelect your operation (0 to exit):\n");
printf("1. 10 ^ X\n2. X!\n3. %%\n4. log10(x)\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch(choice) {
case 1:
result = pow(10, x);
printf("\nResult: %f\n", result);
break;
case 2:
result = facto(x);
printf("\nResult: %.f\n", result);
break;
case 3:
result = (x * 100)/y;
printf("\nResult: %.2f\n", result);
break;
case 4:
result = log10(x);
printf("\nResult: %.2f\n", result);
break;
}
}

void trig(void){
int choice;
printf("\nSelect your operation (0 to exit):\n");
printf("1. Sin(X)\n2. Cos(X)\n3. Tan(X)\n4. Cosec(X)\n");
printf("5. Cot(X)\n6. Sec(X)\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch(choice) {
case 1:
result = sinx(theta);
printf("\nResult: %.2f\n", result);
break;
case 2:
result = cosx(theta);
printf("\nResult: %.2f\n", result);
break;
case 3:
result = tanx(theta);
printf("\nResult: %.2f\n", result);
break;
case 4:
result = cosecx(theta);
printf("\nResult: %.2f\n", result);
break;
case 5:
result = secx(theta);
printf("\nResult: %.2f\n", result);
break;
case 6:
result = cotx(theta);
printf("\nResult: %.2f\n", result);
break;
}
}



void operation(void){

do {
printf("\nSelect your operation (0 to exit):\n");
printf("1. Comp mode\n");
printf("2. stat mode\n");
printf("3. power mode\n");
printf("4. trigonometric mode\n");
printf("5. general mode for 10 ^ X , X! , %% , log10(x) , Modulus\n");
printf("Choice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch (choice)
{
case 1:
    comp();
    break;

case 2:
    stat();
    break;

case 3:
    power();
    break;

case 4:
    trig();
    break;

case 5:
    gp();
    break;

default:
printf("Enter correct choice");
    break;
}
} while(choice);
}



int main(void) {
operation();

getch();
return 0;
}
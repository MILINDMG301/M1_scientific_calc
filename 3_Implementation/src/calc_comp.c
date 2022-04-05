#include "../inc/calc_header.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float addition(float num1,float num2){
    return(num1+num2);
}

float substract(float num1,float num2){
    return(num1-num2);
}

float prod(float num1,float num2){
    return(num1*num2);
}

float division(float num1,float num2){
    return (num1/num2);
}

int remaind(int num1 ,int num2){
    return(num1 % num2);
}

float mod(float num1){
    if(num1>0)
    return(num1);

    else
    return(-1*num1);
}

int facto(int n){
    if(n<0){
        return(NULL);
    }
    int i,res=1;
    for(i=1;i<=n;i++){
        res*=i;

    }
    return res;
}

float sinx(float x){
    return(sin(x * 3.14159 / 180));
}

float cosx(float x){
    return(cos(x * 3.14159 / 180));
}

float tanx(float x){
    return(tan(x * 3.14159 / 180));
}

float cosecx(float x){
    return(1/sin(x * 3.14159 / 180));
}

float secx(float x){
    return(1/cos(x * 3.14159 / 180));
}

float cotx(float x){
    return(1/tan(x * 3.14159 / 180));
}

float square(float x){
    return(x*x);
}
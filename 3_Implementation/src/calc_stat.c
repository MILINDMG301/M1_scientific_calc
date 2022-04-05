#include "../inc/calc_header.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float sr2[50];

float summation(float series1[],int size){
int i,n=size;
float res=0;
for(int i=0;i<n;i++){
    res+=(series1[i]);
    //printf("i %d=%d ,%d\n",i,res,series1[i]);
}
return(res);
}

float * sq(float ser[],int n){
    int i;
    for ( i = 0; i < n; i++){
        sr2[i]=ser[i]*ser[i];
    }
    return(sr2);
}

float sqsum(float ser1[],int n){
float* sr2;
sr2= sq(ser1,n);
return (summation(sr2,n));
}

float sumxy(float serx[],float sery[],int n){
    int i;
    for ( i = 0; i < n; i++){
        sr2[i]=serx[i]*sery[i];
    }
    return(summation(sr2,n));
}

float xsqy(float serx[],float sery[],int n){
    float *sr2;
    sr2= sq(serx,n);
    float ressr[50];
    int i;
    // n= (sizeof(serx)/(sizeof(type(serx[0]))));
    for ( i = 0; i < n; i++){
        ressr[i]=sr2[i]*sery[i];
    }
    return(summation(ressr,n));
}

float cubx(float serx[],int n){
    float *sr2;
    sr2= sq(serx,n);
    return(sumxy(sr2,serx,n));
}

float meanseries(float ser[],int n){
    float sum1=summation(ser,n);
    float res=sum1/n;
    return(res);
}

float medianseries(float ser[],int n){
    float med;
    n=n-1;
    if(n%2==1){
        med=((ser[(n-1)/2]+ser[(n+1)/2])/2);
    }
    else{
        med=ser[n/2];
    }
    return(med);
}
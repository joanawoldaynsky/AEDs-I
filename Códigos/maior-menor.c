#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    float a= 0.4*3.0 - 1.0; 
    float b=a-0.2; 
    float c=0.2; 
    float d = c - 0.2; 
 
    if (a<=0.2) 
    printf("menor ou igual"); 
    else 
    printf("Ups! maior ou diferente"); 
    printf("\n"); 
 
    if (b<=0) 
    printf("menor ou igual"); 
    else 
    printf("Ups! maior ou diferente"); 
    printf("\n"); 
 
    if (d<=0) 
    printf("menor ou igual"); 
    else 
    printf("Ups! maior ou diferente"); 
    return 0; 
} 

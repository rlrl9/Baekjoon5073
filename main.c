#include<stdio.h>
int min(int,int);
int max(int,int);
int main(){
    int max1;
    int max2;
    int max3;
    int num1;
    int num2;
    int num3;
    //int (*p)[3];
    while(1){
        scanf("%d %d %d", &num1,&num2,&num3);
        max1=min(min(num1,num2),num3);
        max2=min(max(num1,num2),num3);
        max3=max(max(num1,num2),num3);
        if(max1==0&&max2==0&&max3==0){
            break;
        }else{
            if(max3>=max1+max2){
                printf("Invalid\n");
            }else{
                if(max1==max2||max2==max3){
                    if(max1==max3){
                        printf("Equilateral\n");
                    }
                    else{
                        printf("Isosceles\n");
                    }
                }else{
                    printf("Scalene\n");
                }
            }
        }
    }
}
int min(int a, int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}
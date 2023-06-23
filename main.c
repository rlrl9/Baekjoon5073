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
    while(1){
        scanf("%d %d %d", &num1,&num2,&num3);
        max1=min(min(num1,num2),num3);//최소길이
        max2=min(max(num1,num2),num3);//중간길이
        max3=max(max(num1,num2),num3);//최대길이
        if(max1==0&&max2==0&&max3==0){//종료조건
            break;
        }else{
            if(max3>=max1+max2){
                printf("Invalid\n");//최대길이가 둘 합한거보다 클때
            }else{
                if(max1==max2||max2==max3){
                    if(max1==max3){//세 변이 크기가 같을 때
                        printf("Equilateral\n");
                    }
                    else{
                        printf("Isosceles\n");//두 변이 크기가 같을 때
                    }
                }else{
                    printf("Scalene\n");//세 변 다 크기가 다를 때
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

#include<stdio.h>

int squareroot(int n);

int main(){
    int n;
    printf("Enter your value:");
    scanf("%d",&n);
    squareroot(n);
    return 0;
}

int squareroot(int n){
    int i;
    int half=n/2;
    for(i=1; i<=half; i++){
        if(i*i == n){
            printf("Square root is: %d\n",i);
            break;
        }
        else{
            printf("Its not a perfect square!");
            break;
        }
    }
    if(i>n){
        printf("Its not a perfect square!");
    }

}

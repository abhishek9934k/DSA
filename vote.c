#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible for vote\n");
    }
    else{
        printf("Bete 18+ ho jao fir vote dena\n");
    }
}
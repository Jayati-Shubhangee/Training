//Method to check if the inputted number is the power of 2 
#include<stdio.h>
#include<stdbool.h>//for boolean expresssion
bool checkpowerof2(int num){
    return(((num>0) && ((num & -num)==num)));//logic of checking the number with its complement if return the same number then its power of 2 
    // eg 8 = 1000 2's complement 1000 returns same number 1000
}

int main(){
    int num;
    printf("\n enter the number \n");
    scanf("%d",&num);
  bool res =  checkpowerof2(num);
  if(res){
    printf("True\n");
  }
  else{
    printf("False\n");
  }
  return 0;
}
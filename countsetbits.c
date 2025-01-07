//C code to count total no of set bits
# include<stdio.h>
int countsetbits(int num){
    int count=0,i=0;
    int checkmask=(1<<i);//here i is used to visit bit by bit
    while(num > 0 ){
        if(num & checkmask==1){
            count++;
        }
    
    num=num>>1;
}
return count; 
}
int main(){
    int num;
    printf("\n enter the number \n");
    scanf("%d",&num);
    int setbits=countsetbits(num);
    printf("\n total no of setbits is: %d\n",setbits);
    return 0;

}
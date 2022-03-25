#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attempt=1;
    srand(time(0));
    number = rand()%100+1;            //generate number betweem 1 to 100.
   // printf("The number is %d",number);
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess<number){
            printf("higher number please!\n");
        }
         else if(guess>number){
        printf("lower number please!\n");
        }
         else {
        printf("You guessed the number in %d attempts.\n",attempt);
        }
        attempt++;
         
    
    }while(guess!=number);
    return 0;
}
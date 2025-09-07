#include <stdio.h>
int main(){
    int num,i;
    printf("Enter the table number :");
    scanf("%d",&num);

    for (i = 1 ; i <=10;i= i + 1){
        int product;
        product = num * i;
        printf("%d X %d = %d\n",num,i,product);

    }
    return 0;
}

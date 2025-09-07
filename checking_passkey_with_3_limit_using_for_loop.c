#include <stdio.h>
int main(){
    int passkey = 9989;
    int input_passkey,i;
    int max_attempt = 3;
    int success = 0;

    for (i =1;i<=max_attempt;i++){
        printf("Enter passkey :");
        scanf("%d",&input_passkey);
    if (input_passkey == passkey){
        printf("Passkey matched..");
        success = 1;
        break;
    }
    else {
        printf("Passkey doesn't match! try again..\n");
    }

}
if (!success){
    printf("Access denied ! too many wrong attempt");
}
    return 0;
}

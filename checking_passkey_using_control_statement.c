#include <stdio.h>
int main(){
    int input_passkey;
    int passkey = 9989;
    printf("Enter passkey :");
    scanf("%d",&input_passkey);

    if (input_passkey == passkey){
        printf("passkey matched ..");
    }
    else{
        printf("Passkey doesn't matched ..");
    }
    return 0;
}

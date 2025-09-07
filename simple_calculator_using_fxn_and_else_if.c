#include <stdio.h>

void input_func(int *i1, int *i2){
    printf("Enter First number :");
    scanf("%d",i1);

    printf("Enter 2nd number :");
    scanf("%d",i2);
}

void add_func(int i1, int i2){
    int result = i1 +i2;
    printf("The addition of %d and %d is equal to %d",i1,i2,result);

}

void sub_func(int i1, int i2){
    int result = i1 - i2;
    printf("The substraction of %d and %d is equal to %d",i1,i2,result);    
}

void mul_func(int i1, int i2){
    int result = i1 * i2;
    printf("The product of %d and %d is equal to %d", i1,i2,result);
}

void div_func(int i1, int i2){
    int result = i1/i2;
    printf("The Division of %d and %d is equal to %d", i1, i2, result);
}

void sqr_func(int i1){
    int result = i1 * i1;
    printf("The square of %d is equal to %d", i1,result);
}
int main(){
    int choice;

    printf("===========SIMPLE CALCULATOR==============\n");
    printf("\n");
    printf("[1] ADDITION\n");
    printf("[2] SUBSTRACTION\n");
    printf("[3] MULTIPLICATION\n");
    printf("[4] DIVISION\n");
    printf("[5] SQUARE\n");
    printf("[6] EXIT\n");
    
    printf("\n");
    printf("Enter Your Choices :");
    scanf("%d",&choice);

    // CALLING MAIN MENU USING NESTED IF ELSE..
    int i1,i2;
    if (choice == 1){
        input_func(&i1,&i2);
        add_func(i1,i2);
    }
    else if (choice == 2){
        input_func(&i1,&i2);
        sub_func(i1,i2);
    }
    else if (choice == 3){
        input_func(&i1,&i2);
        mul_func(i1,i2);
    }
    else if (choice == 4){
        input_func(&i1,&i2);
        div_func(i1,i2);
    }
    else if (choice == 5){
        printf("Thanks for using our program.. bye");
        //exit();  IMPLEMENTED LATER..
    }
    else {
        printf("You have selected invalid choices..");
        //exit();
    }

return 0;
}

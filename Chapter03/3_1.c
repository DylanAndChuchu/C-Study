#include <stdio.h>

int main(void){
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Plese enter your weight in pounds: ");

    scanf("%f", &weight); //&是取地址符, 这里会把你输入的值赋予给weight这个浮点变量
    //假设白金的价格是每盎司1700$
    value=1700.0*weight*14.5833;
    printf("Your weight in platium is worth $%.2f.\n", value);
    printf("You are easily worth that! If platium prices drop,\n");
    printf("eat more to maintain your value.\n");



    return 0;

}
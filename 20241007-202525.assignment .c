#include<stdio.h>

int main()
{
    char a;
    char name [] = {};
    int age ;
    float salary ;
    double budget ;
    printf("please enter a character:");
    scanf("%c",&a);
    printf("this is a character%c\n",a);
    printf("please enter your age :");
    scanf("%d",&age);
    printf("this is age %d\n",age);
    printf("please enter name :");
    scanf("%s",&name);
    printf("this is name %s\n",name);
    printf("please enter your salary:");
    scanf("%f",salary);
    printf("this is salary %f\n", salary);
    printf("please enter your budget:");
    scanf("%lf",budget);
    printf("this is budget %lf\n", budget);
    
    return 0;
}   
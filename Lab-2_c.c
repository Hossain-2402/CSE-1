#include<stdio.h>
#include<math.h>
int main(){

    float new_number = 10.123456;
    printf(" %.3f", new_number);

    double var_1 , var_2;
    scanf(" %lf %lf",&var_1, &var_2);
    printf(" The summation is :  %.25lf",(var_1 + var_2));


    char ch = 'p';
    scanf(" %c",&ch);
    printf("%c", ch);



    int age;
    char name[10];
    float temperature;
    double more_temperature;

    printf("Enter Your name :");
    scanf("%s",&name);

    printf("Enter your Age : " );
    scanf("%d",&age);

    printf("Enter The Temperature: " );
    scanf("%f",&temperature);

    printf("Enter precise temperature: " );
    scanf("%lf",&more_temperature);

    printf("\nName:%s Age:%d temp:%.2f Precise Temp:%.5lf\n", name,age,temperature,more_temperature);






    int a;
    char ch;
    scanf("%d",&a);
    scanf(" %c",&ch);
    printf("%d %c",a,ch);










    return 0;

}


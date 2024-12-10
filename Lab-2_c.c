#include<stdio.h>
#include<math.h>
int main(){

    float new_number = 10.123456;
    printf(" %.3f", new_number);
-----------------------------------------------------------------------------------------------------------
    double var_1 , var_2;
    scanf(" %lf %lf",&var_1, &var_2);
    printf(" The summation is :  %.25lf",(var_1 + var_2));

-----------------------------------------------------------------------------------------------------------
    char ch = 'p';
    scanf(" %c",&ch);
    printf("%c", ch);


------------------------------------------------------------------------------------------------------------
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



--------------------------------------------------------------------------------------------------------------


    int a;
    char ch;
    scanf("%d",&a);
    scanf(" %c",&ch);
    printf("%d %c",a,ch);


---------------------------------------------------------------------------------------------------------------

    int a;
    int b;
    scanf("%d %d",&a,&b);
    float res_1 = (float) a/b;

    printf("The result is : %f\n", res_1);

-------------------------------------------------------------------------------------------------------------

    int a = 9;
    int b = 10;

    printf("%d ", (a%b));

---------------------------------------------------------------------------------------------------------------


    int width,height;

    printf("Enter the Height: ");
    scanf("%d", &height);

    printf("Enter the Width: ");
    scanf("%d",  &width);

    int area = height*width;
    int peremeter = 2*(height+width);

    printf("\n Area: %d Peremeter: %d\n", area,peremeter);
-----------------------------------------------------------------------------------------------------------------

    int a=10,b=15;

    printf("Before swap: %d %d \n", a,b);
    int temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d \n", a,b);
--------------------------------------------------------------------------------------------------------------------

    int a=10,b=15;

    printf("%d %d \n", a,b);

    a = a+b;
    b = a-b;
    a = a-b;


    printf("%d %d \n", a,b);



    return 0;

}


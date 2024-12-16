
                                    Lab-1
                                    -----    

#include<stdio.h>

int main(){
    int myVariable = 15;
    printf("The variable value is %d", myVariable);



    printf("\n\n\n\n");



    int a = 10;
    int b = 5;
    printf("The first variable is %d\n", a);
    printf("The Second variable is %d\n", b);
    int c = a + b;
    printf("The addition is : %\d\n", c);
    int d = a - b;
    printf("The subtraction is : %\d\n", d);


    printf("First : %d ,\t Second : %d,\t Third: %d\n" ,a,b,c);
    printf("%d + %d = %d\n\n",a,b,c);
    printf("First : %d ,\t Second : %d,\t Forth: %d\n" ,a,b,d);
    printf("%d - %d = %d\n",a,b,d);


    int x,y;
    x = 10;
    y = 5;



    printf("\n\n\n\n");




    int input;
    printf("Your input : ");
    scanf("%d",&input);

    printf("Your input is : %d", input);

    printf("\n");

    int input_1, input_2;
    printf("Your first input : ");
    scanf("%d",&input_1);
    printf("\n");
    printf("Your Second input : ");
    scanf("%d",&input_2);

    printf("The addition is : %d ", input_1 + input_2);


    return 12;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
                                    Lab-2
                                    -----    
    
#include<stdio.h>
#include<math.h>
int main(){

    float new_number = 10.123456;
    printf(" %.3f", new_number);
    --------------------------------------------------------------------------------------------
    double var_1 , var_2;
    scanf(" %lf %lf",&var_1, &var_2);
    printf(" The summation is :  %.25lf",(var_1 + var_2));

    ---------------------------------------------------------------------------------------------
    char ch = 'p';
    scanf(" %c",&ch);
    printf("%c", ch);


    ----------------------------------------------------------------------------------------------
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



    -------------------------------------------------------------------------------------------------


    int a;
    char ch;
    scanf("%d",&a);
    scanf(" %c",&ch);
    printf("%d %c",a,ch);


    --------------------------------------------------------------------------------------------------

    int a;
    int b;
    scanf("%d %d",&a,&b);
    float res_1 = (float) a/b;

    printf("The result is : %f\n", res_1);

    --------------------------------------------------------------------------------------------------

    int a = 9;
    int b = 10;

    printf("%d ", (a%b));

    --------------------------------------------------------------------------------------------------


    int width,height;

    printf("Enter the Height: ");
    scanf("%d", &height);

    printf("Enter the Width: ");
    scanf("%d",  &width);

    int area = height*width;
    int peremeter = 2*(height+width);

    printf("\n Area: %d Peremeter: %d\n", area,peremeter);
    --------------------------------------------------------------------------------------------------

    int a=10,b=15;

    printf("Before swap: %d %d \n", a,b);
    int temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d \n", a,b);
    ----------------------------------------------------------------------------------------------------

    int a=10,b=15;

    printf("%d %d \n", a,b);

    a = a+b;
    b = a-b;
    a = a-b;


    printf("%d %d \n", a,b);



    return 0;

}

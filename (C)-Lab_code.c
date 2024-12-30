
//                                          Lab-1
//                                          -----    

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
                                    
//                                          Lab-2
//                                          -----    

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







~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-3
//                                          -----    






#include<stdio.h>
#include<math.h>


int main()
{
    int age;
    scanf("%d", &age);

    if(age<20)
        printf("You are not Eligible."); // only one statement is valid if we don't use the "{}"
    else
        printf("You may proceed");
---------------------------------------------------------------------------------------------------------

    int age;
    scanf("%d", &age);

    if(age<20){
        printf("You are not Eligible.");
        printf("This line is printed too");// multiple statements are valid if we use the "{}"
    }
    else{
        printf("You may proceed");
        printf("This line is printed too");
    }
---------------------------------------------------------------------------------------------------------


    int number ;
    printf("Enter a random number : ");
    scanf("%d", &number);
    if(number%2 == 0){
        printf("The number is an even number");
    }
    else{
        printf("The number is an odd number");
    }
---------------------------------------------------------------------------------------------------------
    int a, distance;
    float result;
    printf("Enter 1(km->mile) or 2(mile->km): ");
    scanf("%d",&a);
    if(a != 1 && a!=2)
    {
        printf("You have to enter either 1 or 2");
    }
    else
    {
        printf("Enter the distance : ");
        scanf("%d",&distance);
        if(a == 1)
        {
            result =  distance/1.61;
            printf("The result is : %.2f mile", result);
        }
        else
        {
            result =  distance * 1.61;
            printf("The result is : %.2f Km", result);
        }
    }
---------------------------------------------------------------------------------------------------------
    int age;
    scanf("%d",&age);
    if(age==20  || age==30){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
---------------------------------------------------------------------------------------------------------

    char c;
    printf("Enter a small alphabate : ");
    scanf(" %c", &c);
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("This is a vowel");
    }
    else{
        printf("This is a consonent");
    }
---------------------------------------------------------------------------------------------------------
    int a=10,b=30,c=20;
    int max;
    if(a>b && a>c){
        max = a;
    }
    else if(b>a && b>c){
        max = b;
    }
    else{
        max = c;
    }
    printf("The max is : %d", max);
---------------------------------------------------------------------------------------------------------

    int ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);
    if(ch>=65 && ch<=90){
        printf("This is a upper case character\n");
        printf("The Lower case is :  %c", (ch+32));
    }
    else if(ch>=97 && ch<=122){
        printf("This is a lower case character\n");
        printf("The upper case is : %c", (ch-32));
    }
    else{
        printf("Invalid character");
    }

}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-4
//                                          -----    







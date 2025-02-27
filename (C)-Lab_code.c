
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


#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int i;
    for(i=0;i<n;i++){
        printf("Hello world\n",i);
    }
----------------------------------------------------------------------------------------------

    int n;
    scanf("%d",&n);

    int i;
    for(i=0;i<n;i++){
        printf("#%d Hello world\n",i);
    }
----------------------------------------------------------------------------------------------
    int n;
    scanf("%d",&n);

    int i;
    int sum = 0;
    for(i=1;i<=n;i++){
            sum+=i;
    }
    printf("%d",sum);
----------------------------------------------------------------------------------------------
    int n;
    scanf("%d",&n);

    int i;
    int sum = 0;
    for(i=1;i<=n;i++){
            sum+=i;
            printf("sum = %d\n",sum);
    }
    printf("The summation is : %d",sum);
----------------------------------------------------------------------------------------------

    int upto;
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Enter the last multiple of the table: ");
    scanf("%d",&upto);


    int i;
    int mult= 1;
    for(i=1;i<=upto;i++){
            mult*=i;
            printf("%d*%d = %d\n",number,i,number*i);
    }
----------------------------------------------------------------------------------------------



    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-5
//                                          -----    

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>


int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
---------------------------------------------------------------------------------------------------
    int i;
    for(i=0;i<10;i++){
       printf("%d ",i);
    }
    printf("%d", i); // prints the last value of i that we got from the for loop [i.e. i=10]
---------------------------------------------------------------------------------------------------
    for(int i=1,j=10;i<=10,j>=1;i++,j--){
        printf("%d -> %d \n",i,j);
    }
---------------------------------------------------------------------------------------------------
    for(int i=1;i<=10;){
        printf("%d ", ++i);
    }
    printf("\n");
    for(int i=1;i<=10;){
        printf("%d ", i++);
    }
---------------------------------------------------------------------------------------------------
    int i,j,search;
    printf("Enter value 100 \n");

    for( ; ; ){
        scanf("%d",&search);
        if(search == 100){
            printf("Done!");
            break;
        }
        else{
            printf("Wrong input\n");
        }
    }
---------------------------------------------------------------------------------------------------
    srand(time(NULL)); //changes the seed // to write this line we need to import the '#include<time.h>'
    int random_number = rand();

    printf("Random number : %d\n",random_number);


    srand(time(NULL)); //changes the seed // requires the 'time header file'
    int random_number_between_1_100 = rand()%100 + 1;

    printf("Random number : %d\n",random_number);
---------------------------------------------------------------------------------------------------
    srand(time(NULL));
    int random = rand()%10+1;
    printf("%d\n", random);

    printf("Enter a value between 1-10: ");
    for( ; ; ){
        int n;
        scanf("%d",&n);
        if(n == random) break;
        else if(n>random) printf("Enter a lower number ");
        else printf("Enter a higher number ");
    }
    printf("You guessed it right");
---------------------------------------------------------------------------------------------------
    int number;
    scanf("%d",&number);
    int sum;
    for(int i=number;i!=0;i/=10){
        sum += i%10;
    }
    printf("%d",sum);
---------------------------------------------------------------------------------------------------
    int n=30;
    for(int i=1;i<=n;i++){
        if(i%3 == 0){
            continue;
        }
        printf("%d",i);
    }
---------------------------------------------------------------------------------------------------
    int count = 0;
    for( ; ; ){
        char ch;
        getchar();
        scanf(" %c",&ch);
        if(ch != 'a' || ch != 'e' || ch != 'i' || ch != 'o' || ch != 'u'){
           continue;
        }
        count ++;
        if(count == 10){
            printf("You have entered 10 characters");
            break;
        }
    }
---------------------------------------------------------------------------------------------------
    int n = 5;
    int is_prime = 1;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1) printf(" The number is a prime number ");
    else printf(" The number is not a prime number ");

return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-6
//                                          -----    
#include<stdio.h>

void heroMove(int speed,char c, double d){
    printf("The hero is moving at %d m/s\n",speed);
    return ;

}
void enemyMove(){
    printf("The enemy is moving\n");
    return ;

}
int add (int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mult(int a,int b){
    return a*b;
}
float div(int a,int b){
    if(a == 0 || b == 0){
        return 0;
    }
    return (float) a/b;
}
int main(){

    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++){
            printf("%d -> %d | ",i,j);
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    scanf("%d %d",&row,&colum);

    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            printf("%d->%d|",i,j);
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    int counter = 1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            printf("%d ",counter);
            counter ++;
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    int counter = 1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            printf("%d ",counter);
        }
        printf("\n");
        counter ++;
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    char counter = 'A';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            printf("%c ",counter);
            counter ++;
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            printf("*");
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            (i==1 || i==row || j==1 || j==colum) ? printf("*") : printf(" ");
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row,colum;
    printf("Enter row & column number : ");
    scanf("%d %d",&row,&colum);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------

    int row;
    printf("Enter row : ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=row-i+1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
--------------------------------------------------------------------------------------------------------------------------------
 FUNCTION:
    heroMove();
    printf("Welcome to the main function\n");
    heroMove();
    heroMove();
--------------------------------------------------------------------------------------------------------------------------------

    heroMove();
    printf("Welcome to the main function\n");
    heroMove();
    enemyMove();
    heroMove();
--------------------------------------------------------------------------------------------------------------------------------

    heroMove(10);
    printf("Welcome to the main function\n");
    heroMove(10);
    enemyMove();
    heroMove(20);
--------------------------------------------------------------------------------------------------------------------------------

    heroMove(10,'Z',5.5);
    printf("Welcome to the main function\n");
    heroMove(10);
    enemyMove();
    heroMove(20);
--------------------------------------------------------------------------------------------------------------------------------

    int result = add(10,5);
    printf("The result is : %d\n",result);
--------------------------------------------------------------------------------------------------------------------------------

    int result = add(10,5);
    printf("The result is : %d\n The subtraction is : %d\n The multiplication is : %d\n The division is : %.2f\n",add(10,5),sub(10,5),mult(10,5),div(10,5));
--------------------------------------------------------------------------------------------------------------------------------

}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-7
#include<stdio.h>

int is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void prime_numbers(int n){
    for(int i=1;i<n;i++){
        int is_prime = 1;
        if(i==1){
            is_prime = 0;
        }
        if(i == 2){
            printf("%d ",i);
            continue;
        }
        for(int j=2;j<i;j++){
            if(i%j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1){
            printf("%d ",i);
        }

    }
}


int main(){

    int n;
    scanf("%d",&n);
    int result = is_prime(n);
    (result == 1)? printf("Prime") : printf("Not Prime");
    prime_numbers(n);
--------------------------------------------------------------------------------------------------------------------------------

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
--------------------------------------------------------------------------------------------------------------------------------

    int arr[5] = {4,1,2,3,5};

    int max = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i] > max) max = arr[i];
    }
    printf("%d", max);
--------------------------------------------------------------------------------------------------------------------------------

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min) min = arr[i];
    }


    int max;
    for(int j=1;j<=k;j++){
        int current_max = arr[0];
        int index = 0;
        for(int i=0;i<5;i++){
            if(arr[i]>current_max){
              current_max = arr[i];
              index = i;
            }
        }
        arr[index] = min;
        max = current_max;
    }

    printf("%d",max);
--------------------------------------------------------------------------------------------------------------------------------

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<n;j++){
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[j]) count ++;
        }
        printf("%d -> %d\n",arr[j], count);

    }
--------------------------------------------------------------------------------------------------------------------------------

}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-8

#include<stdio.h>
#include<string.h>

int main(){

    char ch[8];
    gets(ch);
    printf("%c",ch[8]);
--------------------------------------------------------------------------------------------------------------------------------

    char ch[8] = {'A','U','S','T','\0'};

    printf("%s",ch);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = {'A','U','S','T','\0'};

    int a = strlen(ch1); // a = 4

    char ch2[] = {'A','U','S','T'};
    int b = strlen(ch2); // b = 8 . here the ch2 allocates 8 spaces for optimization

    printf("%d, %d", a,b);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[8]; // Here the size has to be mentioned

    gets(ch1);

    int i = 0;
    while(ch1[i] != '\0'){
        i++;
    }
    printf("Length = %d", i);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "AUST";
    char ch2[] = "CSE";

    printf("%s %s\n", ch1,ch2);

    strcpy(ch1,ch2); // strcpy(terget,source)

    printf("%s %s", ch1,ch2);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "AUST";
    char ch2[] = "CSE";

    printf("%s %s\n", ch1,ch2);

    strcat(ch1, " ");
    strcat(ch1,ch2);

    printf("%s %s", ch1,ch2);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "AUST";
    char ch2[] = "CSE";

    printf("%s %s\n", ch1,ch2);

    strcat(ch1, " ");
    strcat(ch1,ch2);

    printf("%s %s", ch1,ch2);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "AUST";
    char ch2[] = "AUST";

    printf("%s %s\n", ch1,ch2);

    int value = strcmp(ch1,ch2);

    printf("%d ", value);

    // returns 0  -> Similar
    // returns -1 -> cha1 is shorter than ch2  [also if alphabatical order of ch1 < alphabatical order of ch2]
    // returns 1 -> cha1 is larger than ch2 [also if alphabatical order of ch1 > alphabatical order of ch2]
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "A";
    char ch2[] = "b";

    printf("%s %s\n", ch1,ch2);

    int value = strcmp(ch1,ch2);

    printf("%d ", value);

    // returns 0  -> Similar
    // returns -1 -> cha1 is shorter than ch2  [also if alphabatical order of ch1 < alphabatical order of ch2]
    // returns 1 -> cha1 is larger than ch2 [also if alphabatical order of ch1 > alphabatical order of ch2]
    // It compares alphabate by alphabate. Stops when it finds a difference
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "a";
    char ch2[] = "A";

    strupr(ch1);
    printf("%s\n", ch1);

    strlwr(ch2);
    printf("%s\n", ch2);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "Name";

    printf("%s\n", ch1);
    strrev(ch1);
    printf("%s\n", ch1);
--------------------------------------------------------------------------------------------------------------------------------

    char ch1[] = "AUST";
    char ch2[] = "CSE";

    char temp[4];
    strcpy(temp,ch1);
    strcpy(ch1,ch2);
    printf("%s\n",ch1);
    strcpy(ch2,temp);
    printf("%s\n",ch2);




}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                    
//                                          Lab-9


#include<stdio.h>
int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++){
        int *a = arr[i];
        for(int j=0;j<3;j++){
            printf("%d ",a[j]);
        }
        printf("\n");
    }



}

# In matrix multiplication : 
    if result = 2x3 * 3x2
    we need to do the multiplication k times [in each addition], where k = 3
    The dimention of the result is 2x2

# 3D:
    int arr[2][2][2] = {
            {{1,2},{3,4}},
            {{5,6},{7,8}}
        }


ADDITIONAL : 
    uint64_t > long long > uint32_t > int

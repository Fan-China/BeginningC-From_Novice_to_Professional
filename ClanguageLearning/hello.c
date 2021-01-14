//
//  1.5.c
//  ClanguageLearning
//
//  Created by Fan Yang on 2021/1/5.
//

#include <stdio.h>  // This is a preprocessor directive
/* Progam 1.1 Your very First C Program - Displaying Hello World */
#include "Source.h"
#define PI 3.14159f                            //Definition of the symbol PI
#include <limits.h>                            //For limits on integer types
#include <float.h>                             //For limits on floating-point types
#include <stdbool.h>
int main2_1(void);
int main(void)
{
    float price = 3.5;
    int quantity = 0;
    float totalprice = 0;
    float discount = 0.05;
    printf("Please give a purchasednumber:");
    scanf("%d", &quantity);
    if(quantity < 0)
        printf("Invalid purchased number.\n");
    if(quantity > 10)
        totalprice = quantity * price * (1 - discount);
    else
        totalprice = quantity * price;
    printf("You should pay $%.2f for %d products.\nAnd that's %d dollors %d cents.\n",
           totalprice, quantity, (int32_t)totalprice/1, ((int32_t)(totalprice*100))%100);
    /*
    int number = 0;
    printf("Please input a number between 1 to 10:");
    scanf("%d", &number);
    if((number > 10) || (number < 1))
        printf("Invalid number");
    if(number > 5)
        printf("Your entered number is greater than 5.\n");
    if(number < 6)
        printf("Your entered number is less than 6.\n");
    
    int myweight = 169;
    int yourweight = 170;
    if(yourweight < myweight)
        printf("I am heavier than you.\n");
    if(yourweight > myweight)
        printf("You are heavier than me.\n");
    if(yourweight == myweight)
        printf("We are at same weight.\n");
    bool result = 5 < 4;
    printf("The value of result is %d\n", result);
     
    //test 2_1
    long distance_foot = 0;
    float distance_feet = 0;
    float distance_yard = 0;
    printf("Please input the distance in foot:");
    scanf("%ld", &distance_foot);
    distance_feet = distance_foot / 12;
    distance_yard = distance_feet / 3;
    printf("The distance of is value is %ld foot, %f feet, %f yard\n", distance_foot, distance_feet, distance_yard);
    
    //Program 2.17 Calculating the height of a tree
   long shorty = 0L;
    long lofty = 0L;
    long feet = 0L;
    long inches = 0L;
    long long tree = 0L;
    long long shortytolofty = 0L;
    long loftytotree = 0L;
    //const long inch_per_foot = 12L;
    //printf("%d", INCHES_PER_FOOT);
    for (int i = 0; i < 2; i++)
    {
        printf("\nPlease input the feet height: ");
        scanf("%ld", &feet);
        printf("Please input the inches height: ");
        scanf("%ld", &inches);
        if (i == 0)
        {
            shorty = feet * INCHES_PER_FOOT + inches;           //Calculate the height of shorty in inch
            printf("The height of shorty is %ld\n", shorty);
        }
        if (i == 1)
        {
            lofty = feet * INCHES_PER_FOOT + inches;           //Calculate the height of shorty in inch
            printf("The heighty of lofty is %ld\n", lofty);
        }
    }
    
    printf("\nPlease input the distance shorty to lofty: ");
    scanf("%lld", &shortytolofty);
    printf("\nPlease input the distance lofty to tree: ");
    scanf("%ld", &loftytotree);
    shortytolofty *= INCHES_PER_FOOT;                           //shortytolofty in inch
    loftytotree *= INCHES_PER_FOOT;                             //loftytotree in inch
    //printf("The distance of shortytolofty and loftytotree is %ld and %ld inches\n", shortytolofty, loftytotree);
    tree = shorty + (shortytolofty + loftytotree) * (lofty - shorty) / shortytolofty;
    printf("The height of the tree is %lld feet and %lld inches\n", tree/INCHES_PER_FOOT, tree%INCHES_PER_FOOT);

    enum Weekday {Mon, Tues, Wed, Thus, Fri, Sat, Sun};
    //enum Weekday today = Wed;
    //printf("Today is ")
    char first2 = 'A';
    char second2 = 'B';
    char last = 'Z';
    char number = 40;
    char ex1 = first2 + 2;
    char ex2 = second2 - 1;
    char ex3 = last + 2;
    printf("\nCharacter values %-5c%-5c%-5c\n", ex1 + 30, ex2, ex3);
    printf("Numberical equivalents %-5d%-5d%-5d\n", ex1, ex2, ex3);
    printf("The number %d is the code for the character %c\n", number, number);
    
    char first = 'T';
    char second = 63;
    printf("\nThe first example as a letter looks like this - %c\n", first);
    printf("Ths first example as a number looks like this - %d\n", first);
    printf("The second example as a letter looks like this - %c\n", second);
    printf("The second example as a letter looks like this - %d\n", second);

    const float Revenue_Per_150 = 4.5f;
    unsigned short JanSold = 23500;                     //Stock sold in January
    unsigned short FebSold = 19300;
    unsigned short MarSold = 21600;
    float RevQuarter = 0.0f;                   //Sales for the quarter
    unsigned long QuarterSold = JanSold + FebSold + MarSold;
    printf("\nTotal sold on first quarter is %ld\n", QuarterSold);
    printf("Stock sold in \nJan:%d\nFeb:%d\nMarch:%d\n"
           "total sold %lu in 1st quarter\n"
           "%lu, %lu, %lu, %lu, %lu\n", JanSold, FebSold, MarSold, QuarterSold, sizeof(long double), sizeof(double), sizeof(float), sizeof(long long), sizeof(long ));
    RevQuarter = QuarterSold * Revenue_Per_150 / 150.0;
    printf("Sales revenue this quarter is: $%.2f\n", RevQuarter);
    
    printf("\nVariables of type char occupy %lu bytes.\n", sizeof(short));
    printf("Variables of type char store values from %d to %d.\n", CHAR_MIN, CHAR_MAX);
    printf("Variables of type unsigned char values from 0 to %u.\n", UCHAR_MAX);
    printf("The size of largest value of type float is %.3e\n", FLT_MAX);
    printf("Variables of type double provide %u decimal digits presision.\n", LDBL_DIG);
    float radius = 0.0f;
    float diameter =0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    float const Pi = 3.14159265f;              //Defines the value of Pi as fixed
    //float Pi = 3.1415265f;
    printf("Input the diameter of the table:");
    scanf("%f",&diameter);
    radius = diameter / 2;
    circumference = 2 * Pi * radius;
    area = Pi * radius * radius;
    printf("\nThe circumference is %.2f.\n", 2 * Pi * radius);
    printf("The area is %.2f.\n", Pi * radius * radius);
   
    float plank_length = 10.0f;
    float pieces = 4.0f;
    float piece_length = 0.0f;
    piece_length = plank_length / pieces;
    printf("We can devide %8.2f plank_length into %.0f pieces, each %.3f length on average.\n", plank_length, pieces, piece_length);
    int expenditure = 75;
    printf("Your balance has changed by %d.\n", -expenditure);
    float cookies_jar = 45;
    float children = 7;
    float cookies_per_child = 0;  //Better to evalution when define
    float cookies_left = 0;
    
    cookies_per_child = cookies_jar / children;
    cookies_left = (int32_t)(cookies_jar) % (int32_t)(children);
    printf("We have %f children to eat %f cookies.\n", children, cookies_jar);
    printf("Each child can have %f cooikes to eat, %f cookies would left.\n", cookies_per_child, cookies_left);
    
    int cookies = 5;
    int cookies_calories = 125; //Calories per cookie
    int total_eaten = 0;        //Total cookies eater
    
    int eaten = 2;              //Number to be eaten
    cookies = cookies - eaten;  //Subtract number eaten from cookises
    total_eaten = total_eaten + eaten;
    printf("\nI have eaten %d cookies."
           "There are %d cookies left", eaten, cookies);
    
    eaten = 3;                  //New values for cookies eaten
    cookies = cookies - eaten;  //Subtract number eaten from cookies
    total_eaten = total_eaten + eaten;
    printf("\nI have eaten %d more. There are %d cookies left\n", eaten, cookies);
    printf("\nTotal energy consumed is %d calories.\n",total_eaten*cookies_calories);
    int total_pets;
    int cats = 2;
    int dogs = 1;
    int ponies = 1;
    int others = 46;
    
    //Set the number of each kind of pet
    
    //Calculate the total number of pets
    total_pets = cats + dogs + ponies + others;
    
    printf("We have %d pets in total\n", total_pets);   //Output the result
    int brothers,     //Declare a variable called brothers and brides
        brides;
    brothers = 7;           //Store 7 in the variable brothers
    brides = 7;             //Store 7 in the variable brides
    
    //Display some output
    printf("%d brides for %d brothers;\n", brides, brothers);
    int salary;             //Delare a called salary
    salary = 10000;         //Store 10000 in salary
    printf("My salary is %d.\n", salary);
    printf("My salary is $10000\n");
    printf("\n\nHi there!\nThis program is a bit");
    printf(" longer than the others.");
    printf("\nBut really it's only more text.\n\n\n\a\a");
    printf("Hey, wait a minute!! What was that???\n\n");
    printf("\t1.\tA bird?\n");
    printf("\t2.\tA plane?\n");
    printf("\t3.\tA control charactor?\n");
    printf("\n\tAnd how will this look when it prints out?\n\n");
    printf("My nama is Albert-fan.yang\nAnd I am from Shanghai, China.\n");
    printf("\"It's freezing in here.\" he said coldly.\n");
    */
    return 0;
}

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
#include <string.h>
#include <ctype.h>
#include <stdlib.h>                            // For rand() and srand()
#include <time.h>                              // For time() function
int main2_1(void);
int main(void)
{
    // Program 4.12 Reverting the digits
    unsigned int number = 0;
    unsigned int rebmun = 0;
    unsigned int temp = 0;
    printf("Enter positive integer: ");
    scanf("%u", &number);
    temp = number;
    if( number > 9 )
    {
        do
        {
            rebmun = temp % 10;
            printf("%u", rebmun);
            temp = temp / 10;
        }
        while(temp > 9);
        printf("%u\n", temp);
    }
    else
        printf("Your number cannnot be reversed.\n");
    /*
    // Program 4.11 Sums of integers with a while loop nested in for a loop
    unsigned long sum = 1UL;
    unsigned int j = 1U;
    unsigned int count = 0;
    printf("Enter the number of integers you want to sum: ");
    scanf("%u", &count);
    for (unsigned int i = 1; i <= count; ++i)
    {
        sum = 1;
        j = 1;
        printf("1");
        while (j < i)
        {
            j++;                                        // j++ 的位置很重要！如果在printf之后输出就错了！
            sum += j;
            printf(" + %u", j);
        }
        printf(" = %lu\n", sum);
    }
    
    // Program 4.10 Sums of successive integer sequences
    unsigned int long sum = 0;
    unsigned int count = 0;
    printf("Enter the number of integers you want to sum: ");
    scanf("%u", &count);
    for (unsigned int i = 1; i <= count; i++)
    {
        sum = 0;
        for (unsigned int j = 1; j <= i; j++)
        {
            sum += j;
        }
        printf("%u\t%5lu\n", i, sum);
    }
    
    // Program 4.9 Output a box with given width and height
    const unsigned int MIN_SIZE = 3;
    unsigned int width = 0;
    unsigned int height = 0;
    printf("Please enter the width and height: ");
    scanf("%u%u", &width, &height);
    if (width < MIN_SIZE)
    {
        printf("PLease enter width cannnot less than %d. Consider %u instead.\n", MIN_SIZE);
        width = MIN_SIZE;
    }
    if (height < MIN_SIZE)
    {
        printf("PLease enter values cannnot less than %d. Consider %u instead.\n", MIN_SIZE);
        height = MIN_SIZE;
    }
    for (unsigned int i = 0; i < width ; i++)           //此可作为输出某一行*的标准for模块
    {
        printf("*");
    }
    for (unsigned int j = 0; j < height - 2; j++)
    {
        printf("\n*");
        for (unsigned int i = 0; i < width - 2; i++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (unsigned int i = 0; i < width ; i++)
    {
        printf("*");
    }
    printf("\n");
    
    // Program 4.8 While programming and summing integers
    unsigned long sum = 0UL;
    unsigned int i = 1;
    unsigned int count = 0;
    printf("\nPlease enter the number of integers you want to sum: ");
    scanf(" %u", &count);
    while( i <= count )
    {
        sum += i;
        i++;
    }
    printf("The total of these numbers is %lu.\n", sum);
    
    // Program 4.7 A guessing game
    int chosen = 0;
    int guess = 0;
    int count = 3;
    int limit = 20;                             // Upper limit for pseudo-random values
    srand(time(NULL));                          // Use clock value as starting seed, 这样做会导致高位丢失
    chosen = 1 + rand() % limit;                // Random int 1 to limit
    printf("The chosen number is %d.\n", chosen);
    printf("This is a guessing game.\n");
    for ( ; count > 0; count--)
    {
        printf( "You have %d tr%s left.\n", count, (count > 1 ? "ies" : "y"));
        printf("Please chose a number between 1-20: \n");
        scanf("%d", &guess);
        if (guess == chosen)
        {
            printf("Congratulations! Lucky one!\n");
            break;
        }
        else if ( (guess < 1) || (guess > 20) )
        {
            printf("Please enter a valid number.\n");
        }
        else
        {
            printf("Sorry, %d is wrong, the chosen number is %s than yours.\n",
                   guess, (chosen > guess) ? "greater" : "less" );
        }
    }
    printf("You used all of your oppotunities.\n");
     
    // Peogram 4.6 the almost indefinite loop - computing an average
    char answer = 'N';                                              //注意要用英文输入法！
    double total = 0.0;
    double value = 0.0;
    unsigned int count = 0;
    printf("This is program calculates the average of the any number of values.\n");
    for( ; ; )
    {
        printf("Please enter a value: ");
        scanf("%lf", &value);
        total += value;
        count++;
        printf("Do you want to enter another value? (y or n): \n");
        scanf("%c", &answer);                                      //为什么一定要空格？试一下切换输入法？--实测一定要英文输入法！
        if(tolower(answer) == 'n')
        {
            break;
        }
    }
    printf("The average of these values is %.2lf.\n", total / count);
    
    
    // Program 4.3 Sum the integers from 1 to a user-specified number
    unsigned long long sum =0LL;
    unsigned int count = 0;
    printf("\nPlease enter the number of integers you want to sum: ");
    scanf("%d", &count);
    for(int i = 0; i <= count; sum += i++)
    {}
    
     for(int i = 0; i <= count; i++)
    {
        sum += i;
    }
    printf("The total number of %d is %llu.\n", count, sum);
    
    // Program 4.2 Drawing a box
    printf("\n**********");
    for(int count = 1; count <= 8; ++count)
    {
        printf("\n*        *");
    }
    printf("\n**********\n");
    
    // Program 3.11 A calculator
    double number1 = 0;
    double number2 = 0;
    char operation1 = 0;
    double result = 0;
    long remainder = 0;
    printf("Please enter your formula: ");
    scanf("%lf %c %lf", &number1, &operation1, &number2);
    switch (operation1) {
        case '+':
            result = number1 + number2;
            printf("The result == %lf\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("The result == %lf\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("The result == %lf\n", result);
            break;
        case '/':
            if(number2 == 0)
                printf("Invaid calculation.\n");      //这里运行了if还会运行else还没弄懂
            else
                result = number1 / number2;
                remainder = (long)number1 % (long)number2;
                printf("The result == %lf，the remainder == %ld\n", result, remainder);
            break;                                   //一定不要忘了加break，否则会继续运行！
        case '%':
            if(number2 == 0)
                printf("Invaid calculation.\n");
            else                                     //这里运行了if还会运行else还没弄懂
                remainder = (long)number1 % (long)number2;
                printf("The remainder == %lf\n", result);
            break;                       //一定不要忘了加break，否则会继续运行！
        default:
            printf("A unknown calculation.\n");
            break;
    }
    
    // Program 3.11 A calculator
    float operand1 = 0;
    float operand2 = 0;
    int operation;
    float result = 0;
    float remainder = 0;
    printf("Please enter 1st number: ");
    scanf("%f", &operand1);
    printf("Please enter the operation you need: 1 for +, 2 for -, 3 for *, 4 for /: ");
    scanf("%d", &operation);
    printf("Please enter 2nd number: ");
    scanf("%f", &operand2);
    switch (operation) {
        case 1:
            result = operand1 + operand2;
            break;
        case 2:
            result = operand1 - operand2;
            break;
        case 3:
            result = operand1 *  operand2;
            break;
        case 4:
            result = operand1 / operand2;
            remainder = operand1 - (INT32_C(result)) * operand2;
            break;
        default:
            printf("Your operation is not applicable.\n");
            break;
    }
    printf("The result == %f.\n", result);
    
    // Program 3.10 Exercising bitwise operators
    unsigned int original = 0xABC;
    unsigned int result = 0;
    unsigned mask = 0xF;
    
    result |= original & mask;
    printf("result == %X, original == %X.\n", result, original);    // 如果是小写的%x，就会按小写输出十六进制数
    
    original >>= 4;
    result <<= 4;
    result |= original & mask;
    printf("result == %X, original == %X.\n", result, original);
    
    original >>= 4;
    result <<= 4;
    result |= original & mask;
    printf("result == %X, original == %X.\n", result, original);
    
    //Program 3.9 Testing cases
    char answer = 0;
    printf("Please enter Y or N: ");
    scanf("%c", &answer);
    switch (toupper(answer)) {
        case 'Y':
            printf("Your responded in the affirmative.\n");
            break;
        case 'N':
            printf("Your responded in the negative.\n");
            break;
        default:
            printf("You didn't responded orrectly.\n");
            break;
    }
    
    //Program 3.8 Lucky Lotteries
    int choice = 0;
    printf("Please enter a number between 1 to 10: ");
    scanf("%d" ,&choice);
    if ((choice > 10) || (choice < 1)) {
        choice = 11;
    }
        switch (choice) {
            case 1:
                printf("Congratulations, you win the 1st class award.\n");
                break;                         //Jump to the end of this block
            case 2: case 3:
                printf("Congratulations, you win the 2nd class award.\n");
                break;
            case 4: case 5: case 6:
                printf("Congratulations, you win the 3rd class award.\n");
                break;
            case 11:
                printf("Try a valid value, you waste a choice.\n");
                break;
            default:
                printf("Sorry, hope you be the lucky one next time.\n");
                break;
        }
    
    //Prmgram 3.7 A confused recuiting policy
    int age = 0;
    int unicode = 0;
    int majcode = 0;
    //const bool interview = 1;
    //const bool reject = 0;
    //bool age_check = 0;
    bool condition1 = 0;
    bool condition2 = 0;
    bool condition3 = 0;
    bool condition4 = 0;
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your university code: 0 for Yale, 1 for Harvard, 2 for others: ");
    scanf("%d", &unicode);
    printf("Please enter your majority code: 0 for chemistry, 1 for economy, 2 for others: ");
    scanf("%d", &majcode);
    //result = (age > 25) ? ((unicode == 0) ? interview : (majcode == 0) ? interview : reject) :
    //((unicode = 0) ? ((majcode = 0) ? interview : reject) : reject));
    condition1 = ((age > 25) && (majcode == 0) && (unicode != 0));
    condition2 = ((majcode == 0) && (unicode == 0));
    condition3 = ((age < 28) && (majcode == 1) && (unicode == 1));  //注意判断相等不要写成赋值
    condition4 = ((age > 25) && (majcode != 0) && (unicode == 0));
    if(condition1 || condition2 || condition3 || condition4)
        printf("Congratulations, you are informed to join our interview!\n");
    else
        printf("Sorry to inform you we have to reject you.\n");
    printf("%d, %d, %d, %d\n", condition1, condition2, condition3, condition4);
    
    bool yale_graduated = 1;
    bool harvard_graduted = 1;
    bool age_above_25 = 1;
    bool age_below_28 = 1;
    bool major_chemistry = 1;
    bool major_enocomy = 1;
    int age = 0;
    char university[12];
    char major[20];
    const char str1[20] = "yale";
    const char str2[20] = "harvard";
    const char str3[20] = "chemistry";
    const char str4[20] = "economy";
    printf("Please enter age: ");
    scanf("%d", &age);
    printf("Please enter university and major: ");
    scanf("%s, %s", &university, &major);
    //gets(&university[12]);
    //gets(&major[20]);
    age_above_25 = age > 25;
    age_below_28 = age < 28;
    yale_graduated = strcmp(university, &str1[20]);
    harvard_graduted = strcmp(university, &str2[20]);
    major_chemistry = strcmp(major, &str3[20]);
    major_enocomy = strcmp(major, &str4[20]);
    bool condition1 = age_above_25 && (major_chemistry == 0) && (yale_graduated != 0);
    bool condition2 = (major_chemistry == 0) && (yale_graduated == 0);
    bool condition3 = age_below_28 && (major_enocomy == 0) && (harvard_graduted == 0);
    bool condition4 = (age_above_25 && (major_chemistry == 0) && (yale_graduated == 0));
    if ((condition1) || (condition2) || (condition3) || (condition4))
        printf("Congratulations, you are informed to join our interview!\n");
    else
        printf("Sorry to inform you we have to reject you.\n");
    printf("%d, %d\n", age_above_25, age_below_28);
    printf("%d, %d, %d, %d\n", condition1, condition2, condition3, condition4);
    printf("%d, %d, %d, %d\n", yale_graduated, harvard_graduted, major_chemistry, major_enocomy);
    printf("%s, %s", university, major);

    int pet = 0;
    printf("Please enter the pet number: ");
    scanf("%d", &pet);
    printf("You have %d pet%s.\n", pet, pet == 1 ? "" : "s");

    //Program 3.6 Muitlple discount levels
    float per_price = 3.5;
    float total_price = 0;
    float discount = 0;
    int quantity = 0;
    printf("Please enter the quantity: ");
    scanf("%d", &quantity);
    discount = quantity > 50 ? 0.85 : (quantity > 20 ? 0.9 : (quantity > 10 ? 0.95 : 1));
    total_price = per_price * quantity * discount;
    printf("The total price is $%.2f.\n", total_price);
 
    //Program 3.5 Converting uppercase in a better way
    char letter = 0;
    bool uppercase_check = 0;
    bool lowercase_check = 0;
    printf("Please enter a uppercase letter:");
    scanf("%c", &letter);
    uppercase_check = (letter >= 'A' && letter <= 'Z');
    lowercase_check = (letter >= 'a' && letter <= 'z');
    letter = letter - 'A' + 'a';
    if(uppercase_check)
        printf("The lowercase is %c.\n", letter);
    else
        if(lowercase_check)
            printf("Please use shift key to enter a uppercase letter.\n");
        else
            printf("You didn't enter a letter.\n");
    
    //Program 3.4 Converting uppercase to lowercase
    char lowercase = 0;
    char uppercase = 0;
    printf("Please enter a uppercase letter:");
    scanf("%c", &uppercase);
    if(uppercase >= 'A')
    {
       if(uppercase <= 'Z')
       {
           lowercase = uppercase - 'A' + 'a';
           printf("The lowecase of %c is %c.\n", uppercase, lowercase);
       }
       else
           if(uppercase >= 'a')
           {
               if(uppercase <= 'z')
                   printf("Please use shift botton to input a uppercase letter.\n");
               else
                   printf("You didn't enter a letter.\n");
           }
           else
           {
               printf("You didn't enter a letter.\n");
           }
    }
    else
    {
        printf("You didn't enter a letter.\n");
    }

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

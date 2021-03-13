//
//  1.5.c
//  ClanguageLearning
//
//  Created by Fan Yang on 2021/1/5.
//

#include <stdio.h> // This is a preprocessor directive
/* Progam 1.1 Your very First C Program - Displaying Hello World */
#include "Source.h"
#define PI 3.14159f  //Definition of the symbol PI
#include <limits.h>  //For limits on integer types
#include <float.h>   //For limits on floating-point types
#include <stdbool.h> // For bool, true adn false
#include <string.h>
#include <ctype.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time() function
int main(void)
{
    // Program 7.3 Using pointer arguments to scanf_s
    #define _STDC_WANT_LIB_EXT1_ 1
    int value = 0;
    int *pvalue = &value;   // Set pointer to refer value

    printf("Input an integer: ");
    scanf_s(" %d", pvalue); // Read into value via the pointer, invalid in C99

    printf("You entered %d.\n", value); // Output the value entered

    /*     // Program 7.2 What's the pointer of it all
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;
    pnum = &num1;  // Get address of num1
    *pnum = 2L;    // Set num1 to 2
    ++num2;        // Icrement num2
    num2 += *pnum; // Add num1 to num2

    pnum = &num2; // Get address of num2
    ++*pnum;      // INcrement num2 indirectly

    printf(" num1 = %ld\n num2 = %ld\n *pnum = %ld\n *pnum + num2 = %ld\n",
           num1, num2, *pnum, (*pnum + num2)); */

    /*     // Program 7.1 A simple program using pointers
    int number = 0;      // A variable of type int initialized to 0
    int* pnumber = NULL; // A pointer that can point to type int

    number = 10;
    printf("Number's address: %p\n", &number); // Output the address
    printf("Number's value: %d\n\n", number);  // Output the value

    pnumber = &number; // Store the address of number in pnumber

    printf("pnumber's address: %p\n", (void*)&pnumber);             // Output the address
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber)); // Output the size
    printf("pnumber's value: %p\n", pnumber);               // Output the value (an address)
    printf("value pointed to %d\n", *pnumber);              // Value at the address
 */
    // Skip remained Programs in chapter 6, Jump to chapter 7

    // Program 6.3 Arrays of strings
    /*     char str[][70] = {
        "Computers do what you tell them to do, not what you want them to do.",
        "When you put something in memory, remember where you put it.",
        "Never test for a condition you don't know  what to do with."};
    unsigned int count = 0;                               // Length of a string
    unsigned int strCount = sizeof(str) / sizeof(str[0]); // Number of strings
    printf("There are %u strings.\n", strCount);

    // Find the length of the strings
    for (unsigned int i = 0; i < strCount; i++)
    {
        count = 0;
        while (str[i][count])
        {
            count++;
        }
        printf("The string:\n  \"%s\"\n contains %u characters.\n", str[i], count);
    } */

    /*     // Program 6.2 Lengths of strings
    char str1[] = "To be or not to be";
    char str2[] = ",that is a question";
    unsigned int count = 0; // Stores the string length
    while (str1[count] != '\0')
    {
        count++;
    }
    printf("The length of the string \"%s\" is %d characters.\n", str1, count);
    count = 0;
    while (str2[count] != '\0')
    {
        count++;
    }
    printf("The length of the string \"%s\" is %d characters.\n", str2, count); */

    /* // Program 6.1 Displaying a string
    printf("The charatcter \0 is used to terminate a string.\n"); */

    /*     // Test 5.1 A better approach
    const int nValue = 5; // Number of data values
    double data[nValue];  // Store data values
    double reciprocals[nValue];
    double sum = 0.0; // Stores sum of recipocals

    printf("Enter 5 values separated by spaces: \n");
    for (int i = 0; i < nValue; i++)
    {
        scanf("%lf", &data[i]);
    }
    printf("Your entered the values:\n");
    for (int i = 0; i < nValue; i++)
    {
        printf("%15.2lf", data[i]);
    }
    printf("\n");

    printf("\nThe values of the reciprocals are: \n");
    for (int i = 0; i < nValue; i++)
    {
        reciprocals[i] = 1.0 / data[i];
        printf("%15.2lf", reciprocals[i]);
    }
    printf("\n");

    for (int i = 0; i < nValue; i++)
    {
        sum += reciprocals[i]; // Accumulates sum of reciprocals
        if (i > 0)
            printf(" + ");
        printf("1/%.2lf", data[i]);
    }
    printf(" = %lf\n", sum); */

    /*  Test 5.1
   double number = 0.0;
    double x = 0.0;
    double index[5] = {0, 0, 0, 0, 0};
    double sum = 0.0;
    for (unsigned int i = 0; i < 5; i++)
    {
        printf("Please enter the doubled number: \n");
        scanf("%lf", &number);
        if (number != 0.0)
        {
            x = 1.0 / number;
            index[i] = x;
            sum += index[i];
            number = 0.0;
            printf("%lf | ", index[i]);
        }
    }
    printf("The sum is %lf\n", sum); */

    /* int player = 0;                       // Current player number - 1 or 2
    int winner = 0;                       // The winning player number
    int choice = 0;                       // Chosen square
    unsigned int row = 0;                 // Row index for a square
    unsigned int column = 0;              // Column index for a square
    unsigned int line = 0;                // Row or column index in checking loop
   
    char board[3][3] = {                  // The board
                {'1','2','3'},            // Initial values are characters '1' to '9'
                {'4','5','6'},            // used to select a vacant square
                {'7','8','9'}             // for a player's turn.
                       };

    // The main game loop. The game continues for up to 9 turns
    // as long as there is no winner
    for(unsigned int i = 0; i < 9 && winner == 0; ++i)
    {
      // Display the board
      printf("\n");
      printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
      printf("---+---+---\n");
      printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
      printf("---+---+---\n");
      printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

      player = i%2 + 1;                   // Select player

      // Get valid player square selection
      do
      {
        printf("Player %d, please enter a valid square number "
               "for where you want to place your %c: ",
                player,(player == 1) ? 'X' : 'O');
        scanf("%d", &choice);

        row = --choice/3;                 // Get row index of square
        column = choice % 3;              // Get column index of square
      }while(choice < 0 || choice > 9 || board[row][column] > '9');

      // Insert player symbol
      board[row][column] = (player == 1) ? 'X' : 'O';

      // Check for a winning line ñ diagonals first
      if((board[0][0]==board[1][1] && board[0][0]==board[2][2]) ||
         (board[0][2]==board[1][1] && board[0][2]==board[2][0]))
        winner = player;
      else
        // Check rows and columns for a winning line
        for(line = 0; line <= 2; ++line)
          if((board[line][0] == board[line][1] && board[line][0] == board[line][2]) ||
             (board[0][line] == board[1][line] && board[0][line] == board[2][line]))
            winner = player;
    }
    // Game is over so display the final board
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

    // Display result message
    if(winner)
      printf("\nCongratulations, player %d, YOU ARE THE WINNER!\n", winner);
    else
      printf("\nHow boring, it is a draw\n"); */

    /*
    // Program 5.7 Averaging a variable number of grades
    size_t nGrades = 0;
    printf("Enter the number of grades: ");
    scanf("%zd", &nGrades);
    long grades[nGrades];
    long sum = 0L;
    float average = 0.0f;
    printf("\nEnter the %zd grades:\n", nGrades);
    for (size_t i = 0; i < nGrades; i++)
    {
        printf("%2zd> ", i + 1);
        scanf("%ld", &grades[i]);
        sum += grades[i];
    }
    printf("The grades you entered are: \n");
    for (size_t i = 0; i < nGrades; i++)
    {
        printf("Grades[%2zd] = %3ld ",i + 1, grades[i]);
        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
        average = (float) sum / nGrades;
    }
    printf("\nAverage of the %zd grades entered is %.2f\n", nGrades, average);
    
    // Program 5.6 Know your hat size - if you dare ……
    ******************************************************
        * The size array stores hat sizes from 6 1/2 to 7 7/8
        * Each row defines one character of a size value so
        * a size is selected by using the same index for each
        * the three rows. e.g. Index 2 selects 6 3/4.
     ******************************************************
    
    char size[3][12] =
    {
        {'6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7'},
        {'1', '5', '3', '7', ' ', '1', '1', '3', '1', '5', '3', '7'},
        {'2', '8', '4', '8', ' ', '8', '4', '8', '2', '8', '4', '8'}
    };
    int headsize[12] =                               // Each int type is distibuted 4 bytes.
    {164,166,169,172,175,178,181,184,188,191,194,197};
    float cranium = 0.0f;                             // Head circumerence in decimal inches
    long your_head = 0;                              // Headsize in whole eighths
    bool hat_found = false;                         // Indicates when a hat is found to fit
    printf("Please enter the circumference of your head above ou eyebrows in inches as a decimal value: ");
    scanf("%f", &cranium);
    your_head = (long)(cranium * 8.0);       // Covert to whole eighths of a inch
    ******************************************************
        * Search for a hat size:
        * Either your head corresponds to the 1st head_size element or
        * a fit is when your_head is greater than one headsize element
        * and less than or equal to the next.
        * In this case the size is the second headsize value.
     *******************************************************
    size_t i = 0;
    if (your_head == headsize[0])
    {
        hat_found = true;
    }
    else if (your_head < headsize[0])
    {
        hat_found = false;
    }
    else
    {
        for (i = 0; i < sizeof(headsize)/sizeof(headsize[0])-1; i++)
        {
            if (your_head > headsize[i] && your_head <= headsize[i+1])
            {
                hat_found = true;
                break;
            }
        }
    }
    if (your_head > headsize[11])
    {
        hat_found = false;
    }
        do
        {
        if (your_head > headsize[i] && your_head <= headsize[i+1])
        {
            hat_found = true;
            break;
        }
        else
        {
            i++;
            hat_found = false;
        }
        } while (i < sizeof(headsize)/sizeof(headsize[0])-1);
        // (i<11);   // Fixed: cannnot be i<12, the if loop would be wrong!
    }*/
    // For loop above is a more efficient way.

    //printf("%d\n", headsize[12]);                             // Test line, still have value when array size out of range!
    //printf("%zu\n", sizeof(headsize)/sizeof(headsize[0])-1);  // test line, %zu for sizeof_t type output.
    /*
   if (hat_found)
    {
        printf("Your hat size is %c %c%c%c\n", size[0][i+1], size[1][i+1],
               (size[1][i+1] == ' ') ? ' ' : '/', size[2][i+1]);
    }
    else
    {
        switch (i)
        {
            case 0:
                printf("You, in technical parlance, are a skinny head. No hat for you, I'm afraid.\n");
                break;                                          // Use break to jump out of nearest loop;
            case 11:
                printf("You, in technical parlance, are a fat head. No hat for you, I'm afraid.\n");
                break;
            default:
                printf("When you see this, please raise a PR.\n");
                break;
        }
    }
    
    //printf("%zu, %zu\n", i, sizeof(headsize)/sizeof(headsize[0])-1);        // Test variables
    
    
    // Program 5.5 Using the & operator
    long a = 1L;
    long b = 2L;
    long c = 3L;
    double d = 4.0;
    double e = 5.0;
    double f = 6.0;
    printf("A variable of type long occupies %lu bytes.\n", sizeof(long));
    printf("Here are the addresses of some variables of type long:\n");
    printf("The address of a is: %p. The address of b is: %p.\n", &a, &b);      // Once address is distributed, not changed anymore
    printf("The address of c is: %p.\n", &c);
    printf("\nA variable of type double occupies %lu bytes.\n", sizeof(double));
    printf("Here are the addresses of some variables of type double:\n");
    printf("The address of d is: %p. The address of e is: %p.\n", &d, &e);
    printf("The address of f is: %p.\n", &f);
    
    // Program 5.3 Averageing ten grades - storing the values the easy way
    int grades[10];
    unsigned int count = 10;
    long sum = 0;
    float average = 0;
    printf("Enter the 10 grades: \n");
    for (unsigned int i = 0; i < count; i++)
    {
        printf("%2u: ", i + 1);                             // 占用2个字符宽度，使排列整齐
        scanf("%3d", &grades[i]);
        sum += grades[i];
    }
    average = (float) sum / 10;                             // would loss accuracy if no (float)
    for (unsigned int i = 0; i < count; i++)
    {
        printf("Grade number%3u is %3d.\n", i+1, grades[i]);// Make text alignment, by number%3u.
    }
    printf("The average grades is %.2f.\n", average);       // keep 2 bits float.
    
    // 习题 4.1
    unsigned long int dimension = 0;
    unsigned long int result = 0;
    unsigned long int i = 1;
    unsigned long int j = 1;
    printf("Enter the dimensions of the table: ");
    scanf("%lu", &dimension);
    if((dimension > 0) && (dimension < 26))                // 实测表格最大25，再大一行放不下
    {
        printf("     ");
        do
        {
            printf("%4lu|", j++);                          // 占用4个字符宽，右对齐，若需左对齐是%-4lu
        } while (j <= dimension);
        printf("\n     ");
        do {
            printf("----|");
            i++;
        } while (i <= dimension);
        printf("\n");
        for (i = 1; i <= dimension; i++)
        {
            printf("%4lu|", i);
            for (j= 1; j <= dimension; j++)
            {
                result = i * j;
                printf("%4lu|", result);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The input is invalid.\n");
    }
    
    // Program 4.13 Simple Simon                        // Feb06, 2021. 未完成，待以后完成, 还不能执行预期功能
    char another_game = 'Y';
    const unsigned int DELAY = 1;
    bool correct = true;
    unsigned int tries = 0;
    unsigned digits = 0;
    time_t seed = 0;
    unsigned int number = 0;
    time_t wait_start = 0;
    clock_t start_time = 0;
    unsigned int score = 0;
    unsigned int total_digits = 0;
    unsigned int game_time = 0;
    printf("To play simon, watch the screen for a sequence of digits.\n"
           "Watch carefully, as the digits are only displayed for %u second%s\n", DELAY, DELAY > 1 ? "s!" : "!" );
    printf("The computer will remove them, and then prompt you to enter the same sequence.\n"
           "When you do, you must put spaces between the digits.\n");
    printf("Good luck! Press Enter to play!\n");
    scanf("%c", &another_game);
    do
    {
        // Initialize game
        correct = true;                // Indicates correct sequence entered
        tries = 0;                     // Initialize count of successful tries
        digits = 2;                    // Initial length of digits sequence
        start_time = clock();          // Record time at start of game
        
    // Inner loop continues as long as sequnceses are entered correctly
    while(correct)
    {
        ++tries;                        // A new attempt
        wait_start = clock();           // Record start time for sequence
        
        // Generate a sequence of digits and display them
        srand(time(&seed));             // Initialize the ramdom sequence
        for(unsigned int i = 1; i <= digits; ++i)
        {
            printf("%u", rand() % 10);  // Output a random digit
        }
        for(; clock() - wait_start < DELAY * CLOCKS_PER_SEC; )     // Wait delay seconds
        {}
        // Now overwrite the digit sequence
        printf("\r");                   // Go to beginning of the line
        for(unsigned int i = 1; i <= digits; ++i)
        {
            printf("  ");               // Output 2 spaces
        }
        
        if(tries == 1)                  // Only output message for 1st try
        {
            printf("\nNow you enter the sequence - don't forget the spaces\n");
        }
        
        else                            // Back to the beginning of the line
        {
            printf("\r");
        }
        
        srand(seed);                    // Reinitialize the random sequence
        for (unsigned int i = 1; i <= digits; ++i)
        // Read the input sequence & check against the original
        {
            scanf("%u", &number);       // Read a digit
            if (number != rand() % 10)  // Compare with generated digits
            {
                correct = false;        // Incorrect entry
                break;                  // No need for check further……
            }
        }
        
        // On every 3rd successful try, increase the sequence length
        if(correct && ((tries % 3) == 0))
        {
            ++digits;
        }
        
        printf("%s\n", correct ? "Correct!" : "Wrong!");
    }
        
    // Calculate and output the game score
    score = 10 * (digits - (tries % 3) == 1);       // Points for sequence length
    total_digits = digits * (((tries % 3) == 0) ? 3 : tries % 3);
    if(digits > 2)
    {
        total_digits += 3 * ((digits - 1) * (digits - 2) / 2 - 1);
    }
        
    game_time = (clock() - start_time) / CLOCKS_PER_SEC - tries * DELAY;
    
    if(total_digits > game_time)
    {
        score += 10 * (game_time - total_digits);   //Add points for speed
    }
    printf("\n\nGame time was %u seconds. Your score is %u", game_time, score);
    
    fflush(stdin);                                  // Clear the input buffer
    
    // Check if new game required
    printf("Do you want to paly again?(y/n)\n ");
    scanf("%c", &another_game);
        
    }while (another_game == 'Y');
    
    // Program 4.12 Reverting the digits
    unsigned int number = 0;
    unsigned int rebmun = 0;
    unsigned int temp = 0;
    printf("Enter positive integer: ");
    scanf("%u", &number);
    temp = number;
    do {
        rebmun = rebmun * 10 + temp % 10;           // 这种解法会更简洁，但同时更不易读
        temp = temp / 10;
    } while (temp);
    printf("The reversed number is %u on %u.\n", rebmun, number);
    
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

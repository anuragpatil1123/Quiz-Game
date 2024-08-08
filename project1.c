#include <stdio.h>
int main()
{
    int i;
    int your_name[50];
    int ans1, ans2, ans3, ans4, ans5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    int total_points;
    

    printf("                         QUIZ GAME\n\n");
    printf("                    > Press 7 to start the game\n");
    printf("                    > Press 0 to close the game\n");
    printf("                    > ");
    scanf("%d", &i);

if(i == 7)
{
    printf("\n                    ");
    printf("The game is started\n\n");
}

else if(i == 0)
{
    printf("The game is closed\n\n");
    return 0;

}
else 
{
    printf("Invalid\n\n");
    return 0;
}
if(i == 7)
{
    printf("                    ");
    printf("Enter Your Name = ");
    your_name[50];
    scanf("%s", &your_name);
    printf("\n                       ");
    printf("Welcome %s",your_name);
    printf("\n\n\n");
}
{
    printf("Select Any One Option\n\n");
    printf("1) Who is the founder of C language?\n\n");
    printf("1) James Gosling\n");
    printf("2) Guido Van Rossum\n");
    printf("3) Charles Babbage\n");
    printf("4) Dennis Ritchie\n");
    
    printf("Enter your Answer: ");
    scanf("%d", &ans1);
    if(ans1 == 4)
    {
        printf("Correct Answer\n");
        point1 = 5;
        printf("You have scored %d Marks\n\n", point1);

    }   
    else 
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is 4\n");
        point1 = 0;
        printf("You have scored %d Mark\n\n", point1);
    }

    printf("2) What year was the INDIA get freedom?\n\n");
    printf("1) 1948\n");
    printf("2) 1947\n");
    printf("3) 1945\n");
    printf("4) 1949\n");
    
    printf("Enter your Answer: ");
    scanf("%d", &ans2);
    if(ans2 == 2)
    {
        printf("Correct Answer\n");
        point2 = 5;
        printf("You have scored %d Marks\n\n", point2);

    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is 2\n");
        point2 = 0;
        printf("You have scored %d Mark\n\n", point2);
    }

    printf("3) What is the tallest mountain in the world?\n\n");
    printf("1) K2\n");
    printf("2) Denali\n");
    printf("3) Mount Everest\n");
    printf("4) Sahyadri\n");
    
    printf("Enter your Answer: ");
    scanf("%d", &ans3);
    if(ans3 == 3)
    {
        printf("Correct Answer\n");
        point3 = 5;
        printf("You have scored %d Marks\n\n", point3);

    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is 3\n");
        point3 = 0;
        printf("You have scored %d Mark\n\n", point3);
    }

    printf("4) Who discovered electricity?\n\n");
    printf("1) Benjamin Franklin\n");
    printf("2) Michal Faraday\n");
    printf("3) Nicholas\n");
    printf("4) JJ\n");
    
    printf("Enter your Answer: ");
    scanf("%d", &ans4);
    if(ans4 == 1)
    {
        printf("Correct Answer\n");
        point4 = 5;
        printf("You have scored %d Marks\n\n", point4);

    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is 1\n");
        point4 = 0;
        printf("You have scored %d Mark\n\n", point4);
    }
     printf("5) How many colours are there in Rainbow?\n\n");
    printf("1) 9\n");
    printf("2) 10\n");
    printf("3) 7\n");
    printf("4) 5\n");
    
    printf("Enter your Answer: ");
    scanf("%d", &ans5);
    if(ans5 == 3)
    {
        printf("Correct Answer\n");
        point5 = 5;
        printf("You have scored %d Marks\n\n", point5);

    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is 3\n");
        point5 = 0;
        printf("You have scored %d Mark\n\n", point5);
    }
    total_points = point1 + point2 + point3 + point4 + point5;
       printf("%s", your_name);
        printf(" your Result is :%d Marks\n", total_points);

}   

    return 0;
}
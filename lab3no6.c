#include <stdio.h>

int main()
{
    int score;
    printf("Enter score:");
    scanf("%d", &score);
    if (score >= 68)
    {
        if (score >= 85)
        {
            printf("You got grade: A");
        }
        else if (score >= 75)
        {
            printf("You got grade: B");
        }
        else if (score >= 68)
        {
            printf("You got grade: C");
        }        
    }
    else
    {
        if (score >= 50)
        {
            printf("You got grade: D");
        }
        else
        {
            printf("You got grade: F");
        }
    }
    return 0;
}
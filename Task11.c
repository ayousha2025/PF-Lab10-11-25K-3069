#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][20] = {"Hello", "World", "C", "Programming", "Fun"};
    char target[20];
    int found = 0;
    printf("Enter a word you want to search: ");
    scanf("%s", target);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(words[i], target) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("%s found!", target);

    else
        printf("%s not found!", target);

    return 0;
}

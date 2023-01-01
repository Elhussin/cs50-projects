#include <cs50.h>
#include <stdio.h>
int loop_fun(int y);
int get_confirm(void);

int main(void)
{
    //  get and confiamr height
    int colman = get_confirm();

    // balding the barmide
    int func = loop_fun(colman);
}

//  function to get int between 1&8
int get_confirm(void)
{

   int height;

   do
     {
        height = get_int("Enter Height between  1:8: ");
    }
    while (height < 1 || height > 8);
    return height;
}

// functian to loop the buliding
int loop_fun(int h)
{
    int i, j, row;
    int heig = h - 1;

    for (i = 1; i <= h; ++i)
    {
        for (j = 0; j < heig; j++)
        {
            printf(" ");
        }

        for (row = 0; row < i; row++)
        {
            printf("#");
        }

        printf("  ");

        for (row = 0; row < i; row++)
        {
            printf("#");
        }

        heig--;
        printf("\n");
    }
    return 0;
}

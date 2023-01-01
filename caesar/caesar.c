#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// string doin(string y);
int main(int argc, string argv[])

{
    string   v=argc;
     v= atoi(string v);
printf("vis : %i",v);
printf("%s",argv[0]);
    string entery = get_string("Plaintext: ");

for (int i = 0, n = strlen(entery); i < n; i++)
    {
        int y = entery[i];


        // printf("%i\n", y);
        if (y>= 65 & y <=90)
        {
        y=(y-65+v)%26;
        y=y+65;

            printf("%c", y);
        }else if(y >= 97 & y <= 122)
        {
        y=(y-97+v)%97;
        y=y+97;
            // y = y + v;
            printf("%c", y);
        }

        // else if(y >=89 & y <=99 )
        // {
        //     y = y -v;
        //     printf("%c", y);
        // }
        // else if(y >=121 & y <=122 )
        // {
        //     y = y -v;
        //     printf("%c", y);
        // }else{
            // y = y+0;
            // printf("%c", y);
        }
    }
    // int y;
// string z=doin(entery);
// int printf(doin(entery));
//  printf("ciphertext :%c", y);
//  printf("\n");



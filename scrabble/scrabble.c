#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char LATTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int compute_score(string word);
int conifarm(int scor1, int scor2);
int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    int winner = conifarm(score1, score2);
    printf("%c", winner);
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int i, point, x, n, cabit, lat_v;

    int word_valu = 0;

    for (i = 0; i < strlen(word); i++)
    {
        // UPPPER CASE
        if (islower(word[i]))
        {
            cabit = toupper(word[i]);
        }
        else
        {
            cabit = word[i];
        }
        //   LOOP  FOR LATEER
        for (x = 0, n = strlen(LATTERS); x < n; x++)
        {
            lat_v = LATTERS[x];

            if (cabit == lat_v)
            {
                // LINK  LATTER WITH VALUE
                for (point = 0; point < 25; point++)
                {
                    if (point == x)
                    {
                        // CALCULTE  ENTERY VALUE
                        word_valu += POINTS[point];
                    }
                }
            }
        }
    }
    // RETUREN VALUE
    return word_valu;
}

int conifarm(int scor1, int scor2)
{

    if (scor1 > scor2)
    {
        printf("Player 1 wins!");
    }
    else if (scor1 < scor2)
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    }
    return 0;
}
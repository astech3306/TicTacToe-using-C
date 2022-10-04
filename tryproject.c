#include <stdio.h>

//Declaration of Global Variables
int boxnum, schoice, row, column, chance=0; //row and column for iteration, chance used for calculating which player should play. 
int check1 = 0, check2 = 0; //check1 for checking winning condition for Player 1 similarly check2 for Player-2.
char tictactoe[3][3]; //2-d array in which we store the player's move in form of X and O

//funtion for checking winning conditions
void win()
{
    int r, c,i;
    if (boxnum > 0 && boxnum < 4)
    {
        r = 0;
        for (c = 0; c < 3; c++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 1)
            {
                check1 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 2)
            {
                check1 = 1;
            }
            else
            {
                check1 = -1;
                break;
            }
        }
        if (check1 == 1)
        {
            printf("Player 1 wins!\n");
            return;
        }
        for (c = 0; c < 3; c++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 2)
            {
                check2 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 1)
            {
                check2 = 1;
            }
            else
            {
                check2 = -1;
                break;
            }
        }
        if (check2 == 1)
        {
            printf("Player 2 wins!\n");
            return;
        }
    }
    else if (boxnum > 3 && boxnum < 7)
    {
        r = 1;
        for (c = 0; c < 3; c++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 1)
            {
                check1 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 2)
            {
                check1 = 1;
            }
            else
            {
                check1 = -1;
                break;
            }
        }
        if (check1 == 1)
        {
            printf("Player 1 wins!\n");
            return;
        }
        for (c = 0; c < 3; c++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 2)
            {
                check2 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 1)
            {
                check2 = 1;
            }
            else
            {
                check2 = -1;
                break;
            }
        }
        if (check2 == 1)
        {
            printf("Player 2 wins!\n");
            return;
        }
    }
    else if (boxnum > 6 && boxnum < 10)
    {
        r = 2;
        for (c = 0; c < 3; c++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 1)
            {
                check1 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 2)
            {
                check1 = 1;
            }
            else
            {
                check1 = -1;
                break;
            }
        }
        if (check1 == 1)
        {
            printf("Player 1 wins!\n");
            return;
        }
        for (c = 0; c < 3; c++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 2)
            {
                check2 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 1)
            {
                check2 = 1;
            }
            else
            {
                check2 = -1;
                break;
            }
        }
        if (check2 == 1)
        {
            printf("Player 2 wins!\n");
            return;
        }
    }

    if (boxnum == 1 || boxnum == 4 || boxnum == 7)
    {
        c = 0;
        for (r = 0; r < 3; r++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 1)
            {
                check1 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 2)
            {
                check1 = 1;
            }
            else
            {
                check1 = -1;
                break;
            }
        }
        if (check1 == 1)
        {
            printf("Player 1 wins!\n");
            return;
        }
        for (r = 0; r < 3; r++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 2)
            {
                check2 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 1)
            {
                check2 = 1;
            }
            else
            {
                check2 = -1;
                break;
            }
        }
        if (check2 == 1)
        {
            printf("Player 2 wins!\n");
            return;
        }
    }

    else if (boxnum == 2 || boxnum == 5 || boxnum == 8)
    {
        c = 1;
        for (r = 0; r < 3; r++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 1)
            {
                check1 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 2)
            {
                check1 = 1;
            }
            else
            {
                check1 = -1;
                break;
            }
        }
        if (check1 == 1)
        {
            printf("Player 1 wins!\n");
            return;
        }
        for (r = 0; r < 3; r++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 2)
            {
                check2 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 1)
            {
                check2 = 1;
            }
            else
            {
                check2 = -1;
                break;
            }
        }
        if (check2 == 1)
        {
            printf("Player 2 wins!\n");
            return;
        }
    }

    else if (boxnum == 3 || boxnum == 6 || boxnum == 9)
    {
        c = 2;
        for (r = 0; r < 3; r++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 1)
            {
                check1 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 2)
            {
                check1 = 1;
            }
            else
            {
                check1 = -1;
                break;
            }
        }
        if (check1 == 1)
        {
            printf("Player 1 wins!\n");
            return;
        }
        for (r = 0; r < 3; r++)
        {
            if (tictactoe[r][c] == 'X' && schoice == 2)
            {
                check2 = 1;
            }
            else if (tictactoe[r][c] == 'O' && schoice == 1)
            {
                check2 = 1;
            }
            else
            {
                check2 = -1;
                break;
            }
        }
        if (check2 == 1)
        {
            printf("Player 2 wins!\n");
            return;
        }
    }

    if (boxnum == 1 || boxnum == 3 || boxnum == 5 || boxnum == 7 || boxnum == 9)
    {
        if (boxnum == 1 || boxnum == 9)
        {
            r = 0;
            c = 0;
            for (i = 1; i < 4; i++, r++, c++)
            {
                if (tictactoe[r][c] == 'X' && schoice == 1)
                {
                    check1 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 2)
                {
                    check1 = 1;
                }
                else
                {
                    check1 = -1;
                    break;
                }
            }
            if (check1 == 1)
            {
                printf("Player 1 wins!\n");
                return;
            }
            r = 0;
            c = 0;
            for (i = 1; i < 4; i++, r++, c++)
            {
                if (tictactoe[r][c] == 'X' && schoice == 2)
                {
                    check2 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 1)
                {
                    check2 = 1;
                }
                else
                {
                    check2 = -1;
                    break;
                }
            }
            if (check2 == 1)
            {
                printf("Player 2 wins!\n");
                return;
            }
        }

        else if (boxnum == 3 || boxnum == 7)
        {
            r = 0;
            c = 2;
            for (i = 1; i < 4; i++, r++, c--)
            {
                if (tictactoe[r][c] == 'X' && schoice == 1)
                {
                    check1 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 2)
                {
                    check1 = 1;
                }
                else
                {
                    check1 = -1;
                    break;
                }
            }
            if (check1 == 1)
            {
                printf("Player 1 wins!\n");
                return;
            }
            r = 0;
            c = 2;
            for (i = 1; i < 4; i++, r++, c--)
            {
                if (tictactoe[r][c] == 'X' && schoice == 2)
                {
                    check2 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 1)
                {
                    check2 = 1;
                }
                else
                {
                    check2 = -1;
                    break;
                }
            }
            if (check2 == 1)
            {
                printf("Player 2 wins!\n");
                return;
            }
        }

        else
        {
            r = 0;
            c = 0;
            for (i = 1; i < 4; i++, r++, c++)
            {
                if (tictactoe[r][c] == 'X' && schoice == 1)
                {
                    check1 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 2)
                {
                    check1 = 1;
                }
                else
                {
                    check1 = -1;
                    break;
                }
            }
            if (check1 == 1)
            {
                printf("Player 1 wins!\n");
                return;
            }
            r = 0;
            c = 0;
            for (i = 1; i < 4; i++, r++, c++)
            {
                if (tictactoe[r][c] == 'X' && schoice == 2)
                {
                    check2 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 1)
                {
                    check2 = 1;
                }
                else
                {
                    check2 = -1;
                    break;
                }
            }
            if (check2 == 1)
            {
                printf("Player 2 wins!\n");
                return;
            }
            r = 0;
            c = 2;
            for (i = 1; i < 4; i++, r++, c--)
            {
                if (tictactoe[r][c] == 'X' && schoice == 1)
                {
                    check1 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 2)
                {
                    check1 = 1;
                }
                else
                {
                    check1 = -1;
                    break;
                }
            }
            if (check1 == 1)
            {
                printf("Player 1 wins!\n");
                return;
            }
            r = 0;
            c = 2;
            for (i = 1; i < 4; i++, r++, c--)
            {
                if (tictactoe[r][c] == 'X' && schoice == 2)
                {
                    check2 = 1;
                }
                else if (tictactoe[r][c] == 'O' && schoice == 1)
                {
                    check2 = 1;
                }
                else
                {
                    check2 = -1;
                    break;
                }
            }
            if (check2 == 1)
            {
                printf("Player 2 wins!\n");
                return;
            }
        }
    }
}

//Function for Display the output after each chance

void PatternPrint()
{
    int r, c;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (c < 2)
            {
                if (tictactoe[r][c] == 79 || tictactoe[r][c] == 88)
                {
                    printf("%c | ", tictactoe[r][c]);
                }
                else
                {
                    printf("  | ", tictactoe[r][c]);
                }
            }
            else
            {
                if (tictactoe[r][c] == 79 || tictactoe[r][c] == 88)
                {
                    printf("%c", tictactoe[r][c]);
                }
                else
                {
                    printf(" ", tictactoe[r][c]);
                }
            }
        }
        if (r < 2)
        {
            printf("\n__________\n");
        }
        else
        {
            printf("\n");
        }
    }
}

//Function for Player-1 turns

void player1()
{
    printf("Player-1 turns\n");
    printf("Enter the box number, where you want to put your symbol: ");
    scanf("%d", &boxnum);
    if (boxnum > 0 && boxnum < 10)
    {
        if (boxnum < 4)
        {
            row = 1;
            column = boxnum;
            if (tictactoe[row - 1][column - 1] == 'X' || tictactoe[row - 1][column - 1] == 'O')
            {
                printf("This place is already occupied!\n");
                chance--;
                return;
            }
        }
        else if (boxnum < 7)
        {
            row = 2;
            column = (boxnum - 3);
            if (tictactoe[row - 1][column - 1] == 'X' || tictactoe[row - 1][column - 1] == 'O')
            {
                printf("This place is already occupied!\n");
                chance--;
                return;
            }
        }
        else
        {
            row = 3;
            column = (boxnum - 6);
            if (tictactoe[row - 1][column - 1] == 'X' || tictactoe[row - 1][column - 1] == 'O')
            {
                printf("This place is already occupied!\n");
                chance--;
                return;
            }
        }
        if (boxnum < 4)
        {
            row = 1;
            column = boxnum;
            if (schoice == 1)
            {
                tictactoe[row - 1][column - 1] = 'X';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
            else
            {
                tictactoe[row - 1][column - 1] = 'O';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
        }
        else if (boxnum < 7)
        {
            row = 2;
            column = (boxnum - 3);
            if (schoice == 1)
            {
                tictactoe[row - 1][column - 1] = 'X';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
            else
            {
                tictactoe[row - 1][column - 1] = 'O';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
        }
        else if (boxnum < 10)
        {
            row = 3;
            column = (boxnum - 6);
            if (schoice == 1)
            {
                tictactoe[row - 1][column - 1] = 'X';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
            else
            {
                tictactoe[row - 1][column - 1] = 'O';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
        }
    }
    else
    {
        printf("Please choose valid box number between 1 to 9\n");
        chance--;
    }
}

//Function for Player-2 turns

void player2()
{
    printf("Player-2 turns\n");
    printf("Enter the box number, where you want to put your symbol: ");
    scanf("%d", &boxnum);
    if (boxnum > 0 && boxnum < 10)
    {
        if (boxnum < 4)
        {
            row = 1;
            column = boxnum;
            if (tictactoe[row - 1][column - 1] == 'X' || tictactoe[row - 1][column - 1] == 'O')
            {
                printf("This place is already occupied!\n");
                chance--;
                return;
            }
        }
        else if (boxnum < 7)
        {
            row = 2;
            column = (boxnum - 3);
            if (tictactoe[row - 1][column - 1] == 'X' || tictactoe[row - 1][column - 1] == 'O')
            {
                printf("This place is already occupied!\n");
                chance--;
                return;
            }
        }
        else
        {
            row = 3;
            column = (boxnum - 6);
            if (tictactoe[row - 1][column - 1] == 'X' || tictactoe[row - 1][column - 1] == 'O')
            {
                printf("This place is already occupied!\n");
                chance--;
                return;
            }
        }
        if (boxnum < 4)
        {
            row = 1;
            column = boxnum;
            if (schoice == 1)
            {
                tictactoe[row - 1][column - 1] = 'O';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
            else
            {
                tictactoe[row - 1][column - 1] = 'X';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
        }
        else if (boxnum < 7)
        {
            row = 2;
            column = (boxnum - 3);
            if (schoice == 1)
            {
                tictactoe[row - 1][column - 1] = 'O';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
            else
            {
                tictactoe[row - 1][column - 1] = 'X';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
        }
        else if (boxnum < 10)
        {
            row = 3;
            column = (boxnum - 6);
            if (schoice == 1)
            {
                tictactoe[row - 1][column - 1] = 'O';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
            else
            {
                tictactoe[row - 1][column - 1] = 'X';
                PatternPrint();
                win();
                if (check1 == 1 || check2 == 1)
                {
                    return;
                }
            }
        }
    }
    else
    {
        printf("Please choose valid box number between 1 to 9\n");
        chance--;
    }
}

int main()
{
start:
    printf("1. X\n");
    printf("2. O\n");
    printf("Hey! Welcome to TicTacToe\n");
    printf("Player-1, choose a prefered shape for continue: ");
    scanf("%d", &schoice);
    if (schoice == 1)
    {
        printf("You Choose shape: X\n");
        printf("Player-1: X\nPlayer-2: O\n");
    }
    else if (schoice == 2)
    {
        printf("You Choose shape: O\n");
        printf("Player-1: O\nPlayer-2: X\n");
    }
    else
    {
        printf("Please choose correct option\n");
    }
    if (schoice == 1 || schoice == 2)
    {
        while (chance != 9)
        {
            chance++;
            if (chance % 2 != 0)
            {
                player1();
                if (check1 == 1 || check2 == 1)
                {
                    goto exit;
                }
            }
            else
            {
                player2();
                if (check1 == 1 || check2 == 1)
                {
                    goto exit;
                }
            }
        }
    }
    else
    {
        goto start;
    }
exit:
    if (check1 != 1 && check2 != 1)
    {
        printf("Tie Up!");
    }
    return 0;
}
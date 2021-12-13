
#include <stdio.h>
#include <conio.h>

int checkwin();
void board();
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

/* function for declararion of players and for marking player's mark on tik tac toe board and for checking 
   weather we have winner or game is tie */

int main()
{
    int player = 1, i, choice;
    char mark;    // x,o

    do
    {
        board();
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player-%d , Enter A Number To Mark '%c' : ", player,mark);
        scanf("%d", &choice);

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");
            player--;
            getch();
        }

        i = checkwin();
        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("   << PLAYER-%d WIN THE GAME >>   ", --player);
    else
        printf("         << GAME DRAW >>      ");
    getch();

    return 0;
}

// function to draw board of tik tac toe 
void board()
{
    printf("\n\tO X  Tic Tac Toe X O\n\n");

    printf("Player-1 ( X )  Vs  Player-2 ( O )\n\n\n");


    printf("\t     !     !     \n");

    printf("\t  %c  !  %c  !  %c \n", square[1], square[2], square[3]);

    printf("\t_____!_____!_____\n");
    printf("\t     !     !     \n");

    printf("\t  %c  !  %c  !  %c \n", square[4], square[5], square[6]);

    printf("\t_____!_____!_____\n");
    printf("\t     !     !     \n");

    printf("\t  %c  !  %c  !  %c \n", square[7], square[8], square[9]);

    printf("\t     !     !     \n\n");
}


// function for Checking Combination for winning 
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')
        return 0;
        
    else
        return  - 1;
}

//-------------------------------------------------------------------------

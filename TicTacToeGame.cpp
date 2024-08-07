#include "TicTacToeBoard.h"

int main()
{
    TicTacToe game;
    game.setBoard();
    
    int turnKeeper =0;
    char turn = 'X';
    int x, y;
    bool gameOn=true;
    while(gameOn)
    {
        cout << "Player "<<turn<<" enter move: ";
        cin >> x >> y;
        if(turnKeeper%2==0)
        {
            game.updateScore(x-1,y-1,turn);
            game.setBoard();
            turn= 'O';
            turnKeeper++;
        }
        else
        {
            game.updateScore(x-1,y-1,turn);
            game.setBoard();
            turn= 'X';
            turnKeeper++;
        }
     gameOn = game.updateWinner();
    }
    system("pause");
    return 0;
}
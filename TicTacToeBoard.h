#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class TicTacToe
{
    public:
        TicTacToe() {}
        void setBoard() const;
        void updateScore(int,int,char);
        bool updateWinner();
    private:
        char score[3][3] = {{' ', ' ', ' '},
                            {' ', ' ', ' '},
                            {' ', ' ', ' '}};
        

        
};
void TicTacToe::updateScore(int x,int y,char turn)
{
    int x2, y2;
    if(score[x][y] != ' ')
    {
        cout << "No, no you can't do that try again in a different spot: ";
        cin >> x2 >> y2;
        updateScore(x2-1,y2-1,turn);
    }
    else{
    score[x][y] = turn;
    }
}
void TicTacToe::setBoard() const
{
    cout << endl;
    cout << setw(4)<<right<<setfill(' ')<<"1"<< setw(5)<<right<<setfill(' ')<<"2"<<setw(5)<<right<<setfill(' ')<<setw(5)<<right<<setfill(' ')<<"3"<<endl;
    cout <<setw(6)<<right<<setfill(' ')<<"|"<< setw(5)<<right<<setfill(' ')<<"|"<<endl;
    cout <<"1" << setw(3)<<right<<setfill(' ')<<score[0][0]<<" |"<< setw(3)<<right<<setfill(' ')<<score[0][1]<< " |"<<setw(3)<<right<<setfill(' ')<<score[0][2]<<endl;
    cout <<setw(6)<<right<<setfill(' ')<<"____|"<< setw(4)<<right<<setfill(' ')<<"____|"<<setw(4)<<right<<setfill(' ')<<"____"<<endl;
    cout <<setw(6)<<right<<setfill(' ')<<"|"<< setw(5)<<right<<setfill(' ')<<"|"<<endl;
    cout <<"2" << setw(3)<<right<<setfill(' ')<<score[1][0]<<" |"<< setw(3)<<right<<setfill(' ')<<score[1][1]<< " |"<<setw(3)<<right<<setfill(' ')<<score[1][2]<<endl;
    cout <<setw(6)<<right<<setfill(' ')<<"____|"<< setw(4)<<right<<setfill(' ')<<"____|"<<setw(4)<<right<<setfill(' ')<<"____"<<endl;
    cout <<setw(6)<<right<<setfill(' ')<<"|"<< setw(5)<<right<<setfill(' ')<<"|"<<endl;
    cout <<"3" << setw(3)<<right<<setfill(' ')<<score[2][0]<<" |"<< setw(3)<<right<<setfill(' ')<<score[2][1]<< " |"<<setw(3)<<right<<setfill(' ')<<score[2][2]<<endl;
   
}
bool TicTacToe::updateWinner()
{
    if(score[0][0] == score[0][1] && score[0][0]==score[0][2]&&score[0][0] !=' ' && score[0][1] !=' '&& score[0][2] !=' ')
    {
        cout << "Player "<< score[0][0] << " wins!"<<endl;
        return false;
    }
    else if(score[1][0] == score[1][1] && score[1][0] == score[1][2] &&score[1][0] != ' ' &&score[1][1] != ' ' &&score[1][2] != ' ')
    {
        cout << "Player "<< score[1][0] << " wins!"<<endl;
        return false;
    }
    else if(score[2][0] == score[2][1] && score[2][0] == score[2][2] &&score[2][0] != ' ' &&score[2][1] != ' ' &&score[2][2] != ' ')
    {
        cout << "Player "<< score[2][0] << " wins!"<<endl;
        return false;
    }
    else if(score[0][0] == score[1][0] && score[0][0] == score[2][0]  &&score[0][0] != ' ' &&score[1][0] != ' ' &&score[2][0] != ' ')
    {
        cout << "Player "<< score[0][0] << " wins!"<<endl;
        return false;
    }
    else if(score[0][1] == score[1][1] && score[0][1] == score[2][1]  &&score[0][1] != ' ' &&score[1][1] != ' ' &&score[2][1] != ' ')
    {
        cout << "Player "<< score[0][1] << " wins!"<<endl;
        return false;
    }
    else if(score[0][2] == score[1][2] && score[0][2] == score[2][2] &&score[0][2] != ' ' &&score[1][2] != ' ' &&score[2][2] != ' ')
    {
        cout << "Player "<< score[0][2] << " wins!"<<endl;
        return false;
    }
    else if(score[0][0] == score[1][1] && score[0][0] == score[2][2] &&score[0][0] != ' ' &&score[1][1] != ' ' &&score[0][0] != ' ')
    {
        cout << "Player "<< score[0][0] << " wins!"<<endl;
        return false;
    }
    else if(score[2][0] == score[1][1] && score[2][0] == score[0][2] &&score[2][0] != ' ' &&score[1][1] != ' ' &&score[0][2] != ' ')
    {
        cout << "Player "<< score[2][0] << " wins!"<<endl;
        return false;
    }
    else if(score[0][0] != ' ' && score[0][1] != ' ' && score[0][2] != ' ' && score[1][0] != ' ' &&score[1][1] != ' ' &&score[1][2] != ' ' &&score[2][0] != ' ' &&score[2][1] != ' ' &&score[2][2] != ' ')
    {
        cout << "Tied Game, No one wins!"<<endl;
        return false;
    }
return true;
}
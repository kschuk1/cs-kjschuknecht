#include <iostream>
#include <string>

using namespace std;

void printDisplay(char board[3][3]){
    cout << "--0---1---2---3--\n";

    for(int row =0; row < 3; row++){
        cout << row << " | ";
        for(int col = 0; col <3; col++){
            cout << board[row][col]<< " | ";
        }
        cout << "\n----------------\n";
    }
}

int main(){
    char board [3][3] = {{' ',' ',' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player 
    for(int i=0; i< 9; i++){
        printDisplay(board);
        int row=0;
        int column=0;
        while(true){
            cout << " Enter a guess, in the for of row column: \n";
            cin >> row >> col;
            if(board[row][col] != ' '|| row <0 || row >2 || col <0 || col >3){
                cout << " please try again\n";
                cin.ignore(1000, '\n');

            }
            else {
                break;
            }
        
        }
        bool checkForWin(char board[3][3]){
            for(int i =0; i <3; i++){
                if(board[i][0](board[i][0] == board[i][1] and board[i][0] == board[i][2])){
                    cout << "winner\n";
                    return true;

                }
            }if(board[0][i] == board[1][i] and board[0][i] == board[2][i]){
                    cout << "winner\n";
                    return true;
        
            }

        board[row][col]= player;
        if(checkForWin(board)){
            cout << "player" << player << " Wins!\n";
            printDisplay(board);
            break;
        }
        player = (player =='X') ? 'O' : 'X';
    }

    
    cout << "in main" << board << endl;
    printDisplay(board);
    if (board == 9 && ! checkForWin(board, 'X')&& !checkForWin(board, 'O')){
        cout << " Drawn board!\n";

    }
}
return 0;
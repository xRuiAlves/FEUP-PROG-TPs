#include <iostream>
#include <windows.h>
#include "ttt.h"

using namespace std;


int main(){

    system("color 0E");

    char board[3][3] = {{'_','_','_'},{'_','_','_'},{'_','_','_'}};

    cout << "*** Bem-Vindo ao jogo do galo! ***" << endl << endl << endl;
    cout << "O jogo e jogado num tabuleiro 3x3. Os jogadores 1 e 2 jogam alternadamente, e   ganha quem conseguir uma fila ou diagonal de simbolos!\n\nPara fazer uma jogada" <<
            ", escreva a fila onde quer jogar seguido da coluna onde    quer jogar, separados por um espaco:\n\nExemplo:\n> 2 3" << endl << endl;
    pause();
    gameplay(1,board);


    return 0;
}



void gameplay(int n, char board[3][3]){


    if (n<=9){

        int x,y;

        system("CLS");
        draw(board);


        if(n%2==1){
            cout << "Jogador 1:" << endl;
        } else {
            cout << "Jogador 2:" << endl;
        }

        do{
            cout << "> " << flush;
            cin >> x >> y;
        } while(x<1 || x>3 || y<1 || y>3 || board[x-1][y-1]!='_');

        x-=1;
        y-=1;

        logics (n,x,y,board);

    } else {
        system("CLS");
        draw(board);
        cout << endl << endl << " *** EMPATE!! *** " << endl << endl << endl;
        pause();
        cin.get();
    }

}



void draw(char board[3][3]){
    cout << endl << "    " << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << flush;
    cout << endl;
    for (int i=0 ; i<3 ; i++){
        cout << "    " << (char)186 << "  " << flush;
        for (int j=0 ; j<3 ;j++){
            cout << board[i][j] << " " << flush;
        }
        cout << " " << (char)186 << endl;
    }
    cout << "    " << (char)186 << "         " << (char)186 << endl;
    cout << "    " << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl << endl;
}

void pause(){
    cout << "Prima 'ENTER' para continuar..." << flush;
    cin.get();
}

void logics (int n, int x, int y, char board[3][3]){
    if(n%2==1){
        board[x][y] = 'x';
    } else {
        board[x][y] = 'o';
    }

    if((board[0][0]=='x' && board[0][1]=='x' && board[0][2]=='x') || (board[1][0]=='x' && board[1][1]=='x' && board[1][2]=='x') ||
       (board[2][0]=='x' && board[2][1]=='x' && board[2][2]=='x') || (board[0][0]=='x' && board[1][0]=='x' && board[2][0]=='x') ||
       (board[0][1]=='x' && board[1][1]=='x' && board[2][1]=='x') || (board[0][2]=='x' && board[1][2]=='x' && board[2][2]=='x') ||
       (board[0][0]=='x' && board[1][1]=='x' && board[2][2]=='x') || (board[2][0]=='x' && board[1][1]=='x' && board[0][2]=='x')){
            system("CLS");
            draw(board);
            cout << endl << endl << " *** JOGADOR 1 GANHA!! *** " << endl << endl << endl;
            pause();
            cin.get();
       }
    else if((board[0][0]=='o' && board[0][1]=='o' && board[0][2]=='o') || (board[1][0]=='o' && board[1][1]=='o' && board[1][2]=='o') ||
            (board[2][0]=='o' && board[2][1]=='o' && board[2][2]=='o') || (board[0][0]=='o' && board[1][0]=='o' && board[2][0]=='o') ||
            (board[0][1]=='o' && board[1][1]=='o' && board[2][1]=='o') || (board[0][2]=='o' && board[1][2]=='o' && board[2][2]=='o') ||
            (board[0][0]=='o' && board[1][1]=='o' && board[2][2]=='o') || (board[2][0]=='o' && board[1][1]=='o' && board[0][2]=='o')){
                system("CLS");
                draw(board);
                cout << endl << endl << " *** JOGADOR 2 GANHA!! *** " << endl << endl << endl;
                pause();
                cin.get();
            }
    else{
        n+=1;
        gameplay(n,board);
    }
}

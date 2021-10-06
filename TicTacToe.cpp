#include <iostream>
#include <ctime>

using namespace std;

int currPlayer;
char currSymbol;

char board[5][5] = {{' ', '|', ' ', '|', ' '},
                    {'-', '+', '-', '+', '-'},
                    {' ', '|', ' ', '|', ' '},
                    {'-', '+', '-', '+', '-'},
                    {' ', '|', ' ', '|', ' '}};

void drawBoard()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
}

void addSymbol(char slot)
{
    switch (slot)
    {
    case '1':
        board[0][0] = currSymbol;
        break;
    case '2':
        board[0][2] = currSymbol;
        break;
    case '3':
        board[0][4] = currSymbol;
        break;
    case '4':
        board[2][0] = currSymbol;
        break;
    case '5':
        board[2][2] = currSymbol;
        break;
    case '6':
        board[2][4] = currSymbol;
        break;
    case '7':
        board[4][0] = currSymbol;
        break;
    case '8':
        board[4][2] = currSymbol;
        break;
    case '9':
        board[4][4] = currSymbol;
        break;
    default:
        cout << "Enter a number between 1-9 stupid!" << endl;
        break;
    }
}

char checkSymbol(char slot)
{
    switch (slot)
    {
    case '1':
        return board[0][0];

    case '2':
        return board[0][2];

    case '3':
        return board[0][4];

    case '4':
        return board[2][0];

    case '5':
        return board[2][2];

    case '6':
        return board[2][4];

    case '7':
        return board[4][0];

    case '8':
        return board[4][2];

    case '9':
        return board[4][4];

    default:
        return '#';
    }
}

int checkWinner()
{
    for (int i = 0; i < 3; i++)
    {
     if(board[2*i][0]!= ' ') {   
        if ((board[2*i][0] == board[2*i][2]) && (board[2*i][0] == board[2*i][4]))
        {
            cout << "Player " << currPlayer << " wins! Yay!\n";
            return currPlayer;
        }
     }
    }

    for (int i = 0; i < 3; i++)
    {
    if(board[0][2*i]!=' ') {
        if ((board[0][2 * i] == board[2][2 * i]) && (board[0][2 * i] == board[4][2 * i]))
        {
            cout << "Player " << currPlayer << " wins! Yay!\n";
            return currPlayer;
        }
    }
    }

   if(board[0][0]!=' ') {
    if ((board[0][0] == board[2][2]) && (board[0][0] == board[4][4]))
    {
        cout << "Player " << currPlayer << " wins! Yay!\n";
        return currPlayer;
    }
   }

    if ((board[0][4] == board[2][2]) && (board[0][4] == board[4][0]))
    {
        cout << "Player " << currPlayer << " wins! Yay!\n";
        return currPlayer;
    }

    return 0;
}

void game()
{
    cout << "Player 1 choose your symbol:" << endl;
    char symbol_p1, symbol_p2;
    cin >> symbol_p1;

    if(symbol_p1=='X') symbol_p2 = 'O';
    else symbol_p2 = 'X';
    
    char slot;

    drawBoard();
    int winner;

    for (int i = 1; i <= 9; i++)
    {
        if (i % 2 == 1)
        {
            currPlayer = 1;
            currSymbol = symbol_p1;
            cout << "Player " << currPlayer << " choose your slot\n";
            cin >> slot;
            if (checkSymbol(slot) != ' ')
            {
                cout << "Slot already taken\n";
                i--;
                continue;
            }
            addSymbol(slot);
        }
        else
        {
            currPlayer = 2;
            currSymbol = symbol_p2;
            cout << "Player " << currPlayer << " choose your slot\n";
            cin >> slot;
            if (checkSymbol(slot) != ' ')
            {
                cout << "Slot already taken\n";
                i--;
                continue;
            }
            addSymbol(slot);
        }
        drawBoard();
        winner = checkWinner();
        if (winner == 1 || winner == 2)
        {
            return;
        }
    }
}

void gameVsCpu()
{
    cout << "Player 1 choose your symbol: (X or O are the symbols as decided by the Universal Tic Tac Toe association" << endl;
    char symbol_p1, symbol_p2;
    cin >> symbol_p1;

    if (symbol_p1 == 'X'||symbol_p1=='x')
        symbol_p2 = 'O';
    else
        symbol_p2 = 'X';

    char slot;

    drawBoard();
    int winner;

    for (int i = 1; i <= 9; i++)
    {
        if (i % 2 == 1)
        {
            currPlayer = 1;
            currSymbol = symbol_p1;
            cout << "Player " << currPlayer << " choose your slot\n";
            cin >> slot;
            if (checkSymbol(slot) != ' ')
            {
                cout << "Slot already taken\n";
                i--;
                continue;
            }
            addSymbol(slot);
        }
        else
        {
            currPlayer = 2;
            currSymbol = symbol_p2;
            slot = 49 + rand() % 9;
            if (checkSymbol(slot) != ' ')
            {
                i--;
                continue;
            }
            addSymbol(slot);

            drawBoard();
        }

        winner = checkWinner();
        if (winner == 1 || winner == 2)
        {
            return;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));

    drawBoard();
    int input;
    cout << "Choose:\n1. If you want to play VS CPU\n2. If you want to play VS player.\n";
    cin >> input;

    if (input == 1)
        gameVsCpu();
    else if (input == 2)
        game();
    else
        cout << "I said choose 1 or 2 you illiterate fuck\n";

    return 0;
}
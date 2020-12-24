#include <iostream>
#include <curses.h>
//#include <ncurses.h>

using namespace std;

void input();

bool gameOver;
enum eDirecton {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirecton dir;


int main(int argc, const char * argv[]) {
    
    while(true) {
        //input();
        int temp = 0;
        temp = getchar();
        cin.ignore();
        cout<<temp<<endl;
    }
    
    return 0;
}

void input() {
    //if() {
    int temp = 0;
    
        switch(temp = getchar()) {
            case 'a':
                cin.ignore();
                dir = LEFT;
                cout<<"LEFT"<<endl;
                break;
            case 'd':
                dir = RIGHT;
                cout<<"RIGHT"<<endl;
                break;
            case 'w':
                dir = UP;
                cout<<"UP"<<endl;
                break;
            case 's':
                dir = DOWN;
                cout<<"DOWN"<<endl;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    //}
}

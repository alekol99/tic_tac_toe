#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;


int main() {
    int  i, j, c = 1, x, o, win;
    //массив для определения поля
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
    //массив игры
    char b[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
        for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        cout << b[i][j];
      }
      cout << endl;
    }
    //начало цикла выполнения игры
    while (c != 0){
      //введение Х
    cout << "Vvedi pole x" << endl;
    cin >> x;
    for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
    while (x > 9 || x < 1 ) { 
       cout << "try again" << endl;
       cin >> x;
    }
      }
    }
    //ввод Х
     for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        if (x == a[i][j]){
           b[i][j] = 'X';
        }
      }
    }
    //вывод после введения Х и проверка на победу
    for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        if((b[i][j] == 'X' & b[i][j+1] == 'X' & b[i][j+2] == 'X') || (b[i][j] == 'X' &  b[i+1][j] == 'X' & b[i+2][j] == 'X') || (b[0][0] == 'X' & b[1][1] == 'X' & b[2][2] == 'X') || (b[0][2] == 'X' & b[1][1] == 'X' & b[2][0] == 'X')){
          win = 1;
          c = 0;
          cout << b[i][j] << " ";
        }
        else cout << b[i][j] << " ";
      }
      cout << endl;
    }
    if(c == 0) {break;}
    cout << endl;
    //введение О
    cout << "Vvedi pole O" << endl;
    cin >> o;
    for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
    while (o > 9 || o < 1 ) { 
       cout << "try again" << endl;
       cin >> o;
    }
      }
    }
    //ввод О
    for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        if (o == a[i][j]){
           b[i][j] = 'O';
        }
      }
    }
    cout << endl;
    //вывод после введения О и проверка на победу
    for(i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
         if((b[i][j] == 'O' & b[i][j+1] == 'O' & b[i][j+2] == 'O') || (b[i][j] == 'O' &  b[i+1][j] == 'O' & b[i+2][j] == 'O') || (b[0][0] == 'O' & b[1][1] == 'O' & b[2][2] == 'O') || (b[0][2] == 'O' & b[1][1] == 'O' & b[2][0] == 'O')){
          win = 0;
          c = 0;
          cout << b[i][j] << " ";
        }
        else cout << b[i][j] << " ";
      }
      cout << endl;
    }
    if(c == 0){ break;}

    }
        if(win == 1)  cout << "win X" << endl;
    else if(win == 0) cout << "win O" << endl;
//  return 0;
}
#include <iostream>
#include <math.h>
#include <string>





using namespace std;

const int ROWS = 3;

const int COLS = 3;

string name, name2;


int count1;

//void print2DArr(int[][COLS] , const int);


void print2DArr(char arr[][COLS], const int numRows){


count1=0;

    for(int i=0;i< numRows ; i++ ){
        for (int j = 0 ; j < COLS ; j++ ){



            if(arr[i][j]!='X' && arr[i][j]!='O'){
                  arr[i][j]='-';
            }
            if(arr[i][j]=='X' || arr[i][j]=='O'){
                count1++;
            }

            cout<<   arr[i][j] <<"\t";









    }
    cout<<endl;


}
}
char checkWin(char arr[3][3]){
    if((arr[0][0]=='X' || arr[0][0]=='O') && arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2]){
        if(arr[0][0]=='O'){
            cout<<name<<" Wins!"<<endl;
return 0;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 0;
    }

    }
    if((arr[1][0]=='X' || arr[1][0]=='O') && arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2]){
        if(arr[1][0]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 0;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 0;
    }
    }
    if((arr[2][0]=='X' || arr[2][0]=='O') && arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2]){
        if(arr[2][0]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 0;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 0;
    }
    }
    if((arr[0][0]=='X' || arr[0][0]=='O') && arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0]){
        if(arr[0][0]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 1;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 1;
    }
    }
    if((arr[0][1]=='X' || arr[0][1]=='O') && arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1]){
        if(arr[0][1]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 1;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 1;
    }
    }
    if((arr[0][2]=='X' || arr[0][2]=='O') && arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2]){
        if(arr[0][2]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 1;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 1;
    }
    }
    if((arr[0][0]=='X' || arr[0][0]=='O') && arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]){
        if(arr[0][0]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 1;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 1;
    }
    }
    if((arr[2][0]=='X' || arr[2][0]=='O') && arr[2][0]==arr[1][1] && arr[1][1]==arr[0][2]){
        if(arr[2][0]=='O'){
            cout<<name<<" Wins!"<<endl;
            return 1;
        }
        else{
            cout<<name2<<" Wins!"<<endl;
            return 1;
    }
    }
    }




int main()
{
 char matrix[ROWS][COLS]  ;
 bool a=true;
 bool b=true;
 bool c=true;
 bool d=true;
//int put some vals

int x, y, x2, y2;

matrix[2][2]='-';


cout<<"Player 1: Enter Your Name: "<<endl;
cin>>name;

cout<<"Player 2: Enter Your Name: "<<endl;
cin>>name2;

while(count1<9){
while(a==true || c==true){

cout<<name<<": Enter The X Coordinate You Want Then Click Enter and Input The Y Coordinate (O)"<<endl;
cin>>x;
cin>>y;
if(x>2 || y>2){
    cout<<"No Numbers Greater Than 2, Try Again"<<endl;
    a=true;
}
else
{
    c=false;
}
if(matrix[x][y]=='X' || matrix[x][y]=='O'){

    cout<<"Already Filled, Try Again"<<endl;
}
else
{
    a=false;
}

}

a=true;
c=true;
matrix[x][y]='O';

print2DArr(matrix, ROWS);
if(checkWin(matrix)==1){
    return 0;
}

while(b==true || d==true){

cout<<name2<<": Enter The X Coordinate You Want Then Click Enter and Input The Y Coordinate (X)"<<endl;
cin>>x2;
cin>>y2;
if(x2>2 || y2>2){
    cout<<"No Numbers Greater Than 2, Try Again"<<endl;
    b=true;
}
else
{
    d=false;
}
if(matrix[x2][y2]=='X' || matrix[x2][y2]=='O'){

    cout<<"Already Filled, Try Again"<<endl;
}
else
{
    b=false;
}

}


b=true;
d=true;



matrix[x2][y2]='X';

print2DArr(matrix, ROWS);
if(checkWin(matrix)==1){
    return 0;
}
}










return 0;
}

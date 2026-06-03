#include <iostream>
using namespace std;
int main(){

cout<<"============================================"<<endl;
cout<<" <<WITAJ W GRZE - LABIRYTN ZE SKARBAMI!!!>> "<<endl;
cout<<"      || AUTOR: SZYMON JASINSKI 1D || "<<endl;
cout<<"============================================"<<endl;
cout<<endl;
cout<<endl;

int rozmiar=10;
int puste_pole=' ';
int plansza[10][10] = {
{0,0,0,0,0,0,0,0,0,0},
{0,1,' ',' ',0,' ',' ',' ',5,0},
{0,' ',0,' ',0,' ',0,0,' ',0},
{0,5,0,' ',' ',' ',' ',0,' ',0},
{0,0,0,' ',0,' ',0,' ',0},
{0,' ',' ',' ',0,' ',' ',' ',' ',0},
{0,' ',0,' ',0,0,0,0,' ',0},
{0,' ',0,' ',' ',' ',' ',0,' ',0},
{0,5,0,0,0,0,5,0,5,0},
{0,0,0,0,0,0,0,0,0,0},
};
  for(int x=0;x<rozmiar;x++){
    for(int y=0;y<rozmiar;y++){
        if(plansza[x][y]==puste_pole){
            cout<<"  ";
        }
        else{
            cout<<plansza[x][y]<<" ";
        }
    }
        cout<<endl;
  }









}

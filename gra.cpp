#include <iostream>
#include <conio.h>
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
{0,' ',0,' ',' ',' ',5,0,' ',0},
{0,5,0,0,0,0,' ',0,5,0},
{0,0,0,0,0,0,0,0,0,0},
};

int graczX=1;
int graczY=1;

int maks_skarbow=5;
int liczba_skarbow=0;
int stanGry=0; //0-gramy, 1-wygrana, 2-przegrana 3-wyjscie z gry

while(stanGry==0){

cout<<"---------------------------------------------------------------"<<endl;
cout<<"                    Gramy dalej..."<<endl;
cout<<"                 Zebrane skarby: "<<liczba_skarbow<<"/5"<<endl;
cout<<"Aby wygrac do zebrania zostalo ci jeszcze "<<5-liczba_skarbow<<" skarbow do zebrania"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<endl;

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
  cout<<endl;
  cout<<endl;

  char klawisz=_getch();

  int ruchowaX=graczX;
  int ruchowaY=graczY;

  if(klawisz=='x'){
    stanGry=3;
  }

  if(klawisz=='w')ruchowaX--;
  if(klawisz=='s' )ruchowaX++;
  if(klawisz=='a')ruchowaY--;
  if(klawisz=='d')ruchowaY++;

  if(plansza[ruchowaX][ruchowaY]==0){
    stanGry=2;
  }
  else{
    if(plansza[ruchowaX][ruchowaY]==5){
        liczba_skarbow++;
        if(liczba_skarbow==maks_skarbow){
        stanGry=1;

    }
    if(liczba_skarbow<maks_skarbow){
        cout<<"<<<<<<<<<<<<<< Wow, gratulacje znalazles skarb >>>>>>>>>>>>>>"<<endl;
    }

    }
    plansza[graczX][graczY] = ' ';
            graczX = ruchowaX;
            graczY = ruchowaY;
            plansza[graczX][graczY] = 1;
  }
  }

if(stanGry==3)
    return 0;
if(stanGry==1){
        cout<<endl;
    cout<<"================LABIRYNT ZE SKARBAMI====================="<<endl;
cout<<endl;
    cout<<"                    WYGRANA!!!"<<endl;
    cout<<" Gratulacje, udalo ci sie zebrac wszytskie ukryte skarby"<<endl;
    cout<<"               Autor: Szymon Jasinski"<<endl;
    cout<<endl;
    cout<<"========================================================="<<endl;
cout<<"Dziekuje za udzial w grze ;)"<<endl;



}
if(stanGry==2){
    cout<<endl;
    cout<<"================LABIRYNT ZE SKARBAMI====================="<<endl;
cout<<endl;
    cout<<"                    GAME OVER!!!"<<endl;
    cout<<"     Niestety uderzyles w sciane i przegrales"<<endl;
    cout<<"               Autor: Szymon Jasinski"<<endl;
    cout<<endl;
    cout<<"========================================================="<<endl;
cout<<"Dziekuje za udzial w grze ;)"<<endl;
}
}








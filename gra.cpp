#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main(){

cout<<"============================================"<<endl;
cout<<" <<WITAJ W GRZE - LABIRYTN ZE SKARBAMI!!!>> "<<endl;
cout<<"      || AUTOR: SZYMON JASINSKI 1D || "<<endl;
cout<<"============================================"<<endl;
cout<<endl;
cout<<"INSTRUKCJA GRY"<<endl;
cout<<"1; Gracz to cyfra 1 porusza sie uzywajac przyciskow WASD."<<endl;
cout<<"2; Aby wygrac gracz musi zebrac 5 skarbow oznaczine na planszy cyframi 5, nie wchodzac przy tym w zadna sciane."<<endl;
cout<<"3; Wejscie w sciane oznaczona na plaszy cyfra 0 bedzie skutkowalo przegrana."<<endl;
cout<<"4; Podczas rozgrywki gracz moze nacisnac x, aby wyjsc z gry."<<endl;
cout<<"5; Aby rozpoczac gre nalezy nacisnac dowolny przycisk na klawiaturze."<<endl;
cout<<endl;
cout<<endl;

_getch();

int rozmiar=10;
int puste_pole=' ';
int plansza[10][10] = {
{0,0,0,0,0,0,0,0,0,0},
{0,1,' ',' ',0,' ',' ',' ',5,0},
{0,' ',0,' ',0,' ',0,0,' ',0},
{0,5,0,' ',' ',' ',' ',0,' ',0},
{0,0,0,' ',0,' ',0,' ',0,0},
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
int licznik_komunikatu=0;
while(stanGry==0){
        system("cls");

        if(licznik_komunikatu == 1){
    cout<<"<<<<<<<<<<<<<< Wow, gratulacje znalazles skarb >>>>>>>>>>>>>>"<<endl;
    licznik_komunikatu=0;

}


if(liczba_skarbow==0){
    cout<<"---------------------------------------------------------------"<<endl;
cout<<"                    Gramy dalej..."<<endl;
cout<<"                 Zebrane skarby: "<<liczba_skarbow<<"/5"<<endl;
cout<<"Aby wygrac do zebrania zostalo ci jeszcze "<<5-liczba_skarbow<<" skarbow do zebrania"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<endl;
}
else if(liczba_skarbow==1){
cout<<"---------------------------------------------------------------"<<endl;
cout<<"                    Gramy dalej..."<<endl;
cout<<"                 Zebrane skarby: "<<liczba_skarbow<<"/5"<<endl;
cout<<"Aby wygrac do zebrania zostalo ci jeszcze "<<5-liczba_skarbow<<" skarby do zebrania"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<endl;
}
else if(liczba_skarbow==2 || liczba_skarbow==3){
    cout<<"---------------------------------------------------------------"<<endl;
cout<<"                    Gramy dalej..."<<endl;
cout<<"                 Zebrane skarby: "<<liczba_skarbow<<"/5"<<endl;
cout<<"Aby wygrac do zebrania zostalo ci jeszcze "<<5-liczba_skarbow<<" skarby do zebrania"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<endl;
}
else if(liczba_skarbow==4){
     cout<<"---------------------------------------------------------------"<<endl;
cout<<"                    Gramy dalej..."<<endl;
cout<<"                 Zebrane skarby: "<<liczba_skarbow<<"/5"<<endl;
cout<<"Aby wygrac do zebrania zostalo ci jeszcze "<<5-liczba_skarbow<<" skarb do zebrania"<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<endl;
}


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
        licznik_komunikatu = 1;
        if(liczba_skarbow==maks_skarbow){
        stanGry=1;

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








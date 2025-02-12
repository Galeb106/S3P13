#include "Trafficlight.h"
using namespace std;
Trafficlight::Trafficlight(){
  button1=0;
  button1=0;
}
Trafficlight::stbutton1(int x){
  button1=x;
  cout << "Кнопка 1 нажата?" << " " << button1;
  if(x==2){
    cout << "Горит красный для пешеходов";
  }
}
Trafficlight::stbutton2(int y){
  power=y;
  if(power==1){
    cout << "Загорается зелёный для пешеходов";
  }
  else if(power==2){
    cout << "Загора";
  }
  else{
    cout << "Мощность высокая\n";
  }
}

Trafficlight::Trafficlight(int x,int y){
  if(x<=3 & y<=3){
    time=x;
    power=y;
  }
}

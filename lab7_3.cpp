#include<iostream>

using namespace std;

int adiff(int a, int b){
    int x,y,i=0;
    while(i == 0){
        if(a >= 360 ){
        a=a-360;
    }
    else{
        i++;
    }
    }
    i=0;
    while(i == 0){
        if(b >= 360 ){
        b=b-360;
    }
    else{
        i++;
    }
    }

    x=a-b;
    y=(360-b)+a;
    if(x < 0){
        x=x*-1;
    }
    if(y < 0){
        y=y*-1;
    }
    if(x <= y){
        return x;
    }else{
        return y;
    }
}

int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";
  return 0;
}

#include<iostream>
#include<cmath>

using namespace std;

int adiff(int A,int B){
  int C;

  if(A >= 360 || A <= -360){
    A = A%360;
  }

  if(B >= 360 || B <= -360){
    B = B%360;
  }

    C = abs(A-B);


  if(abs(A-B) > 180){
    C = 360 -abs(A-B);
  }

  return C ; 
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}

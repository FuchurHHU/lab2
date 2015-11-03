#include <iostream>

using namespace std;

int main (){
  int N1 = 30; //Number of iterations for x that are cut off
  int N2 = 100; //number of iterations for x
  double rmax = 4.0; //Number of iterations for r
  double dr = 0.01;
  
  for (double r=0;r<=rmax; r+=dr){
     double x  = 0.5;
      for( int i=1; i<N1;i++){
      
	x = x*r*(1-x);

    }
    for( int i=N1; i<=N2;i++){
      
	x = x*r*(1-x);
	cout <<r<<" "<< x << endl;
    }
    
  }
   


return 0;
}

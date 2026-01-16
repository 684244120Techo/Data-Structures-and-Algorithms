#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  // Create an array of integers
  string N[12] ={"Techo","Frame","Tonnam","Tin","Te","Jonas","Pun","Champ","Ao"};
  string n[12] ={"เตโช","เฟรม","ต้นน้ำ","ติน","เต","โจนัส","ปั่น","แชมป์","โอ้"};
   int z = sizeof(N)/sizeof(N[0]);

cout << "===========================" << endl;
  for(const string&name : N){
 	cout << name <<endl;
  }    
  cout << "===========================" << endl;
  sort(N,N+z);
  for(const string&name : N){
 	cout << name <<endl;
  }    
  cout << "===========================" << endl;
  for(const string&name : n){
 	cout << name <<endl;
  }    
  cout << "===========================" << endl;
  sort(n,n+z);
  for(const string&name : n){
 	cout << name <<endl;
  }    


  return 0;
}

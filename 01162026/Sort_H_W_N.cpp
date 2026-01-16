#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  // Create an array of integers
  int R1[12] = {173,173,165,174,180,185,170,185};
  int x = sizeof(R1) / sizeof(R1[0]);
  
  int W1[12] = {60,70,95,78,53,120,100,100,60};
  int y = sizeof(W1) / sizeof(W1[0]);
  
  string N1[12] ={"เตโช","เฟรม","ต้นน้ำ","ติน","เต","โจนัส","ปั่น","แชมป์","โอ"};
  int z = sizeof(N1) / sizeof(N1[0]);
  
sort(R1,R1+x);  
  for (int num : R1) {
    cout << num << "\n";
  }
cout << "===========================" << endl;
sort(R1,R1+x,greater <int>());  
  for (int num : R1) {
    cout << num << "\n";
  }
cout << "===========================" << endl;
sort(W1,W1+y);
  for(int Num : W1){
  	cout << Num << endl;
  }
cout << "===========================" << endl;
sort(W1,W1+x,greater <int>());  
  for(int Num : W1){
  	cout << Num << endl;
  }
cout << "===========================" << endl;
  for(const string&name : N1){
 	cout << name <<endl;
  }    
  cout << "===========================" << endl;
  sort(N1, N1 + z);
  for(const string&name : N1){
 	cout << name <<endl;
  }    
  return 0;
}

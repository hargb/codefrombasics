#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s ="hi this is  harsh here";
  stringstream ss(s);
  string temp;
  while(ss>>temp){
    cout<<temp<<endl;
  }
}
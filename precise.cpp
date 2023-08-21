#include <iostream>
#include <string>
using std::string;


string myfun(){
  
  using std::cin; // but nothing else in iostream
  string name;
  getline(cin,name);
 // cout<<"Gotcha"<<endl;
  return name;
  
}

int main() {
  using  std::cout;
  using std::endl;
  using std::cin;
  
  string name;
  int val;
  
  cout << "What is your name: "<<endl;
  name = myfun();
  cout << "Glad to me you, "<<name<<endl;
  cin>>val;
  
}

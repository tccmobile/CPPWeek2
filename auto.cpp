// C++ program to demonstrate working of auto
// and type inference

#include <iostream>
using namespace std;

int main()
{

  
	//auto a; this line will give error
	// because 'a' is not initialized at
	// the time of declaration
	auto a=33;
  const string type = "Pi";
	// see here x ,y,ptr are
	// initialised at the time of
	// declaration hence there is
	// no error in them
	auto x = 4;
	auto y = 3.37;
	auto ptr = &x;
  cout<<x+y<<endl;
	cout << typeid(x).name() << endl
		<< typeid(y).name() << endl
		<< typeid(ptr).name() << endl;

  if (typeid(ptr).name()==type){
    cout<<"Its a pointer to an int!"<<endl;
  }

	return 0;
}


#include <iostream>
using namespace std;
int main()
{
int x ;
cout << "enter the temp\n";
cin >> x ;

if(x <= 0)
cout << "very cold\n ";
else if(x > 0 && x <=10)
cout << "cold \n " ;
else if(x >10 && x <= 25 )
cout << "normal\n";
else if(x >25 && x <=40 )
cout << " warm\n ";
else
cout << "very hot\n";
return 0 ;





}
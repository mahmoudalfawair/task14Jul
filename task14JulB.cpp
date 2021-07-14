 #include <iostream>
 using namespace std;
 int main()
 {
    cout << "enter 3 int number\n";
    int x1 ;
    cin >> x1 ;
 int x2 ;
    cin >> x2;
 int x3 ;
    cin >> x3 ;
if(x1 > x2 && x1 > x3)
cout << "the highest number is " << x1 << endl ;
if(x1 < x2 && x1 < x3 )
cout << "the lowest number is " << x1 << endl ;


if(x2 > x1 && x2 > x3)
cout << "the highest number is " << x2 << endl ;
if(x2 < x1 && x2 < x3 )
cout << "the lowest number is " << x2 << endl;



if(x3 > x1 && x3 > x2)
cout << "the highest number is " << x3 << endl ;
if(x3 < x2 && x3 < x2 )
cout << "the lowest number is " << x3 << endl ;
return 0;

 }

// Alfonzo Galvan
// CSCE-121-502
// Due: October,8,2015
// hw4pr3.cpp

#include "std_lib_facilities_4.h"
#include "Chrono.h"

int main()
try{

int y;
int m;
int d;
cout << "May I have a date in the form of year, month, day?\n";
cin >> y >> m >> d;
Chrono:: Date waht(y,Chrono::Date::Month(m),d);

cout << "Tomorrow is " <<++waht<< "\n";
 return 0;
}
catch(exception& e){
cerr<< "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch(...){
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}


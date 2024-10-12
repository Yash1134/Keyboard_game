#include <iostream>
#include <chrono>
#include <conio.h>

using namespace std;
using namespace chrono;
int main() {
   cout << "Click Space as many times as you can" << endl;
   cout<<"Press any Key To start:";
   _getch();
   cout<<endl;

   auto start = steady_clock::now();
   auto end=start+seconds(60);
   int space_count=0;

   while (steady_clock::now() < end) {
    if (_kbhit()) {
     char ch=_getch();
     if (ch==' ') {
        space_count++;
     }
    }
   }
   cout<<endl<<"Time UP! You pressed the spacebar " <<space_count<<" Times";
   float clickspersec=space_count/60;
   cout<<endl<<"And Pressed The SpaceBar " << clickspersec << " Times per second averagely";
   return 0;
}
#include<iostream>
using namespace std;

class Test {
private:
   float x, y;
public:

   void input() {
       cout << "Enter two numbers x and y : ";
       cin >> x>>y;
   }

   friend void find(Test t);
};

void find(Test t) {
   if (t.x > t.y) {
       cout << "Largest number is:" << t.x;
   } 
   else if(t.x==t.y){
   	cout<<"x nad y both are largest number ";
   }
   else {
       cout << "smallest number is:" << t.y;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

   return 0;
}

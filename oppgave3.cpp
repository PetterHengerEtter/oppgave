
#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

int main(){

    // Initializing random number generator in C++

    srand(time(0));

    cout<<"Random numbers between 1 and 100:"<<endl;

    for(int x=0;x<1;x++)

        cout << 1+ (rand() % 100) <<"\n"; 

    return 0; 

}
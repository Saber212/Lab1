# include <iostream>
using namespace std; 
int main(){
    int x = 0; // defining an integer 0
    while(x<10){ // Using a while loop to print Hello World 10 times. 
        x = x + 1; // x is incrementing in order to follow the condition above
        cout << "Hello, World!\n"; //printing Hello World 10 times
    }
    int n = 0; 
    // We can also use another alternative of using a while loop
    do // using the command do where the code is execuded
    {
        n = n + 1; 
        cout << "Hello World\n";
    } while (n<10); // at the end we writie the condition in the while loop 
    //using a forloop
    int y  = 0; // defining a integer 0
    for(y; y<10; y = y+1){ // using a forloop with condition that y should be less than 10
        cout << "Hello World\n"; // Hello world is printed 10 times.
    }
}
# include <iostream>
using namespace std; 
int main(){
    string q1 = "What is your name?\n";
    string answer;   
    int number; 
    float height; 
    cout << q1; 
    cin >> answer;
    cout << "Okay "<<answer<<". How old are you?\n";
    cin >> number; 
    cout << "What is your gender?\n"; 
    cin >> answer;
    cout << "Are you married\n"; 
    cin >> answer; 
    cout << "How long are you?\n"; 
    cin>> height;
}
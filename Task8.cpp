#include <iostream>
using namespace std; 

int main(){
    int num; 
    cout<<"Enter a number: \n"; 
    cin>>num; 
    for(int i = 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    char input, alph = 'A'; 
    cin>>input; 

    for(int i = 1; i<=(input-'A'+1); ++i){
        for(int j = 1;j<=i ; ++j){
            cout<<alph; 
        }
        ++alph; 
        cout<<endl;
    }
    return 0;
}
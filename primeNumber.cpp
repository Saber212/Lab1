# include <iostream> 
using namespace std; 
int main(){
    int x,y,n; 
    bool isPrime = true; 

    cout << "Enter a number: "; 
    
    for(cin>>x; x<1000; ++x){
        if(x==1||x==0){
            isPrime = false;
            cout<<"You should enter a number larger than 0 and 1."<<endl;
            break;
        }
        for(y=2; y<1000; y++){
            if(x!=y){            
                if(x%y==0){
                isPrime = false; 
                break;
                }
            }
            else{
                cout<<x<<endl;
            }
        }
        
    }
    
}
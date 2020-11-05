# include <iostream> 
using namespace std; 
int main(){
    int x,y,n; 
    bool isPrime = true; 

    cout << "Enter a number: "; 
    
    for(cin>>x; x<100; ++x){
        if(x==1||x==0){
            isPrime = false;
            break;
        }
        for(y=2; y<100; y++){
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
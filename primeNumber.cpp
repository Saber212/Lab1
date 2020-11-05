# include <iostream> 
using namespace std; 
int main(){
    int x, y,n, b; 
    bool isPrime = true; 
    cout<< "Enter a final number:\n"<<"n = ";
    cin>>n;
    cout << "Enter a start number:\n"<<"x = "; 
    cin >> b; 
    if(n<b){
        cout<< "ERROR! n must be larger than b!"<<endl;
    }
    for(x=b; x<n; ++x){
        if(x>n){
            cout << "ERROR! n must be larger than x"<<endl;
        }
            if(x==1||x==0){
                isPrime = false;
                cout<<"You should enter a number larger than 0 and 1."<<endl;
                break;
        }
           for(y=2; y<n; y++){
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
# include <iostream> 
using namespace std; 
int main(){
    int x, y,n, b; // defining integer type variables 
    bool isPrime = true; // defining a true boolean
    cout<< "Enter a final number:\n"<<"n = "; 
    cin>>n; //entering a number to loop through
    cout << "Enter a start number:\n"<<"x = "; 
    cin >> b; //entering an intial number for the loop
    if(n<b){ // the program breakes when n is larger than b
        cout<< "ERROR! n must be larger than b!"<<endl; //Error message
    }
    for(x=b; x<n; ++x){
            if(x==1||x==0){ //if statement if the entered intial number is 1 or 0.
            // the program will break. Since we know that 
                isPrime = false;
                cout<<"You should enter a number larger than 0 and 1."<<endl;
                break;
        }
           for(y=2; y<n; y++){// we create another forloop for the 
           //values that can be used for looking if x is a primenumber
                if(x!=y){   //x should not be equal to y since they can devide
                //each other and it is a property of a prime number         
                    if(x%y==0){ //if the modulus of x and y is 0 then the number is not a 
                    //prime number
                    isPrime = false; 
                    break;
                        }
                }
                else{//here we print out the prime numbers
                    cout<<x<<endl;
                    }
            }
        }
}
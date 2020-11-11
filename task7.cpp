# include <iostream>
using namespace std; 

int main(){
    int x, count, i,n,u,y; //Defining integers
    cout<<" Enter a number: "; //asking for a number
    cin>>n; //entering a number from the terminal
     // Condition for positive numbers
    if(n>=0){ 
        int arr[n];
        //Creating an array with n positions.

        x = sizeof(arr)/sizeof(arr[0]); //Calculating the size of the array
        count = x + 1; 
        arr[0] = 0; //putting 0 in the first position in the array.
    
        for ( i = 0; i < count; i++)
        {
            arr[i+1] = i+1; // putting values inside the array starting from arr[1]=1...
            //arr[i+1]=arr[i]
        }

        for(u = 0; u<=x-1; u++)
        {
            cout<<" "<<arr[x-u]; //returning the array in reverse order
        }
    
        for(y = 0; y<x+1; y++)
        {
            cout<<" "<<arr[y]; //returning the array in the r
        }
    }
    else
    {
        cout<<"Enter a positive number!";
    }  
    cout<<endl;
}
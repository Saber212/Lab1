# include <iostream>
#include <stdio.h>
using namespace std; 

int main(){
    char Name[20], Gender[20], Adress[20];
    int age, height; 
    printf("What is your name?\n");
    for(int i = 0; i<=20; i++){
        scanf("%c", &Name[i]);
        if(Name[i]=='\n'){break;}
    }
    printf("What is your adress?\n"); 
    for(int j = 0; j<=20; j++){
        scanf("%c", &Adress[j]);
        if(Adress[j]=='\n'){break;}
    }
    printf("How old are you?\n"); 
    scanf("%d", &age); 
    printf("What is your gender?\n");
    scanf("%s", Gender);
    printf("What is your height?\n"); 
    scanf("%d",&height);
    printf("Name: %s\nAge: %d\nGender: %s\nAdress: %s\nheight: %dcm\n", Name, age, Gender, Adress,height);
}
#include <iostream>
#include <string>
using namespace std;


float exp(float x, float y);

int main(){
    
    float base,result=0;
    int exponent;
    
    cout<<"Enter base values:";
    cin>>base;
    cout<<"Enter exponent values:";
    cin>>exponent;
    result=exp(base, exponent);
    cout<<"Result :"<<result<<endl;
 
 return 0;   
}

float exp(float x, float y){
    float result=1;
    int i;
    if(x == 0){
        result = 0;
    }
    
    if(y == 0){
        result = 1;
    }
    
    if(y < 0){
        for(i=1; i<= -y; i++){
        result*= 1/x;
        }
    }
    
    for(i=1; i<=y; i++){
        result*=x;
    }
    
    return result;

}

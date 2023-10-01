#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
void nth_permutation(int n);
int factorial(int n);
int main()
{ 
int a;
cout<<"enesima permutacon"<<endl;
cin>>a;
    nth_permutation(a);
    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    int resul=1;
    for(int i=1;i <= n;i++){
        resul *=i;
    }
    return resul;
}
void nth_permutation( int n){
char digits[10]={0,1,2,3,4,5,6,7,8,9};
int total_permutation,digit,index,au,b;

vector<int>permutation;
    n-=1;
    
    char avaliable_digits[10];
    memcpy(avaliable_digits,digits, 10);
for (int i=9;i>=0;i--){
    au=i;
    char auxiliar[10]={0,0,0,0,0,0,0,0,0,0};
        total_permutation=factorial(i);
        index=n/total_permutation;
        
        digit=avaliable_digits[index];
        permutation.push_back(digit);
        b=-1;
        for(int a=0;a<=i;a++){
            if(avaliable_digits[a]!=digit ){
            b+=1;
            auxiliar[b]=avaliable_digits[a];}
            
        }
        memcpy(avaliable_digits,auxiliar,au+1);
        n%=total_permutation;
        

    }
for(int s=0;s<10;s++){
    cout<<permutation[s];
}   
   
}

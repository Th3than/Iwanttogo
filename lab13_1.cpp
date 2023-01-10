#include<iostream>
using namespace std;
int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if (x <= 1 && x >= 0)
    {
        return x;
    }else{
        int y = fibonacci(x-1);
        return y+fibonacci(x-2);
    }
    
}
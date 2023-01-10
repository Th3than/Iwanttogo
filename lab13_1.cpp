#include<iostream>
#include<ctime>
using namespace std;
long long int fibonacci(long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
long long int fibonacci(long int x){
    if (x <= 1 && x >= 0)
    {
        return x;
    }else{
        long long int y = fibonacci(x-1);
        return y+fibonacci(x-2);
    }
    
}
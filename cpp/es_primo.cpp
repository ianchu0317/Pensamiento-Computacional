
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
using namespace std;


bool is_prime(int n){
    // initial vars
    bool prime = true;
    int cont_divisores = 0;
    
    // check for every number starting from num and n-1
    for (int x = 2; x < n; x++){
        // if divisible then divisor_count + 1
        if (n % x == 0){
            cont_divisores = cont_divisores + 1;
        }
    }
    
    // if have divisor then is not prime
    if (cont_divisores > 0){
        prime = false;
    }
    
    return prime;   
}

int main(){
    int n = 5;
    cout << "Numero " << n << " es " << is_prime(n);
    return 0;
}

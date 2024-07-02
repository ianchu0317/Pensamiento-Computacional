
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
using namespace std;


int suma_divisores(int n){
    // initial vars
    int suma = 0;
    
    // check for every number starting from 1 and n
    for (int x = 1; x <= n; x++){
        // if divisible then update counter
        if (n % x == 0){
            suma = suma + x;
        }
    }
    return suma;   
}

int main(){
    int n = 5;
    cout << "Suma de divisores de " << n << " es " << suma_divisores(n);
    return 0;
}


// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
using namespace std;


int suma_impar(int n){
    int sum = 0;
    for (int x = 1; x < n; x++){
        if (x % 2 != 0){
            sum = sum + x;
        }
    }
    return sum;
}

int main(){
    int n = 5;
    cout << "La suma de numeros impares hasta " << n << " es " << suma_impar(n);
    return 0;
}

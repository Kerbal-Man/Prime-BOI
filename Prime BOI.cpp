#include <iostream>
using namespace std;
//Kittycraft0's Prime checking algrithom that he gave me.
//this did need some fixing but thats simple
/*boolean isPrime(number){
  for(int i=0;i<number;i++){
    if(number%i==0){
      return(false);
    }
  }
  return(true);
}*/


bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}
int main(void){
    cout << "Hello World!\n";
    int primes = 0;
    int primesToMake;
    int primeIndex = 1;
    cin >> primesToMake;

    while (primes < primesToMake) {
        if (isPrime(primeIndex)) {
            primes++;
            cout << "Prime found:" << primeIndex << "\n";
        }
        primeIndex++;
        }
    system("pause");
    return 1;
}

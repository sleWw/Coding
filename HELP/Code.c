#include <stdio.h>


enum Boolean {false, true};

int isPrime(int number) 
{
    int boolean = 0;
    int dividedNumber = 555;
    int zeroChecker = 0;
    for (int i = 1; i < number; i++)
    {
        dividedNumber = number % i;
        
        if(dividedNumber == 0)
        {
            //boolean = 0;
            zeroChecker++;
        }
    }
    if(zeroChecker == 1)
    {
        boolean = 1;
    } else
    {
        boolean = 0;
    }
    
    return boolean;
}

int HowManyPrimes(int p)
{
    int primes = 0;
    for(int i = 0; i < p; i++)
    {
        if(isPrime(i) == 1)
        {
            primes++;
        }
        
    }
    return primes;
}

int findPrimes(int k)
{
    int kHolder = k;
    while(isPrime(kHolder) == 0)
    {
        kHolder++;
    }
    return kHolder;
    
}


int main()
{
    printf("hello\n");
    //int x = testInt(10);
    int x = 50;
    int y = isPrime(x);
    printf("0 = False, 1 = True:\nReturned Number: %d\n", y);
    printf("How Many Primes: %d\n",HowManyPrimes(x));
    printf("Find Primes: %d\n", findPrimes(x));
    
    
}
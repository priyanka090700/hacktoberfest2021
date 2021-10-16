## Sieve of Eratosthenes

> Given a number n, print all primes smaller than or equal to n. <br>
> It is also given that n is a small number. 

```
#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << " ";
}
int main()
{
    int n; cin>>n;
    
    cout << "Prime numbers smaller than or equal to "<< n <<":"<< endl;
    SieveOfEratosthenes(n);
    return 0;
}
```

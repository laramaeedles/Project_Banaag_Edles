#include "Project.h"
#include <iostream>
#include <stdint.h>
#include <cmath>
#include <sstream>

using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

bool Project::isPrime(int num)
{
    if(num == 0)
        return true;
    if(num == 1)
        return false;
    num = abs(num);
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}

void Project::multiples_of_3_and_5() //problem 1
{
    int sum=0,i;
    for (i=0;i<1000;i++)
    {
        if (i%3==0 || i%5==0)
            sum=i+sum;
    }
    cout<<"\nSum of All Multiples of 3 and 5 below 1000 is: "<<sum<<endl;
}

void Project::even_fibonacce() //problem 2
{
    int i=0, temp1=0, temp2=1, temp=0, sum=0, n=4000000;

    for (i=0;temp<n;i++)
    {
        temp=temp1+temp2;
        temp1=temp2;
        temp2=temp;
        if (temp>n)
            break;
        if (temp%2==0)
            sum+=temp;
    }
    cout<<"\nThe sum of all even fibonacci numbers is: "<<sum<<endl;
}

void Project::largest_prime_factor() //problem 3
{
    long long int i=0, num=600851475143, primetest=0, temp=0, largest=0, check=1;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            temp = 0;
            for (primetest=2; temp == 0 && i > primetest ; primetest++)
            {
                if (i % primetest == 0)
                temp++;
            }
            if (temp == 0)
                largest = i;
            check*=largest;
            if (check==num)
            {
                cout<<"\nThe largest prime factor is: "<<largest<<endl;
                break;
            }
        }
    }
}

void Project::largest_palindrome() //problem 4
{
    int answer = 0;
    for(unsigned int i = 999; i != 99; i--)
    for(unsigned int j = 999; j != 99; j--) {
    int product = i*j;
    stringstream mystr2;
    mystr2 << product;
    string mystr = mystr2.str();
    unsigned int length = mystr.length();
    bool check = true;

    for(unsigned int k = 0; k < length/2; k++)
        if(mystr[k] != mystr[(length-k)-1]) {
            check = false;
            break;
        }
    if(answer <= product && check)
        answer = product;
    }
    cout << "\nThe largest palindrome product is: "<< answer << endl;
}

void Project::smallest_multiple() //problem 5
{
    int n=1;
    while(n%2!=0||n%3!=0||n%4!=0||
    n%5!=0||n%6!=0||n%7!=0||
    n%8!=0||n%9!=0||n%10!=0||
    n%11!=0||n%12!=0||n%13!=0||
    n%14!=0||n%15!=0||n%16!=0||
    n%17!=0||n%18!=0||n%19!=0||n%20!=0)
    {
        n++;
    }
    cout<<"\nThe smallest multiple is: "<<n<<endl;
}

void Project::sum_square_diff() //problem 6
{
    int i=0, sum1=0, sum2=0, temp=0, diff=0, n=100;

    for (i=0;i<=n;i++)
    {
        temp+=i;
        sum1+=(i*i);
        sum2=(temp*temp);
    }
    diff=sum2-sum1;
    cout<<"\nThe sum square difference is: "<<diff<<endl;
}

void Project::_10001st_prime() //problem 7
{
    int div =0, n=0, i=1;
    while(n<10001)
    {
        if(isPrime(i))
        {
            div = i;
            n++;
        }
        i++;
    }
    cout<<"\nThe 10001st prime number is: "<<div<<endl;
}

void Project::largest_product_in_series() //problem 8
{
    int product=0,n=0,prod=0,b=0,a=0,c=0,d=0,e=0;
    string number = "73167176531330624919225119674426574742355349194934"
    "96983520312774506326239578318016984801869478851843"
    "85861560789112949495459501737958331952853208805511"
    "12540698747158523863050715693290963295227443043557"
    "66896648950445244523161731856403098711121722383113"
    "62229893423380308135336276614282806444486645238749"
    "30358907296290491560440772390713810515859307960866"
    "70172427121883998797908792274921901699720888093776"
    "65727333001053367881220235421809751254540594752243"
    "52584907711670556013604839586446706324415722155397"
    "53697817977846174064955149290862569321978468622482"
    "83972241375657056057490261407972968652414535100474"
    "82166370484403199890008895243450658541227588666881"
    "16427171479924442928230863465674813919123162824586"
    "17866458359124566529476545682848912883142607690042"
    "24219022671055626321111109370544217506941658960408"
    "07198403850962455444362981230987879927244284909188"
    "84580156166097919133875499200524063689912560717606"
    "05886116467109405077541002256983155200055935729725"
    "71636269561882670428252483600823257530420752963450";
    while(n < 995 )
    {
        a=number[n];
        a=a-48;
        b=number[n+1];
        b=b-48;
        c=number[n+2];
        c=c-48;
        d=number[n+3];
        d=d-48;
        e=number[n+4];
        e=e-48;
        prod =a*b*c*d*e;
        if(prod>product)
        {
            product = prod;
        }
        n++;
    }
    cout<<"\nThe largest product in a series is: "<<product<<endl;
}

void Project::special_pytho_triplet() //problem 9
{
    int a = 0, b = 0, c = 0, sum = 1000, product;
     bool test = false;
     for (a = 1; a < sum / 3 && !test; a++)
     {
         for (b = a; b < sum / 2 && !test; b++)
         {
             c = sum - a - b;

             if ((a*a) + (b*b) == (c*c) )
             {
                 test = true;
                 product=a*b*c;
                 cout<<"\nThe product of the Special Pythagorean Triplet is: "<<product<<endl;
                 break;
             }
         }
     }
}

void Project::summation_of_primes() //problem 10
{
    int i= 0, n = 2000000;
    uintmax_t sum=0;
    while(i<n)
    {
        if(isPrime(i))
        {
            sum = sum + i;
        }
        i++;
    }
    cout<<"The summation of primes is: "<<sum<<endl;
}

#include <iostream>
#include <cmath>
#include <random>
using namespace std;



int main(){
    float a ;
    float b ; 
    int n = 1000;
    float val = 0 ;
    double ar[n] ;
    float integral;
    float ans;

    std::cout << "value of a :";
    cin >> a;
    cout << "\n" ;
    std::cout << "value of b :";
    cin >> b;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distr(a,b);


    // Filling the array with random values between the limits of the integral

    for(int i = 0 ;i<n;i++){

        ar[i] = distr(gen);
        
    }

    // 

    for (int j = 0 ; j<n ; j++){
        integral += sin(ar[j]);

    }
    
    ans = (b-a)/n*integral;
    cout << ans<<'\n';
    
   
}

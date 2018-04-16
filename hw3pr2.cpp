// Alfonzo Galvan
// CSCE-121-502
// Due: September 29,2015
// hw3pr2.cpp
#include <iostream>
#include <cmath>
#include <ccomplex>

using namespace std;

double my_sqrt_1(double n)
{
        double lower,upper,midpoint;
        if (n<1)
        {
                lower=n;
        }
        else
        {
                lower=1+((n-1)/2)-(pow(n-1,2)/8);
        }
        upper=(n+1)/2;
        for(int i=0;i<10;i++)
        {
                midpoint=(upper+lower)/2;
                if(pow(midpoint,2)>n)
                {
                upper=midpoint;
                }
                if(pow(midpoint,2)<n)
                {
                lower=midpoint;
                }
        }
        return midpoint;
}

int main()
{
        double n=0.0;
        double s=0.0;
        for(auto k:{-100,-10,-1,0,1,10,100})
        {

                n=M_PI*pow(10.0,k);
                s=my_sqrt_1(n);
                cout<<"n="<<n<<"\n";
                cout<<"sqrt(n)="<<sqrt(n)<<"\n";
                cout<<"my_sqrt_1(n)="<<s<<"\n";
		
		double relative_error_per_cent=100*(s-sqrt(n))/sqrt(n);
		cout<<"Relative error percent: "<<relative_error_per_cent<<"%\n\n";
        }
}

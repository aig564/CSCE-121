#include <iostream>
#include <cmath>
using namespace std;
int main(){

		//got formula from http://www.had2know.com/academics/area-circular-segment-formula.html

		cout<<"Pizza diameter is 14 inches.\n";
		cout<<"Please enter the length of the chord in inches.\n";
		double pizzaRadius=7;
		double chordLength=0;
		while(cin>>chordLength)
		{
			double areaOfSegment=0;
		areaOfSegment=pow(pizzaRadius,2)*(asin(chordLength/(2*pizzaRadius)))-(chordLength/2)*sqrt(pow(pizzaRadius,2)-pow(chordLength,2)/4);
			double areaOfPizza=3.14*pow(pizzaRadius,2);
			double percentage=0;
			percentage=(areaOfSegment/areaOfPizza)*100;

			cout<<"That cuts out "<<round(percentage)<<"% of the pizza.\n";
			cout<<"Please enter the length of the chord in inches.\n";
		}
}
			

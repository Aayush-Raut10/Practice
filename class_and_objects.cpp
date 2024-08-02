/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. 
Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number
of cars that have gone by, and of the total amount of money collected. Model this tollbooth with a
class called tollBooth. The two data items are a type unsigned int to hold the total no. of cars, and
a type double to hold the total amount of money collected. A constructor initializes both of these to 0.
A member function called payingcar(), increments the car total and adds 0.50 to the cash total. Another
member function called nopaycar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. 

Include a program to test this class. This program should allow the user to push one key to count a paying 
car, and another to count a nonpaying car. Pushing the Esc key should cause the program to print out the total
cars and total cash and then exit.
 */

#include<iostream>
#include<conio.h>
using namespace std;

const char Esc = 27;


class tollBooth{
    private:
            int total_cars;
            double total_amount;
    public:
        tollBooth(){
            total_cars = 0;
            total_amount = 0.0;
        }

        void payingcar(){
            total_cars ++;
            total_amount += 0.50;
        }

        void nopaycar(){ total_cars ++; }

        void display(){
            cout<<"\nTotal number of cars = "<<total_cars;
            cout<<"\nTotal collected amount = "<<total_amount;
        }

};




int main(){
    tollBooth boothA;
    char option;

    


    do {
    	
		cout<< "\nPress 0 for each non paying car, "
		        << "\n      1 for each paying car, "
		        << "\n      Esc to exit the program.\n";
        option = getche();
        
        if (option == '0' ){
            boothA.nopaycar();
        }

        
        if (option == '1' ){
            boothA.payingcar();
        }
        }while (option != Esc);
        boothA.display();
    
    return 0;
}

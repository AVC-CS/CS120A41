
//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer.
//**    If we have negative input, just quit the program.


//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and 
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer. 
//**    If we have negative input, just quit the program. 


#include        <iostream>
#include        <iomanip>
using namespace std;

int main()
{
      /* Make your code here */
      double  totalCost, originalAmount, discountAmount;
        
  

    /* To print out your result, use the following statements */
        cout << setprecision(2) << fixed;
        cout << "Original amount is " << originalAmount << endl;
        cout << "Discount amount is " << discountAmount << endl;
        cout << "Total Price is " << totalCost << endl; 
        
}

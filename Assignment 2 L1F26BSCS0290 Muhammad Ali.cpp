        // Muhammad Ali L1F26BSCS0290
     
     // Question 1

// #include <iostream>
// using namespace std;
// int main() {

// int n, inverse, doubleInverse;
// cout << "Enter a number (4 digit number): ";
// cin >> n;

// inverse = (n % 10) * 1000 +
//         ((n / 10) % 10) * 100 +
//         ((n / 100) % 10) * 10 +
//         (n / 1000);     

//         doubleInverse = inverse * 2;
//         cout << "Inverse of the integer is: " << inverse << endl;
//         cout << "Double of the inverse is: " << doubleInverse << endl;


//     return 0;
// }


        //question 2


// #include <iostream>
// using namespace std;
// int main() {

//     int number,reverse = 0;
//     cout << "Enter a number (five-digit): ";
//     cin >> number;

//     reverse = (number % 10) * 10000 +
//               ((number /10) % 10) * 1000 +
//               ((number / 100) % 10) * 100 +
//               ((number / 1000) % 10) * 10 +
//               (number / 10000);

//               if (number == reverse) 
//               {
//                 cout << "number is palindrome." << endl;
//               }
//               else
//               {
//                 cout << "number is not palindrome." << endl;
//               }
              
// return 0;
// }


          // question 3

    //   #include <iostream>
    //   using namespace std;
    //   int main() {
       
    //     int bill, units;

    //     cout << "Enter the number of units consumed: ";
    //     cin >> units;

    //     if (units > 0)
    //     {
    //     if (units <= 100)
    //     {
    //         bill = units * 10;
    //     }
    //     else
    //     {
    //         if (units <= 200)
    //         {
    //             bill = units * 15;
    //         }
    //         else 
    //         {
    //             bill = units * 20;
    //         }
    //     }
    //     cout << "Total bill : " << bill << endl;
    // }
    //     else
    //     {
    //         cout << "Invalid units" << endl;
    //     }
        
    //     return 0;
    // }



        // question 4

    // #include <iostream>
    // using namespace std;
    // int main() {
    //     int price = 0, quantity, totalBill, choice, discount;
    //     double finalBill;
    //     string meal;

    //     cout << "Select your meal: " << endl;
    //     cout << "1. Burger" << endl;
    //     cout << "2. Pizza" << endl;
    //     cout << "3. Sandwich" << endl;
    //     cout << "Enter your choice (1-3): ";
    //     cin >> choice;

    //     switch (choice)
    //     {
    //         case 1:
    //             meal = "Burger";
    //             price = 500;
    //             break;

    //         case 2:
    //             meal = "Pizza";
    //             price = 1000;
    //             break;

    //         case 3:
    //             meal = "Sandwich";
    //             price = 300;
    //             break;
    //     }

    //     cout << "Enter quantity: ";
    //     cin >> quantity;

    //     if (quantity > 0)
    //     {
    //     totalBill = price * quantity;

    //      if (quantity >= 5)
    //     {
    //     discount = totalBill * 0.10;
    //     }
    //      else
    //     {
    //     if (quantity >= 3)
    //     {
    //         discount = totalBill * 0.05;
    //     }
    //     else
    //     {
    //         discount = 0;
    //     }
    //      }

    //      finalBill = totalBill - discount;

    //      cout << "Selected Meal: " << meal << endl;
    //      cout << "Total Bill: Rs. " << totalBill << endl;
    //      cout << "Discount: Rs. " << discount << endl;
    //      cout << "Final Bill: Rs. " << finalBill << endl;
    //      }
    //      else
    //      {
    //      cout << "Invalid quantity";
    //      }

    
    
    // return 0;
    // }

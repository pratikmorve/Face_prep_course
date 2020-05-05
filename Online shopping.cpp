/*

Online shopping
Arun wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt in Flipkart and is surprised to see the same shirt in Amazon and Snapdeal as well. So he decided to buy the shirt from the website which offers it at the least price. The price of the shirt, discount % and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt in each website and decide which website has the lowest price.
INPUT & OUTPUT FORMAT:

Input consist of 9 integers. First three input corresponds to Flipkart details such as the amount of the shirt, discount offered and shipping charges. Next three input corresponds to Snapdeal details such as the amount of shirt, discount offered and shipping charge. Last three input corresponds to amazon details such as the amount of shirt, discount offered and shipping charge.


Input (stdin)
1000
50
50
900
50
70
800
10
200

Output (stdout)
In Flipkart Rs.550
In Snapdeal Rs.520
In Amazon Rs.920
He will prefer Snapdeal


Input (stdin)
1000
60
80
900
50
30
1000
10
200

Output (stdout)
In Flipkart Rs.480
In Snapdeal Rs.480
In Amazon Rs.1100
He will prefer Flipkart



Input (stdin)
1000
60
80
900
50
30
1000
90
89

Output (stdout)
In Flipkart Rs.480
In Snapdeal Rs.480
In Amazon Rs.189
He will prefer Amazon
*/




//Program

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float flipcart_price , flipcart_discount , flipcart_shipping_charges ;
  float snapdeal_price , snapdeal_discount , snapdeal_shipping_charges ;
  float amazon_price , amazon_discount , amazon_shipping_charges ;
  cin >> flipcart_price;
  cin >> flipcart_discount;
  cin >> flipcart_shipping_charges;
  cin >> snapdeal_price;
  cin >> snapdeal_discount;
  cin >> snapdeal_shipping_charges;
  cin >> amazon_price;
  cin >> amazon_discount;
  cin >> amazon_shipping_charges;

  float flipcart = (flipcart_price - (flipcart_price * (flipcart_discount / 100.0))) + flipcart_shipping_charges;
  cout <<"In Flipkart Rs." << flipcart;
  float snapdeal = (snapdeal_price - (snapdeal_price * (snapdeal_discount / 100.0))) + snapdeal_shipping_charges;
  cout <<"\nIn Snapdeal Rs." << snapdeal;
  float amazon = (amazon_price - (amazon_price * (amazon_discount / 100.0))) + amazon_shipping_charges;
  cout <<"\nIn Amazon Rs." <<amazon;

  if (flipcart <= snapdeal && flipcart <= amazon)
  {
    cout << "\nHe will prefer Flipkart";
  }
  else if (snapdeal <= flipcart && snapdeal <= amazon)
  {
    cout << "\nHe will prefer Snapdeal";
  }
  else
  {
    cout << "\nHe will prefer Amazon";
  }
}



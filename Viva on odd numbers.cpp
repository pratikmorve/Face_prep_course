/*

Viva on odd numbers
A maths teacher asks her students to give 3 examples for positive odd numbers. When the student specifies a correct answer, his/her score is incremented by 1. When the student specifies a positive even number, his/her score is decremented by 0.5. When the student specifies a negative number, he/she will not be given any more chances to correct his or her mistake and his/her score will be decremented by 1. So a student's turn comes to an end when he/she has correctly specified 3 positive odd numbers or when the student has specified a negative number. Some students didn't know the difference between odd numbers and even numbers and they made many mistakes and so it was difficult for the teacher to maintain the scores. The teacher asks for your help. Can you please help her by writing a program to calculate the score?
INPUT & OUTPUT FORMAT:

Input consists of a list of integers.

The output consists of a single line. The score needs to be corrected to 1 decimal place.

[For this exercise, don't worry about duplicate odd numbers. Even if the students specify the same odd number thrice, it is accepted].



Input (stdin)
2
-4

Output (stdout)
-1.5



Input (stdin)
3
3
3

Output (stdout)
3.0



Input (stdin)
1
7
9

Output (stdout)
3.0


*/




//Program


#include <iostream>
  using namespace std;

  int main()
  {
    int input, actual_result = 0;
    float result = 0.0;
    while (true) {
      cin>>input;

      if (input < 0) {
        result--;
        break;
      }
      if (input % 2 == 0) {
        result = result - 0.5;
      }
      if (input % 2 != 0) {
        result++;
        actual_result++;
      }
      if (actual_result == 3)
        break;
    }
    int res = result * 10;
    float rf = res/10.0;
    cout<<rf;
    return 0;
  }

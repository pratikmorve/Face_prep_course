/*

Cricket
Tom is crazy about cricket. He was watching India vs. Australia World cup final match. Australia won the toss and elected to bat first. They finished batting with a score of X. Next, India started to bat and scored Y runs in N number of balls. As Tom is very crazy, he wants to calculate the run rate and check whether there is a probability for India to win or not. Help him calculate the run-rate and check the probability.
INPUT FORMAT & OUTPUT FORMAT:

Input consists of 4 integers. First input corresponds to the total number of balls. Second input corresponds to the total number of runs. Third input corresponds to the number of runs scored. Fourth input corresponds to the number of balls bowled. First output corresponds to the total number of overs. Second output corresponds to the total number of overs finished. Third output corresponds to the current run rate. Fourth output corresponds to total run rate.

Overs: 50 Overs finished: 7.3 Current Run rate: 10.7 Total Run rate: 7.5 Eligible to Win


Input (stdin)
300
375
78
45

Output (stdout)
50
7.3
10.7
7.5
Eligible to Win



Input (stdin)
300
268
23
45

Output (stdout)
50
7.3
3.2
5.4
Not Eligible to Win



Input (stdin)
300
456
54
76

Output (stdout)
50
12.4
4.4
9.1
Not Eligible to Win

*/


//Program

#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
int no_of_balls,total_runs,runs_scored,balls_bowled;
cin>>no_of_balls;
cin>>total_runs;
cin>>runs_scored;
cin>>balls_bowled;
float total_overs=(no_of_balls/6.0);
cout<<total_overs;
int overs = balls_bowled / 6;
float balls = (balls_bowled % 6) * 0.10;
float overs_finished= overs + balls;
cout<<"\n"<<overs_finished;
float current_run_rate=(runs_scored/overs_finished);
cout<<"\n"<<round(current_run_rate * 10)/10;
float total_run_rate=(total_runs/total_overs);
cout<<"\n"<<round(total_run_rate * 10)/10;
if(current_run_rate>total_run_rate)
cout<<"\nEligible to Win";
else
cout<<"\nNot Eligible to Win";
}

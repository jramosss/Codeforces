/*
A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k
dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), 
the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend.
 If he doesn't have to borrow money, output 0.
*/

#include<iostream>

using namespace std;

int main (){
    int k;  //Cost of the first banana
    int w;  //Ammount of money
    int n;  //Ammount of bananas that he wants
    int cost = 0;
    int money_to_borrow = 0;
    cin >> k >> w >> n;

    for (int i = 1; i <= n; i++){
        cost += i*k;
    }

    if (cost > w){
        money_to_borrow = cost - w;
    }

    printf("%d",money_to_borrow);

    return 0;
}
// CodeForces Watermelon Problem
// Problem Link: https://codeforces.com/problemset/problem/4/A
// Problem Statement:
// You are given a watermelon with an even weight. You have to divide it into two parts such that both parts have even weights.
// You need to determine if it is possible to divide the watermelon into two parts with even weights.       
// Input: An integer W (the weight of the watermelon)
// Output: "YES" if it is possible to divide the watermelon into two parts with even weights, otherwise "NO".
// Constraints: 1 ≤ W ≤ 100
// Note: The weight of the watermelon is guaranteed to be even.
// The solution checks if the weight is greater than 2 and even, then it is possible to divide it into two even parts.
// Otherwise, it is not possible.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int W;
    cin >> W; // Input the weight of the watermelon
    if (W > 2 && W % 2 == 0) { // Check if the weight is greater than 2 and even
        cout << "YES" << endl; // Output "YES" if possible to divide into two even parts
    } else {
        cout << "NO" << endl; // Output "NO" otherwise
    }
    return 0;
}
// The code checks if the watermelon can be divided into two even parts and outputs the result accordingly. 
// The solution is efficient and works within the given constraints.
// The time complexity is O(1) since it only involves a few arithmetic operations and comparisons.
// The space complexity is also O(1) as it uses a constant amount of space for variables.
// The code is simple and easy to understand, making it suitable for beginners in competitive programming.  
// The problem is a classic example of checking conditions and making decisions based on the input value.
// It is a good exercise for practicing basic programming skills and understanding conditional statements.
// The problem is often used in programming contests and coding interviews to test the candidate's ability to solve simple problems efficiently.
// The solution is straightforward and can be implemented in various programming languages with similar logic.
// Overall, the Watermelon problem is a great starting point for beginners to get familiar with conditional statements and basic input/output operations in programming.
// The problem is simple yet effective in teaching the fundamentals of programming and problem-solving skills.


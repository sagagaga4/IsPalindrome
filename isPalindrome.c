#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    if (x < 0)
        return false;
    
    int original = x;
    long long int reversed = 0; // Change data type to long long int
    
    while (x != 0) { 
        int digit = x % 10;//Read right to left + take modulo of each digit
        reversed = reversed * 10 + digit; // allow every digit be reversed
        x /= 10; // remove last right digit till num 0;
    }
    
    if(original == reversed)
    {
        printf("Number is Palindrom!");
    }

    return original != reversed;
}

int main()
{
    int num = 0;
    num = 121;
    isPalindrome(num);
    return 0;
}
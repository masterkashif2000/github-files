#include<iostream>
#include<cstring>
using namespace std;
// Reverse the letters of the word
void reverse(char str[], int start, int end)
{

    // Temporary variable to store character
    char temp;
    while (start <= end)
    {
        // Swapping the first and last character
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    cout<<str<<endl;
}

// This function forms the required string
void reverseletter(char str[], int start, int end)
{
    int wstart, wend;
    for (wstart = wend = start; wend < end; wend++)
    {
        if (str[wend] == ' ')
            continue;

        // Checking the number of words
        // present in string to reverse
        while (str[wend] != ' ' && wend <= end)
            wend++;
        wend--;

        // Reverse the letter
        // of the words
        reverse(str, wstart, wend);
    }
}

// Driver Code
int main()
{
    char str[1000] = "Ashish Yadav Abhishek Rajput Sunil Pundir";
    reverseletter(str, 0, strlen(str) - 1);
    cout << str;
    return 0;
}

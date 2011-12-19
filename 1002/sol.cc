/*
 * Aaron Zeng
 * 2011.12.15
 * 1002. Phone Numbers
 * 
 * Time Limit: 2.0 second
 * Memory Limit: 16 MB
 * 
 * In the present world you frequently meet a lot of call numbers and 
 * they are going to be longer and longer. You need to remember such a 
 * kind of numbers. One method to do it in an easy way is to assign 
 * letters to digits as shown in the following picture:
 * 1 ij    2 abc   3 def
 * 4 gh    5 kl    6 mn
 * 7 prs   8 tuv   9 wxy
 *         0 oqz
 * 
 * This way every word or a group of words can be assigned a unique 
 * number, so you can remember words instead of call numbers. It is 
 * evident that it has its own charm if it is possible to find some 
 * simple relationship between the word and the person itself. So you 
 * can learn that the call number 941837296 of a chess playing friend 
 * of yours can be read as WHITEPAWN, and the call number 2855304 of 
 * your favourite teacher is read BULLDOG.
 * Write a program to find the shortest sequence of words (i.e. one 
 * having the smallest possible number of words) which corresponds 
 * to a given number and a given list of words. The correspondence 
 * is described by the picture above.
 * 
 * Input: Input contains a series of tests. The first line of each 
 * test contains the call number, the transcription of which you have 
 * to find. The number consists of at most 100 digits. The second line 
 * contains the total number of the words in the dictionary (maximum 
 * is 50 000). Each of the remaining lines contains one word, which 
 * consists of maximally 50 small letters of the English alphabet. The 
 * total size of the input doesn't exceed 300 KB. The last line 
 * contains call number -1.
 * 
 * Output: Each line of output contains the shortest sequence of words 
 * which has been found by your program. The words are separated by 
 * single spaces. If there is no solution to the input data, the line 
 * contains text "No solution.". If there are more solutions having the 
 * minimum number of words, you can choose any single one of them. 
 * Sample: 
 *  input           output
 *  7325189087      reality our
 *  5               No solution.
 *  it
 *  your
 *  reality
 *  real
 *  our
 *  4294967296
 *  5
 *  it
 *  your
 *  reality
 *  real
 *  our
 *  -1
 */

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

char trans(char ch)
{
    switch (ch)
    {
        case 'i':
        case 'j':
            return '1';
            break;
        case 'a':
        case 'b':
        case 'c':
            return '2';
            break;
        case 'd':
        case 'e':
        case 'f':
            return '3';
            break;
        case 'g':
        case 'h':
            return '4';
            break;
        case 'k':
        case 'l':
            return '5';
            break;
        case 'm':
        case 'n':
            return '6';
            break;
        case 'p':
        case 'r':
        case 's':
            return '7';
            break;
        case 't':
        case 'u':
        case 'v':
            return '8';
            break;
        case 'w':
        case 'x':
        case 'y':
            return '9';
            break;
        case 'o':
        case 'q':
        case 'z':
            return '0';
            break;
        default: // XXX EXECUTION SHOULD NOT REACH THIS POINT
            return -1;
            break;
    }
}

bool startswith(string big, string small)
{
    if (big.size() < small.size())
        return false;
    for (int i = 0; i < small.size(); i++)
        if (big[i] != trans(small[i]))
            return false;
    return true;
}

string attempt(string n, vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (startswith(n, v.at(i)))
        {
            if (n.size() == v.at(i).size())
                return " " + v.at(i);
            if (attempt(n.substr(v.at(i).size()), v) != "No solution.")
                return v.at(i) + attempt(n.substr(v.at(i).size()), v);
        }
    }
    return "No solution.";
}

int main(void)
{
    while (true)
    {
        string n;
        cin >> n;
        if (n == "-1")
            break;
        int m;
        cin >> m;
        vector<string> v(m);
        for (int i = 0; i < m; i++)
            cin >> v.at(i);
        string s = attempt(n, v);
        if (s[0] == ' ')
            cout << s.substr(1) << endl;
        else
            cout << s << endl;
    }
}

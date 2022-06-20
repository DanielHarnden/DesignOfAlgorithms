#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    // Enters the FIRST TWO integers entered into the command line into the ints m and n respectively
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);
    int temp = 0;

    // First, the program checks if m and n are non-negative and non-zero. If either of the ints entered are 0 or below, the program exits with an error message. If not, then the values of m and n are compared. If n is larger than m, their valeus are swapped.
    if (m < 1 || n < 1)
    {
        cout << "Please start the program with the following command:\n\tdpharnden42_B.exe m n\nWhere m and n are non-zero, non-negative integers.\n";
        return 0;
    } else {
        if (n > m)
        {
            temp = m;
            m = n;
            n = temp;
        }
    }

    // For the Consecutive Integer Checking Algorithm, a temporary varuable is needed and assigned as the lower of the two numbers being compared.
    temp = n;

    // This is a remnant from the first half of this program but I left it here because I am lazy even though I know m and n don't change. It was probably more work writing this comment than moving this line to the end of the program but whwatever.
    cout << "gcd(" << m << ", " << n << ") is ";

    // Subtracts one from temp until a factor of m is found.
    while (m % temp != 0 && temp > 0)
    {
        temp -= 1; 
        // Subtracts one from temp until a factor of n is found.
        while (n % temp != 0 && temp > 0)
        {
            temp -= 1;
        }
        // If temp is a factor of both m and n, the loop exits.
    }

    // Finishes the earlier output with the calculated GCD.
    cout << temp;
    return 0;
}
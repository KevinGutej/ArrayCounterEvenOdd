#include <iostream>

using namespace std;

void counter(int &counter_even, int &counter_odd, int number[])
{
    for(int i=0;i<4;i++)
    {
        if(number[i]%2==0)counter_even++;
        else{
            counter_odd++;
        }
    }
}

int main()
{
    int counter_even = 0;
    int counter_odd = 0;
    int i;
    int number[4];
    for (i = 0; i < 4; i++)
    {
        cout << "Number: ";
        cin >> number[i];
    }
    counter(counter_even,counter_odd,number);
    cout << "Even: " << counter_even << endl;
    cout << "Odd: " << counter_odd << endl;

    return 0;
}

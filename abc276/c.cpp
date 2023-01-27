#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers;

    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        numbers.push_back(p);
    }


    vector<int> selectNumbers;
    int changeIndex = -1;
    for(int i = numbers.size() - 1; i >= 0; i--)
    {
        int hitSelectNumbersIndex = -1;
        for(int j = 0; j < selectNumbers.size(); j++)
        {
            if(numbers[i]  > selectNumbers[j])
            {
                hitSelectNumbersIndex = j;
                break;
            }
        }

        if(hitSelectNumbersIndex != -1)
        {
            changeIndex = i;
            int temp = selectNumbers[hitSelectNumbersIndex];
            selectNumbers[hitSelectNumbersIndex] = numbers[i];
            numbers[i] = temp;
            break;
        }
        else
        {
            selectNumbers.push_back(numbers[i]);
        }


        sort(selectNumbers.begin(), selectNumbers.end(), greater<int>());
    }


    sort(selectNumbers.begin(), selectNumbers.end(), greater<int>());

    for(int i = 0; i <= changeIndex; i++)
    {
        cout << numbers[i] << " ";
    }

    for(long long i = 0; i < selectNumbers.size(); i ++)
    {
        cout << selectNumbers[i] << " ";
    }

}
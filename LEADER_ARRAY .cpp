/*PROGRAM TO FIN THE LEADER IN AN GIVEN ARRAY
LEADER MEANS THE NUMBER SHOULD BE BIGGER THAN ALL ITS RIGHT ELEMENTS*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, s = 1, a = 0;
    cout << "enter ther size of array\n";
    cin >> n;
    int arr[n], j, flag = 0;
    for (i = 0; i < n; i++)
    {
        cout << "enter the elements" << endl;
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = flag + 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "leader " << arr[i] << endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "rus");

    int n;

    cout << "������� ����� �������: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    cout << "����� ������ �����: " << sum;

    return 0;
}

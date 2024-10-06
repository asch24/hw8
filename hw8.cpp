#include <iostream>
#include <windows.h>
using namespace std;


// 1. Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.

//void reverse_arr(int arr[], int size)
//{
//    for (int i = 0; i < size / 2; i++)
//    {
//        int temp = arr[i]; 
//        arr[i] = arr[size - i - 1];
//        arr[size - i - 1] = temp;
//    }
//}
//
//int main()
//{
//    setlocale(0, "");
//    const int SIZE = 6;
//    int arr[] = { 20, 78, 24, 23, 0, 4 };
//
//    cout << "До: ";  
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
//    reverse_arr(arr, SIZE);
//    cout << "После: ";
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
//
//}

//---------------------------------------------------------
// 2. Написать функцию Line, которую можно будет вызвать так:
// Line(20, '@', 12, true);
// и при этом горизонтальная нарисуется линия, состоящая из 20 «собачек» красного цвета.
// Если передать в последнем параметре false – линия станет вертикальной.

//void Line(int amount, char chr, int color, bool position)
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(h, color);
//	for (int i = 0; i < amount; i++)
//	{
//		if (position == true)
//		{
//			cout << chr;
//		}
//		else
//		{
//			cout << chr << "\n";
//		}
//	}
//}
//
//int main()
//{
//	Line(20, '@', 12, true);
//	cout << "\n";
//}

//---------------------------------------------------------
// 3. Написать функцию, которая проверяет, является ли переданное ей число простым. 
// Число называется простым, если оно делится без остатка только на себя и на единицу.

//bool is_prime(int x) 
//{
//    if (x <= 1)
//    {
//        return false;
//    }
//
//    for (int i = 2; i * i <= x; i++) 
//    {
//        if (x % i == 0) 
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    setlocale(0, "");
//    int num = 24;
//
//    if (is_prime(num))   
//    {
//        cout << num << " простое число\n";
//    }
//    else 
//    {
//        cout << num << " не простое число\n";
//    }
//}

//---------------------------------------------------------
// 4. Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.

//int sum(int a, int b)
//{
//	int sum = 0;
//	for (int i = a + 1; i < b; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	cout << sum(1, 6) << "\n";
//}



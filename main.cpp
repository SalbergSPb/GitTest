#include <iostream>   
#include <ctime>

using namespace std;

int main()   
{   
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int SIZE{10};
	int arr[SIZE]{};
    for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 1000 + 99;
	}
    for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	
	std::cout << '\n';    
    system("pause");
    return 0;   
} 
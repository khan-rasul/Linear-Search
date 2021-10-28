#include <iostream>
using namespace std;

void linearSearch(const int myList[], int key)
{
	for (int i = 1; i < sizeof(myList); i++)
	{
		if (key == myList[i])
			cout << "Successful Search" << endl;
	}	
}
int main()
{
    int num;
    cout << "Enter Number of Elements :"<< endl;
    cin >> num;
	int myList[num];
    for(int j = 0 ; j <  num  ;j++)
        cin >> myList[j];
    cout << "Enter Element to Search :"<< endl;
	int key;
    cin >> key;
	linearSearch(myList, key);
	return 0;
}

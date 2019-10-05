#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool linearSearch(vector<ll> myList, ll key)
{
	for (ll i = 0; i < myList.size(); i++)
	{
		if (key == myList[i])
			return 1;
	}
	return 0;	
}
int main()
{
    ll num;
    cout << "Enter Number of Elements :"<< endl;
    cin >> num;
	vector<ll> myList(num);
    for(ll i = 0 ; i <  num  ;i++)
        cin >> myList[i];

    cout << "Enter Element to Search :"<< endl;
	ll key;
    cin >> key;
	cout<< "Element " << ( linearSearch(myList, key) ?  "Present" : "Absent" ) << endl;
	return 0;
}
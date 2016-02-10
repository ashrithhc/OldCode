#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int T, M, x, y, temp, count, xy;
	vector <int> arr;
	scanf("%d", &T);

	while(T--)
	{
		scanf("%d %d %d", &M, &x, &y);
		xy = x*y;

		count = 0;
		arr.clear();
		arr.push_back(0);
		while(M--)
		{
			scanf("%d", &temp);
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());

		for(int i=1; i<arr.size(); i++)
		{
			temp = (arr[i] - xy);
			if (temp > arr[i-1]) count += (temp - arr[i-1] - 1);
			arr[i] = arr[i] + xy;
			if ((i == (arr.size()-1)) && (arr[i] < 100)) count += (100 - arr[i]);
		}

		printf("%d\n", count);
	}

	return 0;
}
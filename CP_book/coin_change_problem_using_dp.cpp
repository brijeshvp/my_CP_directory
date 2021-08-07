// C++ progranumOfCoins for coin change problenumOfCoins.
#include<bits/stdc++.h>

using namespace std;
// calculate #ways to make change of given amount using given coins
// int count( int *coins, int numOfCoins, int change )
// {
// 	int i, j, x, y;


// 	int table[change + 1][numOfCoins];
	
	
// 	for (i = 0; i < numOfCoins; i++)
// 		table[0][i] = 1;

	
// 	for (i = 1; i < change + 1; i++)
// 	{
// 		for (j = 0; j < numOfCoins; j++)
// 		{
// 			// Count of solutions including coins[j]
// 			x = (i-coins[j] >= 0) ? table[i - coins[j]][j] : 0;

// 			// Count of solutions excluding coins[j]
// 			y = (j >= 1) ? table[i][j - 1] : 0;

// 			// total count
// 			table[i][j] = x + y;
// 		}
// 	}
// 	return table[change][numOfCoins - 1];
// }

// calculate #ways to make change of given amount using given coins
int count( int *coins, int numOfCoins, int change )
{
	int i, j, x, y;


	int table[numOfCoins][change + 1];
	
	
	for (i = 0; i < numOfCoins; i++)
		table[i][0] = 1;

	for (i = 0; i < numOfCoins; i++)
	{
		for(j=1; j<= change; j++)
		{
		// Count of solutions including coins[j]
		x = (j-coins[i] >= 0) ? table[i][j - coins[i]] : 0;

		// Count of solutions excluding coins[j]
		y = (i >= 1) ? table[i - 1][j] : 0;

		// total count
		table[i][j] = x + y;

			// if(coins[i]>j)
			// 	table[i][j] = table[i-1][j];
			// else
			// 	table[i][j] = table[i-1][j] + table[i][j-coins[i]];
		}
	}
	return table[numOfCoins - 1][change];
}

// Driver Code
int main()
{
	int coins[] = {1, 2, 3};
	int numOfCoins = sizeof(coins)/sizeof(coins[0]);
	int change = 4;
	cout << count(coins, numOfCoins, change);
}

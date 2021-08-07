// C++ program to demonstrate insertion
// into a vector of vectors

#include <iostream>
#include <vector>
using namespace std;



int main()
{
	// Initializing the vector of vectors(2D vectors)
	vector<vector<int> > vec;

	int ROW,COL,q,element;
    cin>>ROW>>q;

	// Inserting elements into vector
	for (int i = 0; i < ROW; i++) {
		// Vector to store column elements
		vector<int> v1;
        cin>>COL;

		for (int j = 0; j < COL; j++) {
            cin>>element;
			v1.push_back(element);
		}

		// Pushing back above 1D vector
		// to create the 2D vector
		vec.push_back(v1);
	}

	// Displaying the 2D vector
	// for (int i = 0; i < vec.size(); i++) {
	// 	for (int j = 0; j < vec[i].size(); j++)
	// 		cout << vec[i][j] << " ";
	// 	cout << endl;
	// }
    // int I,J;
    vector<int> I(2);
    vector<int> J(2);
    for (int i = 0; i < q; i++)
    {
        cin>>I[i]>>J[i];
    }
    for (int i = 0; i < q; i++)
    {
        cout<<vec[ I[i] ][ J[i] ]<<endl;
    }
    
	return 0;
}

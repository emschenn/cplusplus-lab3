#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	ifstream inFile("infile",ios::in); 
        if(!inFile) 
        { 
               	cerr<<"Failed reading"<<endl; 
        	exit(1); 
      	} 
	int size,i;
	inFile >> size;
        vector<int> cow(size);
	for(i=0; i<size; ++i)
		inFile >> cow.at(i);
	sort(cow.begin(),cow.end());
	cout<<cow.at(size-5)+cow.at(size-4)+cow.at(size-3)+cow.at(size-2)+cow.at(size-1)<<endl;
}

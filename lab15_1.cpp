#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int y = 0;
	int A = 1;
	T x;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < i+1; j++)
		{
			if(d[i] > d[j])
			{
				x = d[j];
				d[j]=d[i];
				d[i] = x;
				y++;
				
				
			}
		}
		
		
		cout << "Pass "<<A<<":";
		A++;
		for(int k =0; k < N; k++)
				{
					cout << d[k]<<" ";
					
				}
		cout << "\n";
		
	}
}



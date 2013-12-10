//В матрице А(N,N) найти первую строку, не содержащую отрицательных элементов, и умножить ее как вектор на матрицу А.

#include <iostream>

using namespace std;

const int n=3;

int main(){
	int A[n][n],kol=0,index,M[n]={0},k=0;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			cin>>A[i][j];
	for (int i=0;i<n;i++)
    {
		for (int j=0;j<n;j++)
			if (A[i][j]>=0)kol++;
		if (kol==n)
    {
		index=i;
		break;
		}kol=0;
	}
	//while(k<n){
		for (int i=0;i<n;i++)
    {
			for (int j=0;j<n;j++)
        {
				M[k]+=A[index][j]*A[j][i];
		}
			k++;
	}
	//cout<<index<<endl;
	for (int i=0;i<n;i++)cout << M[i]<<" ";cout << endl;
}

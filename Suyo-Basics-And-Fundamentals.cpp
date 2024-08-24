#include <iostream>
using namespace std;

int main(){
	int array1[10], array2[10], arrayMerge[20];
	int i, j; 
	int temp;
	
	//first array input
	cout << "----- Array 1 -----" << endl;
	for (int i = 0 ; i < 10; i++){
		cout << "Element " << i+1 << ": ";
		cin >> array1[i];	
	}
	
	//second array input
	cout << "\n----- Array 2 -----" << endl;
	for (int i = 0 ; i < 10; i++){
		cout << "Element " << i+1 << ": ";
		cin >> array2[i];	
	}
	
	//merge array
	for (int i=0; i < 10; i++){
		arrayMerge[i] = array1[i];
	}
	for (int i=0; i < 10; i++){
		arrayMerge[i+10] = array2[i];
	}
	
	//merged array display
	cout << "\nMerged arrays:" << endl;
	for (int i=0; i < 20; i++){
		cout << arrayMerge[i] << " ";
	}
	
	//sort descending
	for (int i = 0; i < 20 - 1 ; i++){
		for (int j = 0; j < 20-i-1 ; j++){
			if (arrayMerge[j] < arrayMerge[j+1]){
				int temp = arrayMerge[j];
				arrayMerge[j] = arrayMerge[j+1];
				arrayMerge[j+1] = temp;
			}
		}
	}
	//display descending	
	cout << "\n\nSorted Array (Descending)" << endl;
	for (int i = 0; i < 20 ; i++){
		cout << arrayMerge[i] << " ";
	}
	return 0;
}   
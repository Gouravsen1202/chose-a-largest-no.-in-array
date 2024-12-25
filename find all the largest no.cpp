#include<iostream>
using namespace std;
int main (){
	int arr[5]={10,30,50,20,40};
	int k=2;
	
	for(int i=0;i<k;++i){
		for(int j=i+1;j<5;j++){
			if(arr[j]>arr[i]){
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
		cout<<arr[k-1]<<endl;

}

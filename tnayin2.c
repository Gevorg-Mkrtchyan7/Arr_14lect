# include <stdio.h>

int main()
{
	int arr[5];
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for(int i = 0; i < 5; ++i){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("%d \n", min);
}

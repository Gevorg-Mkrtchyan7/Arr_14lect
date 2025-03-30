# include <stdio.h>

int main()
{
	int arr[3][3];
	int a = 0;
	int b = 0;
	int c = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]);
	}

	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			sum += arr[i][j];
		}
		printf("%d, ", sum);
	}
	printf("\n");
}

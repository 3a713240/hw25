#include<stdio.h>
#include<stdlib.h>

int main(void){
	int x,y;
	int *ptr[4];
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	
	for(x=0;x<4;x++){
		ptr[x]=array[x];
	}

	for(x=0;x<4;x++){
		for(y=0;y<3;y++){
			printf("%3d", *(ptr[x]+y));
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 

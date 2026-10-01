#include<stdio.h>
void main(){
	int matriz [5][5]={
		{1,18,4,7,3},
		{10,8,14,17,31},
		{11,81,41,71,13},
		{19,24,4,70,30},
		{27,18,4,70,33},
	};
for(int i = 0; i < 5; i++){
	for(int j = 0; j < 5; j++){
		printf("%d\n", matriz[i][j]);	
	}
}
}
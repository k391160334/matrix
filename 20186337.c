
#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

void indexAddMat(int arr1[][3],int arr2[][3],int sum[][3]);
void ptrProdMat(int arr1[][3],int arr2[][3], int multiply[][3]);
int main() {
	int arr[3][3];
	int sum[3][3];
	int multiply[3][3] = { 0 };

	printf("arr: 9���� ������ �����̽��� ���ͷ� �����Ͽ� �Է�\n");
	for (int i = 0; i <9; i++) {
			scanf("%d", *arr+i);              //arr1+i���ϸ� �Է¹������� 1���� ������ ������ ����           //*arr+1�ϸ� �Լ����� �Ű������� ������ �̻��� ���� �����
	}
	
	indexAddMat(arr,arr, sum);
	printf("AddMat\n \t%d\t%d\t%d\t\n\t%d\t%d\t%d\t\n\t%d\t%d\t%d\t\n", sum[0][0], sum[0][1], sum[0][2],sum[1][0],sum[1][1],sum[1][2],sum[2][0],sum[2][1],sum[2][2]);
	
	ptrProdMat(arr, arr, multiply);
	printf("ProdMat\n \t%d\t%d\t%d\t\n\t%d\t%d\t%d\t\n\t%d\t%d\t%d\t\n", multiply[0][0], multiply[0][1], multiply[0][2], multiply[1][0], multiply[1][1], multiply[1][2], multiply[2][0], multiply[2][1], multiply[2][2]);
	
}


void indexAddMat(int arr1[][3], int arr2[][3],int sum[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = arr1[i][j] +arr2[i][j];
		}
	}
}
void ptrProdMat(int arr1[][3],int arr2[][3], int multiply[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				*(*(multiply+i) + j) += (*(*(arr1+i) + k)) * (*(*(arr2+k) + j));
			}
		}
	}
}


#include <stdio.h>
#include <stdlib.h>
// Matrix Diagonal Summation
int sum_diag_matrix(int N, int arr[][N]) {
	int tmp = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i == j) {
				tmp += arr[i][j];	
			}
			if (i + j == N - 1) {
				tmp += arr[i][j];
			}
		}
	}
	return tmp;
}
//2. Number Pattern Generation
void number_pattern_generation(int n) {
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			matrix[i][j] = j + 1;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
//3. Prime Number Detection
int prime_notPrime(int n) {
	for (int i = 2; i < n/2; ++i) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
//4. Array Element Frequency Counter
int* arr_elem_counter(int arr[],int size) {
	int* new_arr = (int*)malloc(size * sizeof(int));
	if(new_arr == NULL) {
		return NULL;
	}
	int count = 0;
	for (int i = 0; i < size; ++i) {
		count = 0;
		for (int j = 0; j < size; ++j) {
			if (arr[i] == arr[j]) {
				++count;
			}
		}
			new_arr[i] = count;		
	}
	return new_arr;
}
//5. Finding the Largest and Second Largest Element
void largets_secondLar(int arr[],int size) {
	int larg_max = 0;
	int sec_larg_max = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > larg_max) {
			sec_larg_max = larg_max;
			larg_max = arr[i];
		}
		if (arr[i] > sec_larg_max && arr[i] < larg_max) {
			sec_larg_max = arr[i];
		}
	}
	printf("Largest Element %d\n", larg_max);
	printf("Second Largest Element %d\n", sec_larg_max);
}
//6. Sum of Odd and Even Numbers
void sum_odd_even(int n) {
	int odd = 0;
	int even = 0;
	for (int i = 1; i <= n; ++i) {
		if (i % 2 == 0) {
			even += i;
		}else {
			odd += i;
		}
	}
	printf("Sum Even %d\n", even);
	printf("Sum Odd %d\n", odd);
}
//7. Reversing a Number
void revers_number(int n) {
	int revers = 0;
	while(n) {
		revers = revers * 10 + n % 10;
		n /= 10; 
	}
	printf("Revers number %d\n", revers);
}
//8. Palindrome Number Checker
void palind_num(int n) {
	int rev_pal = 0;
	int tmp = n;
	for (int i = 0; i < n; ++i) {
		if (tmp == 0) {
			break;
		}
		rev_pal = rev_pal * 10 + tmp % 10;
		tmp /= 10;
	}
	if(rev_pal == n) {
		printf("Palindrome\n");
	}else {	
		printf("Not Palindrome\n");
	}
}
int missing_number(int arr[],int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	int res = ((1 + size + 1) / 2) * (size + 1);
	int miss = res - sum; 
}
int main() {
/*	//1. Matrix Diagonal Summation
	printf("Enter matrix 5x5\n");
	int N = 5;
	int matrix [N][N];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("%d\n", sum_diag_matrix(N, matrix));
	//2. Number Pattern Generation
	printf("2. Number Pattern Generation\n");
	int num = 0;
	scanf("%d", &num);
	number_pattern_generation(num);*/
	//3. Prime Number Detection
/*	printf("Enter number N  ");
	int Num = 0;
	scanf("%d", &Num);
	if (prime_notPrime(Num)) {
		printf("Prime number\n");
	}else{
		printf("Not prime number\n");
	}
	//4. Array Element Frequency Counter
	printf("Enter array of N-5 integer\n");
	int size = 5;
	int* arr = (int*)malloc(sizeof(int) * size);
	if(arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}
	for (int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}
	int* new_arr = arr_elem_counter(arr, size);
	if (new_arr != NULL) {
		for (int i = 0; i < size; ++i) {
			printf("Element %d - count %d\n", arr[i], new_arr[i]);
		}
		free(new_arr);
	}*/
/*	//5. Finding the Largest and Second Largest Element	
	int arr_larg[] = {15, 22, 36, 47, 50};
	int arr_size = 5;
	largets_secondLar(arr_larg, arr_size);	*/
	
/*	//6. Sum of Odd and Even Numbers
	printf("Enter number : Sum of Odd and Even Numbers\n");
	int number = 0;
	scanf("%d", &number);
	sum_odd_even(number); 
	//7. Reversing a Number
	printf("Enter Number : Rversing a number\n");
	int rev_num = 0;
	scanf("%d", &rev_num);
	revers_number(rev_num); */
	//8. Palindrome Number Checker
/*	printf("Enter number : Palindrome Number Checker\n");
	int pal_num = 0;
	scanf("%d", &pal_num);
	palind_num(pal_num); */
	//9. Find Missing Number in Array
	int miss_arr[] = {2, 5, 3, 6, 4, 9, 7, 1};
	int miss_size = 8;
	printf("%d\n", missing_number(miss_arr, miss_size));
	
}


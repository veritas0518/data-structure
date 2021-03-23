//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[]) {
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2) {
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = temp;
//
//
//}
//int main() {
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
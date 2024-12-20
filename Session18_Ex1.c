#include <stdio.h>
#include <string.h> 

int main() {
	struct Student {
		int id;
		char fullName[100];
		int age;
		char gender[100];
		char phone[100];
	};
	struct Student user01={1,"NguyenQuocHung",18,"Nam","0123456789"};
	printf("Thong tin sin vien la: \n");
	printf("Id: %d\n", user01.id);
	printf("Ho va ten: %s\n",user01.fullName);
	printf("Tuoi: %d\n",user01.age);
	printf("Gioi tinh: %s\n",user01.gender);
	printf("So dien thoai la: %s\n",user01.phone);
	
	return 0;	 
} 

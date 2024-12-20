#include <stdio.h>
#include <string.h>

int main() {
	struct Student {
		char fullName[100];
		int age;
		char phone[100];
	};
	struct Student user[5];
	for(int i = 0; i < 5; i++){
		printf("Thong tin sinh vien vien.\n");
		printf("Nhap thong tinh sinh vien thu %d:\n", i+1);
		printf("Nhap ho va ten: ");
		fflush(stdin);
		fgets(user[i].fullName, sizeof(user[i].fullName), stdin);
		printf("Nhap tuoi: ");
		scanf("%d", &user[i].age);
		printf("Nhap so dien thoai: ");
		fflush(stdin);
		fgets(user[i].phone,sizeof(user[i].phone), stdin);
	}
	for(int i= 0; i < 5; i++) {
		printf("Thong tin sinh vien thu %d.\n", i + 1);
		printf("Ho va ten sinh vien: %s\n", user[i].fullName);
		printf("Tuoi sinh vien: %d\n", user[i].age);
		printf("So dien thoai sinh vien: %s\n", user[i].phone);
		
	}
	return 0;
	
}

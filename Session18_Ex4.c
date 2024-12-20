#include <stdio.h>
#include <string.h>

int main() {
	struct Student {
	int id;
	char fullName[100];
	int age;
	char phone[100];
	};
	struct Student user[50];
	for(int i = 0; i < 50; i++) {
		printf("Thong tin sinh vien.\n");
		printf("Thong tin sinh vien thu %d :\n", i + 1);
		user[i].id = i + 1;
		printf("Nhap ho va ten: ");
		fflush(stdin);
		fgets(user[i].fullName, sizeof(user[i].fullName), stdin);
		printf("Nhap tuoi:");
		scanf("%d", &user[i].age);
		printf("Nhap so dien thoai: ");
		fflush(stdin);
		fgets(user[i].phone, sizeof(user[i].phone), stdin);
	
	}
	for(int i = 0; i < 50; i++) {
		printf("Thong tin sinh vien thu %d. \n");
		printf("Id: %d\n", user[i].id);
		printf("Ho va ten: %s\n", user[i].fullName);
		printf("Tuoi: %d\n", user[i].age);
		printf("So dien thoai: %s", user[i].phone);
		
	}
	return 0;
	
}

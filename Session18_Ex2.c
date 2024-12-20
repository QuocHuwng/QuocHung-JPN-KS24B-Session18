#include <stdio.h>
#include <string.h>

int main() {
	struct Student{
		int id;
		char fullName[100];
		int age;
		char gender[100];
		char phone[100];
	};
	struct Student user00;
	printf("Moi ban nhap vao thong tin ca nhan: \n");
	
	printf("Moi ban nhap vao id sinh vien: ");
    scanf("%d", &user00.id);
    
	fflush(stdin);
    printf("Nhap ho va ten cua ban: ");
    fgets(user00.fullName, sizeof(user00.fullName), stdin);
    
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &user00.age);
    
    printf("Nhap gioi tinh cua ban: ");
    scanf("%s", &user00.gender);
    
    fflush(stdin);
	printf("Nhap so dien thoai cua ban: ");
	fgets(user00.phone, sizeof(user00.phone), stdin);
	
	printf("Id cua ban la: %d\n",user00.id);    
	printf("Ho ten cua ban la: %s\n",user00.fullName);
	printf("Tuoi cua ban la: %d\n",user00.age);
	printf("Gioi tinh cua ban la: %s\n",user00.gender);
	printf("So dien thoai cua ban la: %s\n",user00.phone);
    return 0;
    
}

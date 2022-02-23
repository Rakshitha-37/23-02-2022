#include<stdio.h>
#define SWAP(x,y) \
	int temp = x; \
	x = y; \
	y = temp;

typedef struct Rectangle
{
	unsigned int length;
	unsigned int width;
	unsigned int area;
}Rect;

int area(Rect *s1)
{
	s1->area = s1->length * s1->width;
}

int main()
{
	Rect s1;
	printf("Enter the length: ");
	scanf("%d", &s1.length);
	printf("Enter the width: ");
	scanf("%d",&s1.width);
	SWAP(s1.length, s1.width);
	printf("After swapping: length = %d\n", s1.length);
	printf("After swapping: width = %d\n", s1.width);
	int (*fptr)(Rect *) = area;
	fptr(&s1);
	printf("Area = %d\n", s1.area);
}

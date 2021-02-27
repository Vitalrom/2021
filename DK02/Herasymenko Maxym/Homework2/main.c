#include <stdio.h>
#include <stdlib.h>
#include "point.h"//�������� � �������
#include "line.h"//�������� � �����, �������� ������� �������� � ����� ��������

int main(int argc, const char * argv[])
{
    //������ ��� ����������, ��� ������� �� ������� ���� ��������, �� � ��� �������
Point *p = createPoint(-2,6);//������ ���������� ��� ����� �����
    printf("Point A: ");
    printPoint(p);
    printf("\n");

    printf("Point B: ");
    Point *copy = copyPoint(p);//�� ��������� ���� ������� ��������� ������� �����(������� ����)
    copy->x = 2;
    printPoint(copy);
    printf("\n");

    printf("Point C: ");
    Point *copy1 = copyPoint(p);
    copy1->y = 2;
    printPoint(copy1);
    printf("\n");

    printf("Point D: ");
    Point *copy2 = copyPoint(p);
    copy2->y = 2;
    copy2->x = 2;
    printPoint(copy2);
    printf("\n");

    printf("Square\n");
    Line *l = createLineByPoints(p,copy, copy1, copy2);//�������� ���� ����� � ������������ �����
    printLine(l);
    printf("is equal points: %d\n", isEqualPoints(p, copy, copy1, copy2));//�������� �� �������� �����
    printf("Length between two points: %f", lenghtLine(l));
    printf("\n");
    printf("S of square: %f\n", power(lenghtLine(l), 2));// S = a^2 => S = power(lenghtLine(l), 2)

    deletePoint(p);
	deletePoint(copy);
	deletePoint(copy1);
	deletePoint(copy2);
	deleteLine(l);

}

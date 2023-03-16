#include <stdio.h>
#define PI 3.14
double get_area(double);
double get_circumfrence(double);
void show(double, double);

int main()
{
    double radius, circumfrence, area;
    printf("\n Enter Radius");
    scanf("%d", &radius);
    circumfrence = get_circumfrence(radius);
    area = get_area(radius);
    void show(area, circumfrence);
    return 0;
}
double get_area(radius){
    return (PI * radius * radius);
}
double get_circumfrence(radius)
{
    return (2 * PI * radius * radius);
}
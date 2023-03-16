#include <stdio.h>
#include <stdlib.h>
float area; // find out what is the difference between a float and a double
int shape;
int length;
int width;
int radius;
int choice;

int main()
{

    printf("Choose a shape from the following:\n");
    printf("1.Circle\n");
    printf("2.Polygon\n");
    printf("3.Triangle\n");
    printf(":");
    scanf("%s", &shape);
    choice = shape;
    return choice;
}
int statement()
{
    if (choice == 1)

        circle();
}

int circel(int radius)
{
    printf("#####This is the area for a circle#####\n");
    printf("Enter the radius of the circle:\n");
    scanf(" %n", &radius);
    area = radius * radius * 3.14;
    printf("This is the Area of the circle %d", area);
}

int polygone()
{
    printf("#####This is the area of a Rectanlge//Square#####\n");
    printf("Enter the Length: ");
    scanf("%n", &length);
    printf("Enter the width: ");
    scanf("%n", &width);
    area = length * width;
    printf("This is the Area of the Rectangle//Square %d", area);
}

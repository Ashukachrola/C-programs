#include <stdio.h>

float calculateCubeVolume(float side)
{
    return side * side * side;
}

float calculateCuboidVolume(float length, float width, float height)
{
    return length * width * height;
}

float calculateSphereVolume(float radius)
{
    return 4/3 * 3.14 * (radius * radius * radius);
}

float calculateCylinderVolume(float radius, float height)
{
    return 3.14 * radius * radius * height;
}

float calculateConeVolume(float radius, float height)
{
    return (1/3)* 3.14 * radius * radius * height;
}

void main()
{
    int choice;
    float result;

    printf("Choose the shape for calculate the volume :\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("4. Cylinder\n");
    printf("5. Cone\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        float side;
        printf("Enter side :");
        scanf("%f", &side);
        result = calculateCubeVolume(side);
        break;
    }
    case 2:
    {
        float length, width, height;
        printf("Enter Length, Width and Height :");
        scanf("%f %f %f", &length, &width, &height);
        result = calculateCuboidVolume(length, width, height);
        break;
    }
    case 3:
    {
        float radius;
        printf("Enter Radius :");
        scanf("%f", &radius);
        result = calculateSphereVolume(radius);
        break;
    }
    case 4:
    {
        float radius, height;
        printf("Enter Radius and height :");
        scanf("%f, %f", &radius, &height);
        result = calculateCylinderVolume(radius, height);
        break;
    }
    case 5:
    {
        float radius, height;
        printf("Enter Radius and height :");
        scanf("%f, %f", &radius, &height);
        result = calculateConeVolume(radius, height);
        break;
    }
    
    default:
        printf("Invalid Choice");
        break;
    }
    printf("Result : %f", result);
}
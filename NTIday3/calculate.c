#include <stdio.h>
/* NORMAL FUNCTION */
float Diameter(float Radius);
float Circumference(float Radius);
float Area(float Radius);
/* MACRO */
#define DIA(Radius) (Radius * 2)
#define CIRCUM(Radius) (2 * 3.14 * Radius)
#define AREA(Radius) (3.14 * Radius * Radius)
/* INLINE FUNCTION */
static inline float Inline_Diameter(float Radius)
{
    return Radius * 2;
}
static inline float Inline_Circumference(float Radius)
{
    return 2 * 3.14 * Radius;
}
static inline float Inline_Area(float Radius)
{
    return 3.14 * Radius * Radius;
}
int main()
{
    float Radius = 0.0;
    float Dia = 0.0;
    float Circum = 0.0;
    float Area1 = 0.0;
    printf("Enter the Radius of Circle: ");
    scanf("%f", &Radius);
    /* NORMAL FUNCTION */
    Dia = Diameter(Radius);
    Circum = Circumference(Radius);
    Area1 = Area(Radius);
    printf("\n--- NORMAL FUNCTION ---\n");
    printf("Diameter = %f\n", Dia);
    printf("Circumference = %f\n", Circum);
    printf("Area = %f\n", Area1);
    /* MACRO */
    printf("\n--- MACRO ---\n");
    printf("Diameter = %f\n", DIA(Radius));
    printf("Circumference = %f\n", CIRCUM(Radius));
    printf("Area = %f\n", AREA(Radius));
    /* INLINE FUNCTION */
    printf("\n--- INLINE FUNCTION ---\n");
    printf("Diameter = %f\n", Inline_Diameter(Radius));
    printf("Circumference = %f\n", Inline_Circumference(Radius));
    printf("Area = %f\n", Inline_Area(Radius));
    return 0;
}
/* NORMAL FUNCTION */
float Diameter(float Radius)
{
    return Radius * 2;
}
float Circumference(float Radius)
{
    return 2 * 3.14 * Radius;
}
float Area(float Radius)
{
    return 3.14 * Radius * Radius;
}
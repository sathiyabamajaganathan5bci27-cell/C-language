#include <stdio.h>
struct Student { char name[20]; int roll; };
int main() {
    struct Student s1 = {"Alice", 101};
    printf("Name: %s, Roll: %d", s1.name, s1.roll);
    return 0;
}

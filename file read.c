#include <stdio.h>

struct Student {
    char name[20];
    int mark;
};

int main() {
    struct Student s1 = {"Arjun", 95}, s2;
    FILE *fp;

    // File-la ezhudhudhal
    fp = fopen("data.bin", "wb");
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);

    // File-la irundhu padithal
    fp = fopen("data.bin", "rb");
    fread(&s2, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("Read from file: %s has %d marks\n", s2.name, s2.mark);
    return 0;
}

int main() {
    unsigned int i = 1;
    char *c = (char*)&i;
    (*c) ? printf("Little Endian") : printf("Big Endian");
}

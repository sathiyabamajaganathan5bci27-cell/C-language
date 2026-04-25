void print_binary(int n) {
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        (k & 1) ? printf("1") : printf("0");
    }
}

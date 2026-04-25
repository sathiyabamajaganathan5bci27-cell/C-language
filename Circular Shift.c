unsigned int rotate_left(unsigned int n, unsigned int d) {
    return (n << d) | (n >> (32 - d));
}

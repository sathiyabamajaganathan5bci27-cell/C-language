float fast_inv_sqrt(float number) {
    long i;
    float x2, y;
    x2 = number * 0.5F;
    y  = number;
    i  = *(long *) &y;                       // Evil floating point bit level hacking
    i  = 0x5f3759df - (i >> 1);               // What the... ?
    y  = *(float *) &i;
    y  = y * (1.5F - (x2 * y * y));           // 1st iteration of Newton's method
    return y;
}

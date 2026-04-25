#define PORTB_ADDR 0x25
int main() {
    volatile unsigned char *portB = (unsigned char *)PORTB_ADDR;
    *portB |= 0x01; // Set the 0th bit high
}

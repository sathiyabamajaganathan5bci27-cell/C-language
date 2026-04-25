#include <stdio.h>
#include <stdlib.h>

struct DataPacket {
    int id;
    int data_size;
    int payload[]; // Flexible Array Member (No size specified)
};

int main() {
    int n;
    printf("Enter number of data elements: ");
    scanf("%d", &n);

    // Memory allocate pannumbodhu extra size sethu allocate panrom
    struct DataPacket *p = malloc(sizeof(struct DataPacket) + n * sizeof(int));
    
    p->id = 1;
    p->data_size = n;

    for (int i = 0; i < n; i++) {
        p->payload[i] = i * 10;
        printf("Payload[%d]: %d\n", i, p->payload[i]);
    }

    free(p);
    printf("50 Programs Success! Memory Freed.\n");
    return 0;
}

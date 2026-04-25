struct StatusRegister {
    unsigned int is_active : 1;  // Uses exactly 1 bit
    unsigned int error_code : 3; // Uses exactly 3 bits (values 0-7)
    unsigned int reserved : 4;   // Uses 4 bits
};

#include <elf.h>

typedef struct encl_map_info {
    void* base;
    void* entry_point;
} encl_map_info;

void load_elf(char* file_to_map, encl_map_info* result);

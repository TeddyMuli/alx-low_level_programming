#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));


    hash_table->array = (unsigned long int *)malloc(size * sizeof(unsigned long int));
    
    hash_table->size = size;
    return hash_table;
}
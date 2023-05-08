#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    hash_table->array = malloc(size * sizeof(unsigned long int));
    hash_table->size = size;
    if (hash_table->array == NULL)
        return NULL;
    for (i = 0; i < size; i++)
        hash_table->array[i] = NULL;

    return hash_table;
}
#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>
#include <cstddef>

extern "C" {

void *memcpy(void *__restrict dest, const void *__restrict src, std::size_t n);
void *memset(void *s, int c, std::size_t n);
void *memmove(void *dest, const void *src, std::size_t n);
int memcmp(const void *s1, const void *s2, std::size_t n);

}

#endif

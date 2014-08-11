#ifndef NEW_H_
#define NEW_H_

#include <stddef.h>

void* new(const void *_class, ...);
void* clone(void *self);
void delete(void *self);
int differ(const void *self, const void *b);
size_t sizeOf(const void *self);

#endif /* NEW_H_ */

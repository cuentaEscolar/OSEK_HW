#include <stdint.h>


#define PARENT_INDEX(x)\
  ((x-1)>>1)

#define LEFT_CHILD(x)\
  ((x<<1)+1)

#define RIGHT_CHILD(x)\
  ((x<<1)+2)

// 8 bit queue
typedef struct {
  uint8_t keys[256];
  void* values[256];
} BinaryHeap;

void ShiftUp(uint8_t,BinaryHeap*);
void ShiftDown(uint8_t,BinaryHeap*);

typedef uint8_t PQ;

//v,k
void PQEnqueue(void*, uint8_t k);

void* PQFindMax();
void* PQExtractMax();


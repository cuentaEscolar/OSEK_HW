#include <stdint.h>

#define MAX_INDEX (255)

void swap(uint8_t *x, uint8_t *y);
#define PARENT_INDEX(x)\
  ((x-1)>>1)

#define LEFT_CHILD(x)\
  ((x<<1)+1)

#define RIGHT_CHILD(x)\
  ((x<<1)+2)

//tasks are addressed by their id
// 8 bit queue
typedef struct {
  uint8_t keys[256];
  uint8_t values[256];
  uint8_t size;
} BinaryHeap;

BinaryHeap* NewMaxHeap();

uint8_t BHGetMax(BinaryHeap*);
void BHShiftUp(uint8_t, uint8_t, BinaryHeap*);
void BHShiftDown(uint8_t, uint8_t, BinaryHeap*);


typedef uint8_t PQ;

//v,k
void PQEnqueue(uint8_t, uint8_t k);

uint8_t PQFindMax();
uint8_t PQExtractMax();


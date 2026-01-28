
uint8_t
BHGetMax(BinaryHeap* bh){
  return bh->values[0];
};

void 
swap(uint8_t *x, uint8_t *y){
  uint8_t temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void
BHShiftUp(uint8_t i, uint8_t v,BinaryHeap* bh)
{
  uint8_t* keys ;
  uint8_t* values  ;
  uint8_t parent ;

  keys = bh->keys;
  values  = bh->values;
  while (i > 0  ) {
    parent = PARENT_INDEX(i);
    if (keys[parent] >= keys[i]) break;
    swap(keys + parent, keys + i);
    swap(values+ parent, values+ i);
    i = parent;
  }

}

void 
BHShiftDown(uint8_t i, uint8_t v, BinaryHeap* bh){

  uint8_t maxIndex;
  uint8_t size;
  uint8_t l;
  uint8_t r;
  uint8_t* keys ;
  uint8_t* values  ;

  size = bh->size;
  l = LEFT_CHILD(i);
  r = RIGHT_CHILD(i);

  if (l <= size && keys[l] > keys[maxIndex]) {
        maxIndex = l;
  }

  if (r <= size && keys[r] > keys[maxIndex]) {
        maxIndex = r;
  }
  if (i != maxIndex) {
      swap(arr[i], arr[maxIndex]);
      shiftDown(maxIndex, arr, size);
  }

}


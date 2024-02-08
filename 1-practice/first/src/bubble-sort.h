// [V511. The sizeof() operator returns pointer size instead of array size.] https://pvs-studio.com/en/docs/warnings/v511/

#include <cstddef>
void bubbleSort(int *arr[], size_t size);
void bubbleSortExample();
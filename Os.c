#include <stdint.h>
#include "SchedulerApi.h"
#include "./Utils/PriorityQueue.h"
#define TASK_MAX (255)

// #define _X(a) BinaryHeap a ## PQ;
//   SCHEDULE_STATE_LIST
// #undef _X

TaskRefType task_link_table[TASK_MAX];
uint8_t task_arr[TASK_MAX];

uint8_t task_no;
uint8_t mac_num_actual=3;
uint8_t current_task_id;
uint8_t current_max_task_priority;

void os_init(){
  current_task_id = 0;
  task_no = 0;

}

StatusType DeclareTask(uint8_t task_id, TaskRefType tr){
  task_link_table[task_id] = tr;
  task_arr[task_no] = task_id;
  task_no++;
}

StatusType Schedule(){
  TaskRefType currentTask;
  uint8_t currentTaskStatus;
  uint8_t currentTaskPriority;
  uint8_t i;

  currentTask = task_link_table[task_arr[current_task_id]];
  currentTaskStatus = currentTask->STATE;

  if ( currentTaskStatus == SUSPENDED) 
  {
    for (i = 0; i<task_no; i++)
    {
      currentTask = task_link_table[task_arr[current_task_id]];
      currentTaskStatus = currentTask->STATE;
      currentTaskPriority = currentTask->PRIORITY;
      if (currentTaskStatus != READY) continue;
      if  ( currentTaskPriority <=  current_max_task_priority) continue;
      current_max_task_priority = currentTaskPriority;
      cu


    }

  }


}

int main(int argc, char *argv[])
{
  return EXIT_SUCCESS;
}

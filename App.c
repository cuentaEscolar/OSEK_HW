#include "./Types.h"
TaskType task_A,task_B,task_C;
TASK (task_A)
{
 activate_task (task_B.id);
 terminate_task();
}

Task(task_B)
{

 chain_task();
}

Task(task_C)
{

 terminate_task();
}

main ()
{
  SET_TASK(task_A, 0, FULL, 1, 0); 
  SET_TASK(task_B, 1, FULL, 0, 0); 
  SET_TASK(task_C, 2, FULL, 0, 0); 
    task_arr[taska].prioridad=1;
	
	os_init();
	while(1);

}


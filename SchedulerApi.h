#include <stdint.h>
#include <Types.h>

#define TASK(TaskName)\
  StatusType Func ## Task ## TaskName(void)

#define DeclareTask(TaskName, TaskProperties, TaskPriority, EntryPoint );
StatusType ActivateTask(uint8_t);
StatusType TerminateTas(void);
StatusType ChainTask(uint8_t);
StatusType Schedule(void);
StatusType GetTaskId(TaskRefType);
StatusType GetTaskState ( uint8_t, TaskStateRefType );


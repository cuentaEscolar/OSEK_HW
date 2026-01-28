#include <stdint.h>
#include <Types.h>

void DeclareTask(void*);
StatusType ActivateTask(uint8_t);
StatusType TerminateTas(void);
StatusType ChainTask(uint8_t);
StatusType Schedule(void);
StatusType GetTaskId(TaskRefType);
StatusType GetTaskState ( uint8_t, TaskStateRefType );


#include <stdint.h>
#include <Types.h>


#define NEW_TASK(TaskName, priority, schedule, autostart, activation ) \
    TaskName .id = __COUNTER__,   /* automatic unique ID */                     \
        TaskName.PRIORITY = priority;                                             \
        TaskName.STATE = TASK_STATE_SUSPENDED;                                     \
        TaskName.SCHEDULE = schedule;                                              \
        TaskName.ACTIVATION = activation;                                          \
        TaskName.AUTOSTART = autostart;                                            \
        TaskName.ENTRY_POINT = Func ## TaskName;                                        \
        TaskName.RETURN_PC = 0x0 ; \

#define TASK(TaskName)\
  StatusType Func ## TaskName(void)

StatusType DeclareTask(uint8_t, TaskRefType); 
StatusType ActivateTask(uint8_t);
StatusType TerminateTas(void);
StatusType ChainTask(uint8_t);
StatusType Schedule(void);
StatusType GetTaskId(TaskRefType);
StatusType GetTaskState ( uint8_t, TaskStateRefType );


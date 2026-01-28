#include <stdint.h>

#define TASK(TaskName) StatusType Func ## Task ## TaskName(void)

#define STATUS_TYPE_LIST \
_X(E_OK)\
_X(E_OS_ACCESS)\
_X(E_OS_CALLEVEL)\
_X(E_OS_ID)\
_X(E_OS_LIMIT)\
_X(E_OS_NOFUNC)\
_X(E_OS_RESOURCE)\
_X(E_OS_STATE)\
_X(E_OS_VALUE)


#define _X(a) a,
typedef enum
{
  STATUS_TYPE_LIST
}
;StatusType
#undef _X


#define SCHEDULE_STATE_LIST \
  _X(SUSPENDED)\
  _X(READY)\
  _X(RUNNING)\
  _X(WAITING)\
  _X(INVALID_TASK)

/// for Tasks
typedef uint8_t TaskType;
typedef TaskType* TaskRefType;
#define _X(a) a,
typedef enum {
SCHEDULE_STATE_LIST
} TaskStateType;
#undef _X
typedef TaskStateType* TaskStateRefType;




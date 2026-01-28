
// Macro to define a task
#define NEW_TASK(name, priority, schedule, autostart, activation ) \
    TaskType name = {                                                      \
        .id = __COUNTER__,   /* automatic unique ID */                     \
        .PRIORITY = priority,                                             \
        .STATE = TASK_STATE_SUSPENDED,                                     \
        .SCHEDULE = schedule,                                              \
        .ACTIVATION = activation,                                          \
        .AUTOSTART = autostart,                                            \
        .ENTRY_POINT = Func ## name ,                                        \
        .RETURN_PC = 0x0 \
    };

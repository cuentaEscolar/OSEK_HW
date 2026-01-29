TaskType task_A,task_B,task_C;
TASK (taska)
{
 activate_task (task_B.id);
 terminate_task();
}

taskb()
{

 chain_task();
}

taskc()
{

 terminate_task();
}

main ()
{
  NEW_TASK(task_A, priority, schedule, autostart, activation ); 
  NEW_TASK(task_B, priority, schedule, autostart, activation ); 
    task_arr[taska].prioridad=1;
	
	os_init();
	while(1);

}


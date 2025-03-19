# Dynamic Scheduling
Exploration of Dynamic Scheduling
- Tasks without deadlines (FCFS, SJF, SRTN, PB, RR)
- Tasks with deadlines (EDD, EDF, EDF*)
- Periodic Tasks (EDF, DM)
### Algorithms for Tasks without Deadlines

- #### FCFS(first come, first served): 
    According to the motto ” First come, first served“, the tasks are processed one after the other. This is fair, because everyone has to queue at the back of the queue. If, however, there are already a lot of tasks with long calculation times in the queue, it can take a long time for a new task to be assigned to the CPU.
- #### SJF (shortest job first): 
    Here the tasks are planned according to the motto ” The smallest first“. This has the advantage that the CPU is released as fast as possible and thus the average waiting time is minimized.
- #### SRTN(shortest remaining time next): 
    This is variant of the SJF scheduling algorithm with preemption. At any time, the task whose remaining calculation time is minimal is selected and planned.
- #### PB(priority-based): 
    Each task has a fixed priority according to which it is selected and planned. The algorithm is also uses preemption.
- #### RR(round robin):
    The problem of starvation of a task is avoided by a fixed time quantum Q, after which the task will be changed at the latest. The executable tasks are put back into the queue again.

### Algorithms for Tasks with Deadlines

- #### EDD(earliest due date): 
    The algorithm minimizes lateness by prioritizing tasks with early dead lines. All tasks can not be preempted in their execution and must have the same release time.
- #### EDF(earliest deadline first): 
    This scheduling algorithm is similar to the EDD algorithm in its task selection. However, the tasks can have different realse times and can be preempted.
- #### EDF*:
    With this variant, tasks can have dependencies between each other. The individual release times and deadlines are transformed according to the dependencies and then planned using the EDFprocedure.

### Algorithms for Periodic Tasks

- #### EDF(earliest deadline first): 
    This scheduling algorithm is similar to the EDD algorithm in its task selection. However, the tasks can have different realse times and can be preempted.
- #### DM(deadline monotonic):
    In this scheduling algorithm, the deadlines of tasks do not necessarily have to be equal to their periods. Each task is assigned a priority. The smaller the relative deadline t∗ d(vi), the higher the priority. Higher priority tasks preempt lower priority tasks
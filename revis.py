from itertools import count


class TaskTimeAnalyzer:
    def __init__(self,task_times):
        self.task_times= task_times

    def average_short_task_time(self):
        sum = 0
        count = 0
        for task in self.task_times:
            if task <= 5:
                sum += task
                count += 1

        return sum / count


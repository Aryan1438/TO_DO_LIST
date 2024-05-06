The application starts by printing a header with asterisks to make it visually appealing. It then enters a loop where it prompts the user to enter tasks. Each task is stored as a `Task` struct, which contains the task description and a boolean flag indicating whether the task is completed or not.

After the user exits the task entry loop by typing "Exit", the application prints the entire list of tasks entered by the user. Each task is numbered and displayed with a checkbox-like indicator showing whether it's completed or not.

Next, the application enters another loop where it prompts the user to enter the number of a task to mark it as completed. If a valid task number is entered, the corresponding task's `completed` flag is set to `true`. The user can continue marking tasks as completed until they enter 0.

After the user finishes marking tasks, the application displays an updated to-do list. This time, the tasks are displayed in a tabular format with a header row. Each task is displayed on a new line, with a checkbox-like indicator showing its completion status, followed by the task description. The completed tasks are marked with a different indicator than the pending tasks, making it easy to distinguish between them.

The application uses various C++ features like `vector` for storing tasks, `struct` for representing tasks, and formatted output using `setw` and `left`/`right` manipulators to create a neat and organized display of the to-do list.

Overall, the application provides a simple and intuitive command-line interface for users to manage their tasks, mark them as completed, and view their current progress in a visually appealing manner.

# Implementation of a Queue in C Using Arrays
This is an implementation of the Queue Abstract Data Structure in C.


### Overview
The stack exists as a structure that has the following properties: `size`, `front`, `back`, `count` and `content`.

Declaration within the program
    ```
    typedef struct queue
    {
        int size;
        int front;
        int back;
        int count;
        char **content;
    } queue_t;
    ```

The `initialise_queue` function initialises a struct 'object' and returns a pointer to the queue.


### Running the program
1. **(OPTIONAL)** If you want to conrtibute to the repo, fork it to your GitHub.

2. This has two options:
    - If you forked the repo, clone the forked repo to your local using the following command:
        ```
        git clone git@github.com:<your_github_username>/Data-Structures-and-Algorithms.git
        ```
    - If you want to clone directly from the upstream directory, use the following command:
        ```
        git clone git@github.com:DrC-Mbogho/Data-Structures-and-Algorithms.git
        ```

3. Move to the c_implementation folder:
    ```
    cd Data-Structures-and-Algorithms/Queue/c_implementation_array
    ```

4. Compile your program to get an executable file:
    ```
    gcc queue_array.c main.c -o queue
    ```

5. Run your executable:
    ```
    ./queue
    ```


### Functions Implemented
The following functions have been implemented:
- is_empty
- is_full
- enqueue
- dequeue
- peek
- display_queue

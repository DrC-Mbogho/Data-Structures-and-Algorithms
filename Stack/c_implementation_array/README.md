# Implementation of a Stack in C Using Arrays
This is an implementation of the stack Abstract Data Structure in C.


### Overview
The stack exists as a structure that has the following properties: `size`, `top` and `content`.

Declaration within the program
    ```
    typedef struct stack
    {
        int size;
        int top;
        char **content;
    } stack_t;
    ```

The `initialise_struct` function initialises a struct 'object' and returns a pointer to the struct.


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
    cd Data-Structures-and-Algorithms/Stack/c_implementation
    ```

4. Compile your program to get an executable file:
    ```
    gcc stack_array.c main.c -o stack
    ```

5. Run your executable:
    ```
    ./stack
    ```


### Functions Implemented
The following functions have been implemented:
- is_empty
- is_full
- push
- pop
- peek
- print_stack

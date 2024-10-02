# push_swap
push_swap is a project that implements a sorting algorithm using two stacks and a limited set of instructions. The goal is to sort a random list of integers using the fewest possible moves. This project aims to improve algorithmic thinking and optimization skills.
## Installation
To use this program:
  1. Clone the repository:
     ```bash
     git clone https://github.com/clemllovio/push_swap.git
     ```
  2. Navigate to the project directory and compile:
     ```bash
     cd push_swap
     make
     ```
## Usage
After compiling, you'll have a `push_swap` executable. Use it as follows:

  ``` bash
  ./push_swap [list of integers]
  ```
This will output a list of instructions that sort the given numbers.

## Instructions
The program uses the following instructions to manipulate the stacks:

• `sa`: swap a - swap the first 2 elements at the top of stack a

• `sb`: swap b - swap the first 2 elements at the top of stack b

• `ss`: `sa` and `sb` at the same time

• `pa`: push a - take the first element at the top of b and put it at the top of a

• `pb`: push b - take the first element at the top of a and put it at the top of b

• `ra`: rotate a - shift up all elements of stack a by 1

• `rb`: rotate b - shift up all elements of stack b by 1

• `rr`: `ra` and `rb` at the same time

• `rra`: reverse rotate a - shift down all elements of stack a by 1

• `rrb`: reverse rotate b - shift down all elements of stack b by 1

• `rrr`: `rra` and `rrb` at the same time

## Credits
This project was developed by Clémence Llovio as part of the curriculum at 42 School. 

#ifndef _STRUCTS_H_
#define _STRUCTS_H_
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct cmd_s - command struct
 * @op: name of operation
 * @arg: argument for function
 * @mode: stack or queue mode
 * @l_num: number of line being evaluated
 * @head: head of linked list
 * @tail: tail of linked list
 */
typedef struct cmd_s
{
	char *opcode;
	int arg;
	int *mode;
	unsigned int l_num;
	stack_t **head;
	stack_t **tail;
} cmd_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(cmd_t *cmd);
} instruction_t;
#endif
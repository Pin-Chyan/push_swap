#include "push_swap"

void      add_list(t_frame *stacks, int move)
{
          t_moves *new;
          
          if (!(new = (t_moves*)malloc(sizeof(*new))))
                  exit;
          new->move = move;
          new->next = new;
          new->prev = new;
          stacks->move = new;
}

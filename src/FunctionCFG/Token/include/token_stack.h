/**
 * @file   token_type.h
 * @brief  This file contains the function definitions for token_stack.c
 * @author Matthew C. Lindeman
 * @date   June 27, 2022
 * @bug    None known
 * @todo   Nothing
 */
#ifndef TOKS_H
#define TOKS_H

#include"token.h"

typedef struct TOKEN_STACK_T {
  token * current;
  struct TOKEN_STACK_T * prev;
} token_stack;

token_stack * init_token_stack(token * ct);
token_stack * push_token(token_stack * ts, token * new_current);
void token_stack_dump_debug(token_stack * ts);
token_stack * reverse_stack(token_stack ** bts);
token_stack * pop_token(token_stack * ts);

#endif


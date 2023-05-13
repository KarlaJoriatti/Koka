#pragma once
#ifndef kk_interactive_H
#define kk_interactive_H
// Koka generated module: "interactive", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core.h"

// type declarations

// value declarations

kk_integer_t kk_interactive__expr(kk_context_t* _ctx); /* () -> int */ 

kk_unit_t kk_interactive__main(kk_context_t* _ctx); /* () -> console () */ 

void kk_interactive__init(kk_context_t* _ctx);


void kk_interactive__done(kk_context_t* _ctx);

#endif // header

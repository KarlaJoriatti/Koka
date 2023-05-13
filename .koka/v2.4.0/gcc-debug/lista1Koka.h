#pragma once
#ifndef kk_lista1Koka_H
#define kk_lista1Koka_H
// Koka generated module: "lista1Koka", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core.h"

// type declarations

// value declarations

bool kk_lista1Koka_ehTriangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx); /* (a : int, b : int, c : int) -> bool */ 

kk_string_t kk_lista1Koka_tipoTriangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx); /* (a : int, b : int, c : int) -> string */ 

kk_integer_t kk_lista1Koka_somaPares(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

kk_string_t kk_lista1Koka_triangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx); /* (a : int, b : int, c : int) -> string */ 

kk_unit_t kk_lista1Koka_main(kk_context_t* _ctx); /* () -> <console,div> () */ 

void kk_lista1Koka__init(kk_context_t* _ctx);


void kk_lista1Koka__done(kk_context_t* _ctx);

#endif // header

// Koka generated module: "interactive", koka version: 2.4.0, platform: 64-bit
#include "interactive.h"

kk_integer_t kk_interactive__expr(kk_context_t* _ctx) { /* () -> int */ 
  return kk_integer_mod((kk_integer_from_small(5)),(kk_integer_from_small(3)),kk_context());
}

kk_unit_t kk_interactive__main(kk_context_t* _ctx) { /* () -> console () */ 
  kk_string_t s_72;
  kk_integer_t _x73 = kk_interactive__expr(_ctx); /*int*/
  s_72 = kk_std_core_show(_x73, _ctx); /*string*/
  kk_std_core_printsln(s_72, _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_interactive__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_interactive__init(_ctx);
  atexit(&_kk_main_exit);
  kk_interactive__main(_ctx);
  kk_interactive__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_interactive__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_interactive__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_types__done(_ctx);
}

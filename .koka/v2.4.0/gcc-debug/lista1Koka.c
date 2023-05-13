// Koka generated module: "lista1Koka", koka version: 2.4.0, platform: 64-bit
#include "lista1Koka.h"

bool kk_lista1Koka_ehTriangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx) { /* (a : int, b : int, c : int) -> bool */ 
  bool _match_1136;
  kk_integer_t _brw_1143;
  kk_integer_t _x1145 = kk_integer_dup(a); /*int*/
  kk_integer_t _x1146 = kk_integer_dup(b); /*int*/
  _brw_1143 = kk_integer_add(_x1145,_x1146,kk_context()); /*int*/
  bool _brw_1144 = kk_integer_gt_borrow(_brw_1143,c,kk_context()); /*bool*/;
  kk_integer_drop(_brw_1143, _ctx);
  _match_1136 = _brw_1144; /*bool*/
  if (_match_1136) {
    bool _match_1137;
    kk_integer_t _brw_1141;
    kk_integer_t _x1147 = kk_integer_dup(b); /*int*/
    kk_integer_t _x1148 = kk_integer_dup(c); /*int*/
    _brw_1141 = kk_integer_add(_x1147,_x1148,kk_context()); /*int*/
    bool _brw_1142 = kk_integer_gt_borrow(_brw_1141,a,kk_context()); /*bool*/;
    kk_integer_drop(_brw_1141, _ctx);
    _match_1137 = _brw_1142; /*bool*/
    if (_match_1137) {
      bool _match_1138;
      kk_integer_t _brw_1139 = kk_integer_add(a,c,kk_context()); /*int*/;
      bool _brw_1140 = kk_integer_gt_borrow(_brw_1139,b,kk_context()); /*bool*/;
      kk_integer_drop(_brw_1139, _ctx);
      kk_integer_drop(b, _ctx);
      _match_1138 = _brw_1140; /*bool*/
      if (_match_1138) {
        return true;
      }
      {
        return false;
      }
    }
    {
      kk_integer_drop(c, _ctx);
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return false;
    }
  }
  {
    kk_integer_drop(c, _ctx);
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return false;
  }
}

kk_string_t kk_lista1Koka_tipoTriangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx) { /* (a : int, b : int, c : int) -> string */ 
  bool _match_1124 = kk_integer_eq_borrow(a,b,kk_context()); /*bool*/;
  if (_match_1124) {
    bool _match_1130 = kk_integer_eq_borrow(b,c,kk_context()); /*bool*/;
    if (_match_1130) {
      kk_integer_drop(c, _ctx);
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      kk_define_string_literal(, _s1149, 10, "equilatero")
      return kk_string_dup(_s1149);
    }
    {
      bool _match_1131 = kk_integer_eq_borrow(a,b,kk_context()); /*bool*/;
      if (_match_1131) {
        kk_integer_drop(c, _ctx);
        kk_integer_drop(b, _ctx);
        kk_integer_drop(a, _ctx);
        kk_define_string_literal(, _s1150, 9, "isosceles")
        return kk_string_dup(_s1150);
      }
      {
        bool _match_1132;
        bool _brw_1135 = kk_integer_eq_borrow(b,c,kk_context()); /*bool*/;
        kk_integer_drop(b, _ctx);
        _match_1132 = _brw_1135; /*bool*/
        if (_match_1132) {
          kk_integer_drop(c, _ctx);
          kk_integer_drop(a, _ctx);
          kk_define_string_literal(, _s1151, 9, "isosceles")
          return kk_string_dup(_s1151);
        }
        {
          bool _match_1133;
          bool _brw_1134 = kk_integer_eq_borrow(a,c,kk_context()); /*bool*/;
          kk_integer_drop(a, _ctx);
          kk_integer_drop(c, _ctx);
          _match_1133 = _brw_1134; /*bool*/
          if (_match_1133) {
            kk_define_string_literal(, _s1152, 9, "isosceles")
            return kk_string_dup(_s1152);
          }
          {
            kk_define_string_literal(, _s1153, 8, "escaleno")
            return kk_string_dup(_s1153);
          }
        }
      }
    }
  }
  {
    bool _match_1125 = kk_integer_eq_borrow(a,b,kk_context()); /*bool*/;
    if (_match_1125) {
      kk_integer_drop(c, _ctx);
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      kk_define_string_literal(, _s1154, 9, "isosceles")
      return kk_string_dup(_s1154);
    }
    {
      bool _match_1126;
      bool _brw_1129 = kk_integer_eq_borrow(b,c,kk_context()); /*bool*/;
      kk_integer_drop(b, _ctx);
      _match_1126 = _brw_1129; /*bool*/
      if (_match_1126) {
        kk_integer_drop(c, _ctx);
        kk_integer_drop(a, _ctx);
        kk_define_string_literal(, _s1155, 9, "isosceles")
        return kk_string_dup(_s1155);
      }
      {
        bool _match_1127;
        bool _brw_1128 = kk_integer_eq_borrow(a,c,kk_context()); /*bool*/;
        kk_integer_drop(a, _ctx);
        kk_integer_drop(c, _ctx);
        _match_1127 = _brw_1128; /*bool*/
        if (_match_1127) {
          kk_define_string_literal(, _s1156, 9, "isosceles")
          return kk_string_dup(_s1156);
        }
        {
          kk_define_string_literal(, _s1157, 8, "escaleno")
          return kk_string_dup(_s1157);
        }
      }
    }
  }
}

kk_integer_t kk_lista1Koka_somaPares(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk__tailcall: ;
  bool _match_1120 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_1120) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_1121;
    kk_integer_t _brw_1122;
    kk_integer_t _x1158 = kk_integer_dup(n); /*int*/
    _brw_1122 = kk_integer_mod(_x1158,(kk_integer_from_small(2)),kk_context()); /*int*/
    bool _brw_1123 = kk_integer_eq_borrow(_brw_1122,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_1122, _ctx);
    _match_1121 = _brw_1123; /*bool*/
    if (_match_1121) {
      kk_integer_t i;
      kk_integer_t _x1159 = kk_integer_dup(n); /*int*/
      i = kk_integer_add_small_const(_x1159, -2, _ctx); /*int*/
      kk_integer_t y0_1086 = kk_lista1Koka_somaPares(i, _ctx); /*int*/;
      return kk_integer_add(n,y0_1086,kk_context());
    }
    {
      kk_integer_t i0 = kk_integer_add_small_const(n, -1, _ctx); /*int*/;
      { // tailcall
        n = i0;
        goto kk__tailcall;
      }
    }
  }
}

kk_string_t kk_lista1Koka_triangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx) { /* (a : int, b : int, c : int) -> string */ 
  bool _match_1119;
  kk_integer_t _x1160 = kk_integer_dup(a); /*int*/
  kk_integer_t _x1161 = kk_integer_dup(b); /*int*/
  kk_integer_t _x1162 = kk_integer_dup(c); /*int*/
  _match_1119 = kk_lista1Koka_ehTriangulo(_x1160, _x1161, _x1162, _ctx); /*bool*/
  if (_match_1119) {
    return kk_lista1Koka_tipoTriangulo(a, b, c, _ctx);
  }
  {
    kk_integer_drop(c, _ctx);
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    kk_define_string_literal(, _s1163, 19, "nao eh um triangulo")
    return kk_string_dup(_s1163);
  }
}

kk_unit_t kk_lista1Koka_main(kk_context_t* _ctx) { /* () -> <console,div> () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x1164;
  kk_define_string_literal(, _s1165, 4, "Ex1:")
  _x1164 = kk_string_dup(_s1165); /*string*/
  kk_std_core_printsln(_x1164, _ctx);
  bool b_1091 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(10), kk_integer_from_small(20), kk_integer_from_small(30), _ctx); /*bool*/;
  kk_unit_t __0 = kk_Unit;
  kk_string_t _x1166;
  if (b_1091) {
    kk_define_string_literal(, _s1167, 4, "True")
    _x1166 = kk_string_dup(_s1167); /*string*/
  }
  else {
    kk_define_string_literal(, _s1168, 5, "False")
    _x1166 = kk_string_dup(_s1168); /*string*/
  }
  kk_std_core_printsln(_x1166, _ctx);
  bool b0_1093 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*bool*/;
  kk_unit_t __1 = kk_Unit;
  kk_string_t _x1169;
  if (b0_1093) {
    kk_define_string_literal(, _s1170, 4, "True")
    _x1169 = kk_string_dup(_s1170); /*string*/
  }
  else {
    kk_define_string_literal(, _s1171, 5, "False")
    _x1169 = kk_string_dup(_s1171); /*string*/
  }
  kk_std_core_printsln(_x1169, _ctx);
  bool b1_1095 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*bool*/;
  kk_unit_t __2 = kk_Unit;
  kk_string_t _x1172;
  if (b1_1095) {
    kk_define_string_literal(, _s1173, 4, "True")
    _x1172 = kk_string_dup(_s1173); /*string*/
  }
  else {
    kk_define_string_literal(, _s1174, 5, "False")
    _x1172 = kk_string_dup(_s1174); /*string*/
  }
  kk_std_core_printsln(_x1172, _ctx);
  kk_unit_t __3 = kk_Unit;
  kk_string_t _x1175;
  kk_define_string_literal(, _s1176, 4, "Ex2:")
  _x1175 = kk_string_dup(_s1176); /*string*/
  kk_std_core_printsln(_x1175, _ctx);
  kk_string_t s4_1097;
  kk_string_t _x1177 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(5), kk_integer_from_small(5), _ctx); /*string*/
  s4_1097 = kk_std_core_show_3(_x1177, _ctx); /*string*/
  kk_unit_t __4 = kk_Unit;
  kk_std_core_printsln(s4_1097, _ctx);
  kk_string_t s5_1098;
  kk_string_t _x1178 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*string*/
  s5_1098 = kk_std_core_show_3(_x1178, _ctx); /*string*/
  kk_unit_t __5 = kk_Unit;
  kk_std_core_printsln(s5_1098, _ctx);
  kk_string_t s6_1099;
  kk_string_t _x1179 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(4), _ctx); /*string*/
  s6_1099 = kk_std_core_show_3(_x1179, _ctx); /*string*/
  kk_unit_t __6 = kk_Unit;
  kk_std_core_printsln(s6_1099, _ctx);
  kk_unit_t __7 = kk_Unit;
  kk_string_t _x1180;
  kk_define_string_literal(, _s1181, 4, "Ex3:")
  _x1180 = kk_string_dup(_s1181); /*string*/
  kk_std_core_printsln(_x1180, _ctx);
  kk_string_t s8_1101;
  kk_string_t _x1182;
  bool _match_1118 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(15), kk_integer_from_small(6), kk_integer_from_small(5), _ctx); /*bool*/;
  if (_match_1118) {
    _x1182 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(15), kk_integer_from_small(6), kk_integer_from_small(5), _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s1183, 19, "nao eh um triangulo")
    _x1182 = kk_string_dup(_s1183); /*string*/
  }
  s8_1101 = kk_std_core_show_3(_x1182, _ctx); /*string*/
  kk_unit_t __8 = kk_Unit;
  kk_std_core_printsln(s8_1101, _ctx);
  kk_string_t s9_1105;
  kk_string_t _x1184;
  bool _match_1117 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(4), _ctx); /*bool*/;
  if (_match_1117) {
    _x1184 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(4), _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s1185, 19, "nao eh um triangulo")
    _x1184 = kk_string_dup(_s1185); /*string*/
  }
  s9_1105 = kk_std_core_show_3(_x1184, _ctx); /*string*/
  kk_unit_t __9 = kk_Unit;
  kk_std_core_printsln(s9_1105, _ctx);
  kk_string_t s10_1109;
  kk_string_t _x1186;
  bool _match_1116 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*bool*/;
  if (_match_1116) {
    _x1186 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s1187, 19, "nao eh um triangulo")
    _x1186 = kk_string_dup(_s1187); /*string*/
  }
  s10_1109 = kk_std_core_show_3(_x1186, _ctx); /*string*/
  kk_unit_t __10 = kk_Unit;
  kk_std_core_printsln(s10_1109, _ctx);
  kk_unit_t __11 = kk_Unit;
  kk_string_t _x1188;
  kk_define_string_literal(, _s1189, 4, "Ex4:")
  _x1188 = kk_string_dup(_s1189); /*string*/
  kk_std_core_printsln(_x1188, _ctx);
  kk_string_t s12_1114;
  kk_integer_t _x1190 = kk_lista1Koka_somaPares(kk_integer_from_small(5), _ctx); /*int*/
  s12_1114 = kk_std_core_show(_x1190, _ctx); /*string*/
  kk_unit_t __12 = kk_Unit;
  kk_std_core_printsln(s12_1114, _ctx);
  kk_string_t s13_1115;
  kk_integer_t _x1191 = kk_lista1Koka_somaPares(kk_integer_from_small(8), _ctx); /*int*/
  s13_1115 = kk_std_core_show(_x1191, _ctx); /*string*/
  kk_std_core_printsln(s13_1115, _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_lista1Koka__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_lista1Koka__init(_ctx);
  atexit(&_kk_main_exit);
  kk_lista1Koka_main(_ctx);
  kk_lista1Koka__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_lista1Koka__init(kk_context_t* _ctx){
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
void kk_lista1Koka__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_types__done(_ctx);
}

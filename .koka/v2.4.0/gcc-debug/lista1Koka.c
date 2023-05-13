// Koka generated module: "lista1Koka", koka version: 2.4.0, platform: 64-bit
#include "lista1Koka.h"

bool kk_lista1Koka_ehTriangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx) { /* (a : int, b : int, c : int) -> bool */ 
  bool _match_2177;
  kk_integer_t _brw_2184;
  kk_integer_t _x2186 = kk_integer_dup(a); /*int*/
  kk_integer_t _x2187 = kk_integer_dup(b); /*int*/
  _brw_2184 = kk_integer_add(_x2186,_x2187,kk_context()); /*int*/
  bool _brw_2185 = kk_integer_gt_borrow(_brw_2184,c,kk_context()); /*bool*/;
  kk_integer_drop(_brw_2184, _ctx);
  _match_2177 = _brw_2185; /*bool*/
  if (_match_2177) {
    bool _match_2178;
    kk_integer_t _brw_2182;
    kk_integer_t _x2188 = kk_integer_dup(b); /*int*/
    kk_integer_t _x2189 = kk_integer_dup(c); /*int*/
    _brw_2182 = kk_integer_add(_x2188,_x2189,kk_context()); /*int*/
    bool _brw_2183 = kk_integer_gt_borrow(_brw_2182,a,kk_context()); /*bool*/;
    kk_integer_drop(_brw_2182, _ctx);
    _match_2178 = _brw_2183; /*bool*/
    if (_match_2178) {
      bool _match_2179;
      kk_integer_t _brw_2180 = kk_integer_add(a,c,kk_context()); /*int*/;
      bool _brw_2181 = kk_integer_gt_borrow(_brw_2180,b,kk_context()); /*bool*/;
      kk_integer_drop(_brw_2180, _ctx);
      kk_integer_drop(b, _ctx);
      _match_2179 = _brw_2181; /*bool*/
      if (_match_2179) {
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


// lift anonymous function
struct kk_lista1Koka_primo_fun2192__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static bool kk_lista1Koka_primo_fun2192(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_lista1Koka_new_primo_fun2192(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_lista1Koka_primo_fun2192__t* _self = kk_function_alloc_as(struct kk_lista1Koka_primo_fun2192__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_lista1Koka_primo_fun2192, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static bool kk_lista1Koka_primo_fun2192(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_lista1Koka_primo_fun2192__t* _self = kk_function_as(struct kk_lista1Koka_primo_fun2192__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<300,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_integer_t _brw_2175;
  kk_box_t _x2193 = kk_ref_get(loc,kk_context()); /*1000*/
  _brw_2175 = kk_integer_unbox(_x2193); /*int*/
  bool _brw_2176 = kk_integer_gt_borrow(_brw_2175,(kk_integer_from_small(1)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_2175, _ctx);
  return _brw_2176;
}


// lift anonymous function
struct kk_lista1Koka_primo_fun2195__t {
  struct kk_function_s _base;
  kk_integer_t a;
  kk_ref_t loc;
  kk_ref_t loc0;
};
static kk_unit_t kk_lista1Koka_primo_fun2195(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_lista1Koka_new_primo_fun2195(kk_integer_t a, kk_ref_t loc, kk_ref_t loc0, kk_context_t* _ctx) {
  struct kk_lista1Koka_primo_fun2195__t* _self = kk_function_alloc_as(struct kk_lista1Koka_primo_fun2195__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_lista1Koka_primo_fun2195, kk_context());
  _self->a = a;
  _self->loc = loc;
  _self->loc0 = loc0;
  return &_self->_base;
}

static kk_unit_t kk_lista1Koka_primo_fun2195(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_lista1Koka_primo_fun2195__t* _self = kk_function_as(struct kk_lista1Koka_primo_fun2195__t*, _fself);
  kk_integer_t a = _self->a; /* int */
  kk_ref_t loc = _self->loc; /* local-var<300,int> */
  kk_ref_t loc0 = _self->loc0; /* local-var<300,bool> */
  kk_drop_match(_self, {kk_integer_dup(a);kk_ref_dup(loc);kk_ref_dup(loc0);}, {}, _ctx)
  kk_unit_t __ = kk_Unit;
  bool _match_2171;
  kk_integer_t _brw_2173;
  kk_integer_t _x2196;
  kk_box_t _x2197;
  kk_ref_t _x2198 = kk_ref_dup(loc); /*local-var<300,int>*/
  _x2197 = kk_ref_get(_x2198,kk_context()); /*1000*/
  _x2196 = kk_integer_unbox(_x2197); /*int*/
  _brw_2173 = kk_integer_mod(a,_x2196,kk_context()); /*int*/
  bool _brw_2174 = kk_integer_eq_borrow(_brw_2173,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_2173, _ctx);
  _match_2171 = _brw_2174; /*bool*/
  if (_match_2171) {
    kk_unit_t _brw_2172 = kk_Unit;
    kk_ref_set_borrow(loc0,(kk_bool_box(false)),kk_context());
    kk_ref_drop(loc0, _ctx);
    _brw_2172;
  }
  else {
    kk_ref_drop(loc0, _ctx);
  }
  kk_integer_t x0_2011;
  kk_box_t _x2199;
  kk_ref_t _x2200 = kk_ref_dup(loc); /*local-var<300,int>*/
  _x2199 = kk_ref_get(_x2200,kk_context()); /*1000*/
  x0_2011 = kk_integer_unbox(_x2199); /*int*/
  kk_integer_t _b_2091_2088 = kk_integer_add_small_const(x0_2011, -1, _ctx); /*int*/;
  kk_unit_t _brw_2170 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_integer_box(_b_2091_2088)),kk_context());
  kk_ref_drop(loc, _ctx);
  return _brw_2170;
}

bool kk_lista1Koka_primo(kk_integer_t a, kk_context_t* _ctx) { /* (a : int) -> div bool */ 
  kk_integer_t init_2064;
  kk_integer_t _x2190 = kk_integer_dup(a); /*int*/
  init_2064 = kk_integer_add_small_const(_x2190, -1, _ctx); /*int*/
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(init_2064)),kk_context()); /*local-var<300,int>*/;
  kk_ref_t loc0 = kk_ref_alloc((kk_bool_box(true)),kk_context()); /*local-var<300,bool>*/;
  kk_unit_t __0 = kk_Unit;
  kk_function_t _x2191;
  kk_ref_dup(loc);
  _x2191 = kk_lista1Koka_new_primo_fun2192(loc, _ctx); /*() -> <div,local<300>> bool*/
  kk_function_t _x2194;
  kk_ref_dup(loc);
  kk_ref_dup(loc0);
  _x2194 = kk_lista1Koka_new_primo_fun2195(a, loc, loc0, _ctx); /*() -> <div,local<300>> ()*/
  kk_std_core_while(_x2191, _x2194, _ctx);
  bool res0;
  kk_box_t _x2201;
  kk_ref_t _x2202 = kk_ref_dup(loc0); /*local-var<300,bool>*/
  _x2201 = kk_ref_get(_x2202,kk_context()); /*1000*/
  res0 = kk_bool_unbox(_x2201); /*bool*/
  bool res;
  kk_box_t _x2203 = kk_std_core_hnd_prompt_local_var(loc0, kk_bool_box(res0), _ctx); /*1001*/
  res = kk_bool_unbox(_x2203); /*bool*/
  kk_box_t _x2204 = kk_std_core_hnd_prompt_local_var(loc, kk_bool_box(res), _ctx); /*1001*/
  return kk_bool_unbox(_x2204);
}


// lift anonymous function
struct kk_lista1Koka_seriePI_fun2206__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  double n;
};
static bool kk_lista1Koka_seriePI_fun2206(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_lista1Koka_new_seriePI_fun2206(kk_ref_t loc, double n, kk_context_t* _ctx) {
  struct kk_lista1Koka_seriePI_fun2206__t* _self = kk_function_alloc_as(struct kk_lista1Koka_seriePI_fun2206__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_lista1Koka_seriePI_fun2206, kk_context());
  _self->loc = loc;
  _self->n = n;
  return &_self->_base;
}

static bool kk_lista1Koka_seriePI_fun2206(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_lista1Koka_seriePI_fun2206__t* _self = kk_function_as(struct kk_lista1Koka_seriePI_fun2206__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<531,float64> */
  double n = _self->n; /* float64 */
  kk_drop_match(_self, {kk_ref_dup(loc);;}, {}, _ctx)
  double _x2207;
  kk_box_t _x2208 = kk_ref_get(loc,kk_context()); /*1000*/
  _x2207 = kk_double_unbox(_x2208, _ctx); /*float64*/
  return (_x2207 < n);
}


// lift anonymous function
struct kk_lista1Koka_seriePI_fun2210__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc0;
  kk_ref_t loc1;
};
static kk_unit_t kk_lista1Koka_seriePI_fun2210(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_lista1Koka_new_seriePI_fun2210(kk_ref_t loc, kk_ref_t loc0, kk_ref_t loc1, kk_context_t* _ctx) {
  struct kk_lista1Koka_seriePI_fun2210__t* _self = kk_function_alloc_as(struct kk_lista1Koka_seriePI_fun2210__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_lista1Koka_seriePI_fun2210, kk_context());
  _self->loc = loc;
  _self->loc0 = loc0;
  _self->loc1 = loc1;
  return &_self->_base;
}

static kk_unit_t kk_lista1Koka_seriePI_fun2210(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_lista1Koka_seriePI_fun2210__t* _self = kk_function_as(struct kk_lista1Koka_seriePI_fun2210__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<531,float64> */
  kk_ref_t loc0 = _self->loc0; /* local-var<531,float64> */
  kk_ref_t loc1 = _self->loc1; /* local-var<531,float64> */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_ref_dup(loc0);kk_ref_dup(loc1);}, {}, _ctx)
  double _b_2115_2113;
  double _x2211;
  kk_box_t _x2212;
  kk_ref_t _x2213 = kk_ref_dup(loc1); /*local-var<531,float64>*/
  _x2212 = kk_ref_get(_x2213,kk_context()); /*1000*/
  _x2211 = kk_double_unbox(_x2212, _ctx); /*float64*/
  double _x2214;
  double _x2215;
  double _x2216;
  kk_box_t _x2217;
  kk_ref_t _x2218 = kk_ref_dup(loc); /*local-var<531,float64>*/
  _x2217 = kk_ref_get(_x2218,kk_context()); /*1000*/
  _x2216 = kk_double_unbox(_x2217, _ctx); /*float64*/
  _x2215 = ((4.0) / _x2216); /*float64*/
  double _x2219;
  kk_box_t _x2220;
  kk_ref_t _x2221 = kk_ref_dup(loc0); /*local-var<531,float64>*/
  _x2220 = kk_ref_get(_x2221,kk_context()); /*1000*/
  _x2219 = kk_double_unbox(_x2220, _ctx); /*float64*/
  _x2214 = (_x2215 * _x2219); /*float64*/
  _b_2115_2113 = (_x2211 + _x2214); /*float64*/
  kk_unit_t __ = kk_Unit;
  kk_unit_t _brw_2169 = kk_Unit;
  kk_ref_set_borrow(loc1,(kk_double_box(_b_2115_2113, _ctx)),kk_context());
  kk_ref_drop(loc1, _ctx);
  _brw_2169;
  double _b_2123_2121;
  double _x2222;
  kk_box_t _x2223;
  kk_ref_t _x2224 = kk_ref_dup(loc); /*local-var<531,float64>*/
  _x2223 = kk_ref_get(_x2224,kk_context()); /*1000*/
  _x2222 = kk_double_unbox(_x2223, _ctx); /*float64*/
  _b_2123_2121 = (_x2222 + (2.0)); /*float64*/
  kk_unit_t __0 = kk_Unit;
  kk_unit_t _brw_2168 = kk_Unit;
  kk_ref_set_borrow(loc,(kk_double_box(_b_2123_2121, _ctx)),kk_context());
  kk_ref_drop(loc, _ctx);
  _brw_2168;
  double _b_2130_2127;
  double _x2225;
  kk_box_t _x2226;
  kk_ref_t _x2227 = kk_ref_dup(loc0); /*local-var<531,float64>*/
  _x2226 = kk_ref_get(_x2227,kk_context()); /*1000*/
  _x2225 = kk_double_unbox(_x2226, _ctx); /*float64*/
  _b_2130_2127 = (_x2225 * (-1.0)); /*float64*/
  kk_unit_t _brw_2167 = kk_Unit;
  kk_ref_set_borrow(loc0,(kk_double_box(_b_2130_2127, _ctx)),kk_context());
  kk_ref_drop(loc0, _ctx);
  return _brw_2167;
}

double kk_lista1Koka_seriePI(double n, kk_context_t* _ctx) { /* (n : float64) -> div float64 */ 
  kk_ref_t loc = kk_ref_alloc((kk_double_box(1.0, _ctx)),kk_context()); /*local-var<531,float64>*/;
  kk_ref_t loc0 = kk_ref_alloc((kk_double_box(1.0, _ctx)),kk_context()); /*local-var<531,float64>*/;
  kk_ref_t loc1 = kk_ref_alloc((kk_double_box(0.0, _ctx)),kk_context()); /*local-var<531,float64>*/;
  kk_unit_t __1 = kk_Unit;
  kk_function_t _x2205;
  kk_ref_dup(loc);
  _x2205 = kk_lista1Koka_new_seriePI_fun2206(loc, n, _ctx); /*() -> <div,local<531>> bool*/
  kk_function_t _x2209;
  kk_ref_dup(loc);
  kk_ref_dup(loc0);
  kk_ref_dup(loc1);
  _x2209 = kk_lista1Koka_new_seriePI_fun2210(loc, loc0, loc1, _ctx); /*() -> <div,local<531>> ()*/
  kk_std_core_while(_x2205, _x2209, _ctx);
  double res1;
  kk_box_t _x2228;
  kk_ref_t _x2229 = kk_ref_dup(loc1); /*local-var<531,float64>*/
  _x2228 = kk_ref_get(_x2229,kk_context()); /*1000*/
  res1 = kk_double_unbox(_x2228, _ctx); /*float64*/
  double res0;
  kk_box_t _x2230 = kk_std_core_hnd_prompt_local_var(loc1, kk_double_box(res1, _ctx), _ctx); /*1001*/
  res0 = kk_double_unbox(_x2230, _ctx); /*float64*/
  double res;
  kk_box_t _x2231 = kk_std_core_hnd_prompt_local_var(loc0, kk_double_box(res0, _ctx), _ctx); /*1001*/
  res = kk_double_unbox(_x2231, _ctx); /*float64*/
  kk_box_t _x2232 = kk_std_core_hnd_prompt_local_var(loc, kk_double_box(res, _ctx), _ctx); /*1001*/
  return kk_double_unbox(_x2232, _ctx);
}

kk_string_t kk_lista1Koka_tipoTriangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx) { /* (a : int, b : int, c : int) -> string */ 
  bool _match_2155 = kk_integer_eq_borrow(a,b,kk_context()); /*bool*/;
  if (_match_2155) {
    bool _match_2161 = kk_integer_eq_borrow(b,c,kk_context()); /*bool*/;
    if (_match_2161) {
      kk_integer_drop(c, _ctx);
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      kk_define_string_literal(, _s2233, 10, "equilatero")
      return kk_string_dup(_s2233);
    }
    {
      bool _match_2162 = kk_integer_eq_borrow(a,b,kk_context()); /*bool*/;
      if (_match_2162) {
        kk_integer_drop(c, _ctx);
        kk_integer_drop(b, _ctx);
        kk_integer_drop(a, _ctx);
        kk_define_string_literal(, _s2234, 9, "isosceles")
        return kk_string_dup(_s2234);
      }
      {
        bool _match_2163;
        bool _brw_2166 = kk_integer_eq_borrow(b,c,kk_context()); /*bool*/;
        kk_integer_drop(b, _ctx);
        _match_2163 = _brw_2166; /*bool*/
        if (_match_2163) {
          kk_integer_drop(c, _ctx);
          kk_integer_drop(a, _ctx);
          kk_define_string_literal(, _s2235, 9, "isosceles")
          return kk_string_dup(_s2235);
        }
        {
          bool _match_2164;
          bool _brw_2165 = kk_integer_eq_borrow(a,c,kk_context()); /*bool*/;
          kk_integer_drop(a, _ctx);
          kk_integer_drop(c, _ctx);
          _match_2164 = _brw_2165; /*bool*/
          if (_match_2164) {
            kk_define_string_literal(, _s2236, 9, "isosceles")
            return kk_string_dup(_s2236);
          }
          {
            kk_define_string_literal(, _s2237, 8, "escaleno")
            return kk_string_dup(_s2237);
          }
        }
      }
    }
  }
  {
    bool _match_2156 = kk_integer_eq_borrow(a,b,kk_context()); /*bool*/;
    if (_match_2156) {
      kk_integer_drop(c, _ctx);
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      kk_define_string_literal(, _s2238, 9, "isosceles")
      return kk_string_dup(_s2238);
    }
    {
      bool _match_2157;
      bool _brw_2160 = kk_integer_eq_borrow(b,c,kk_context()); /*bool*/;
      kk_integer_drop(b, _ctx);
      _match_2157 = _brw_2160; /*bool*/
      if (_match_2157) {
        kk_integer_drop(c, _ctx);
        kk_integer_drop(a, _ctx);
        kk_define_string_literal(, _s2239, 9, "isosceles")
        return kk_string_dup(_s2239);
      }
      {
        bool _match_2158;
        bool _brw_2159 = kk_integer_eq_borrow(a,c,kk_context()); /*bool*/;
        kk_integer_drop(a, _ctx);
        kk_integer_drop(c, _ctx);
        _match_2158 = _brw_2159; /*bool*/
        if (_match_2158) {
          kk_define_string_literal(, _s2240, 9, "isosceles")
          return kk_string_dup(_s2240);
        }
        {
          kk_define_string_literal(, _s2241, 8, "escaleno")
          return kk_string_dup(_s2241);
        }
      }
    }
  }
}
 
//div : may diverge (recursion)

kk_integer_t kk_lista1Koka_somaPares(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  kk__tailcall: ;
  bool _match_2151 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_2151) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_2152;
    kk_integer_t _brw_2153;
    kk_integer_t _x2242 = kk_integer_dup(n); /*int*/
    _brw_2153 = kk_integer_mod(_x2242,(kk_integer_from_small(2)),kk_context()); /*int*/
    bool _brw_2154 = kk_integer_eq_borrow(_brw_2153,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_2153, _ctx);
    _match_2152 = _brw_2154; /*bool*/
    if (_match_2152) {
      kk_integer_t y_2015;
      kk_integer_t _x2243;
      kk_integer_t _x2244 = kk_integer_dup(n); /*int*/
      _x2243 = kk_integer_add_small_const(_x2244, -2, _ctx); /*int*/
      y_2015 = kk_lista1Koka_somaPares(_x2243, _ctx); /*int*/
      return kk_integer_add(n,y_2015,kk_context());
    }
    { // tailcall
      kk_integer_t _x2245 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
      n = _x2245;
      goto kk__tailcall;
    }
  }
}

kk_integer_t kk_lista1Koka_somaPot2m(kk_integer_t m, kk_integer_t n, kk_context_t* _ctx) { /* (m : int, n : int) -> div int */ 
  bool _match_2150 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_2150) {
    kk_integer_drop(n, _ctx);
    return m;
  }
  {
    kk_integer_t x_2020;
    kk_integer_t _x2246 = kk_integer_dup(m); /*int*/
    kk_integer_t _x2247;
    kk_integer_t _x2248 = kk_integer_dup(n); /*int*/
    _x2247 = kk_std_core_pow(kk_integer_from_small(2), _x2248, _ctx); /*int*/
    x_2020 = kk_integer_mul(_x2246,_x2247,kk_context()); /*int*/
    kk_integer_t y_2021;
    kk_integer_t _x2249 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    y_2021 = kk_lista1Koka_somaPot2m(m, _x2249, _ctx); /*int*/
    return kk_integer_add(x_2020,y_2021,kk_context());
  }
}

kk_string_t kk_lista1Koka_triangulo(kk_integer_t a, kk_integer_t b, kk_integer_t c, kk_context_t* _ctx) { /* (a : int, b : int, c : int) -> string */ 
  bool _match_2149;
  kk_integer_t _x2250 = kk_integer_dup(a); /*int*/
  kk_integer_t _x2251 = kk_integer_dup(b); /*int*/
  kk_integer_t _x2252 = kk_integer_dup(c); /*int*/
  _match_2149 = kk_lista1Koka_ehTriangulo(_x2250, _x2251, _x2252, _ctx); /*bool*/
  if (_match_2149) {
    return kk_lista1Koka_tipoTriangulo(a, b, c, _ctx);
  }
  {
    kk_integer_drop(c, _ctx);
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    kk_define_string_literal(, _s2253, 19, "nao eh um triangulo")
    return kk_string_dup(_s2253);
  }
}

kk_unit_t kk_lista1Koka_main(kk_context_t* _ctx) { /* () -> <console,div> () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x2254;
  kk_define_string_literal(, _s2255, 4, "Ex1:")
  _x2254 = kk_string_dup(_s2255); /*string*/
  kk_std_core_printsln(_x2254, _ctx);
  bool b_2028 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(10), kk_integer_from_small(20), kk_integer_from_small(30), _ctx); /*bool*/;
  kk_unit_t __0 = kk_Unit;
  kk_string_t _x2256;
  if (b_2028) {
    kk_define_string_literal(, _s2257, 4, "True")
    _x2256 = kk_string_dup(_s2257); /*string*/
  }
  else {
    kk_define_string_literal(, _s2258, 5, "False")
    _x2256 = kk_string_dup(_s2258); /*string*/
  }
  kk_std_core_printsln(_x2256, _ctx);
  bool b0_2030 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*bool*/;
  kk_unit_t __1 = kk_Unit;
  kk_string_t _x2259;
  if (b0_2030) {
    kk_define_string_literal(, _s2260, 4, "True")
    _x2259 = kk_string_dup(_s2260); /*string*/
  }
  else {
    kk_define_string_literal(, _s2261, 5, "False")
    _x2259 = kk_string_dup(_s2261); /*string*/
  }
  kk_std_core_printsln(_x2259, _ctx);
  bool b1_2032 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*bool*/;
  kk_unit_t __2 = kk_Unit;
  kk_string_t _x2262;
  if (b1_2032) {
    kk_define_string_literal(, _s2263, 4, "True")
    _x2262 = kk_string_dup(_s2263); /*string*/
  }
  else {
    kk_define_string_literal(, _s2264, 5, "False")
    _x2262 = kk_string_dup(_s2264); /*string*/
  }
  kk_std_core_printsln(_x2262, _ctx);
  kk_unit_t __3 = kk_Unit;
  kk_string_t _x2265;
  kk_define_string_literal(, _s2266, 4, "Ex2:")
  _x2265 = kk_string_dup(_s2266); /*string*/
  kk_std_core_printsln(_x2265, _ctx);
  kk_string_t s4_2034;
  kk_string_t _x2267 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(5), kk_integer_from_small(5), _ctx); /*string*/
  s4_2034 = kk_std_core_show_3(_x2267, _ctx); /*string*/
  kk_unit_t __4 = kk_Unit;
  kk_std_core_printsln(s4_2034, _ctx);
  kk_string_t s5_2035;
  kk_string_t _x2268 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*string*/
  s5_2035 = kk_std_core_show_3(_x2268, _ctx); /*string*/
  kk_unit_t __5 = kk_Unit;
  kk_std_core_printsln(s5_2035, _ctx);
  kk_string_t s6_2036;
  kk_string_t _x2269 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(4), _ctx); /*string*/
  s6_2036 = kk_std_core_show_3(_x2269, _ctx); /*string*/
  kk_unit_t __6 = kk_Unit;
  kk_std_core_printsln(s6_2036, _ctx);
  kk_unit_t __7 = kk_Unit;
  kk_string_t _x2270;
  kk_define_string_literal(, _s2271, 4, "Ex3:")
  _x2270 = kk_string_dup(_s2271); /*string*/
  kk_std_core_printsln(_x2270, _ctx);
  kk_string_t s8_2038;
  kk_string_t _x2272;
  bool _match_2148 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(15), kk_integer_from_small(6), kk_integer_from_small(5), _ctx); /*bool*/;
  if (_match_2148) {
    _x2272 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(15), kk_integer_from_small(6), kk_integer_from_small(5), _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s2273, 19, "nao eh um triangulo")
    _x2272 = kk_string_dup(_s2273); /*string*/
  }
  s8_2038 = kk_std_core_show_3(_x2272, _ctx); /*string*/
  kk_unit_t __8 = kk_Unit;
  kk_std_core_printsln(s8_2038, _ctx);
  kk_string_t s9_2042;
  kk_string_t _x2274;
  bool _match_2147 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(4), _ctx); /*bool*/;
  if (_match_2147) {
    _x2274 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(4), _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s2275, 19, "nao eh um triangulo")
    _x2274 = kk_string_dup(_s2275); /*string*/
  }
  s9_2042 = kk_std_core_show_3(_x2274, _ctx); /*string*/
  kk_unit_t __9 = kk_Unit;
  kk_std_core_printsln(s9_2042, _ctx);
  kk_string_t s10_2046;
  kk_string_t _x2276;
  bool _match_2146 = kk_lista1Koka_ehTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*bool*/;
  if (_match_2146) {
    _x2276 = kk_lista1Koka_tipoTriangulo(kk_integer_from_small(5), kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*string*/
  }
  else {
    kk_define_string_literal(, _s2277, 19, "nao eh um triangulo")
    _x2276 = kk_string_dup(_s2277); /*string*/
  }
  s10_2046 = kk_std_core_show_3(_x2276, _ctx); /*string*/
  kk_unit_t __10 = kk_Unit;
  kk_std_core_printsln(s10_2046, _ctx);
  kk_unit_t __11 = kk_Unit;
  kk_string_t _x2278;
  kk_define_string_literal(, _s2279, 4, "Ex4:")
  _x2278 = kk_string_dup(_s2279); /*string*/
  kk_std_core_printsln(_x2278, _ctx);
  kk_string_t s12_2051;
  kk_integer_t _x2280 = kk_lista1Koka_somaPares(kk_integer_from_small(5), _ctx); /*int*/
  s12_2051 = kk_std_core_show(_x2280, _ctx); /*string*/
  kk_unit_t __12 = kk_Unit;
  kk_std_core_printsln(s12_2051, _ctx);
  kk_string_t s13_2052;
  kk_integer_t _x2281 = kk_lista1Koka_somaPares(kk_integer_from_small(8), _ctx); /*int*/
  s13_2052 = kk_std_core_show(_x2281, _ctx); /*string*/
  kk_unit_t __13 = kk_Unit;
  kk_std_core_printsln(s13_2052, _ctx);
  kk_unit_t __14 = kk_Unit;
  kk_string_t _x2282;
  kk_define_string_literal(, _s2283, 4, "Ex5:")
  _x2282 = kk_string_dup(_s2283); /*string*/
  kk_std_core_printsln(_x2282, _ctx);
  kk_string_t s15_2054;
  kk_integer_t _x2284 = kk_lista1Koka_somaPot2m(kk_integer_from_small(6), kk_integer_from_small(4), _ctx); /*int*/
  s15_2054 = kk_std_core_show(_x2284, _ctx); /*string*/
  kk_unit_t __15 = kk_Unit;
  kk_std_core_printsln(s15_2054, _ctx);
  kk_string_t s16_2055;
  kk_integer_t _x2285 = kk_lista1Koka_somaPot2m(kk_integer_from_small(3), kk_integer_from_small(3), _ctx); /*int*/
  s16_2055 = kk_std_core_show(_x2285, _ctx); /*string*/
  kk_unit_t __16 = kk_Unit;
  kk_std_core_printsln(s16_2055, _ctx);
  kk_unit_t __17 = kk_Unit;
  kk_string_t _x2286;
  kk_define_string_literal(, _s2287, 4, "Ex6:")
  _x2286 = kk_string_dup(_s2287); /*string*/
  kk_std_core_printsln(_x2286, _ctx);
  bool b5_2058 = kk_lista1Koka_primo(kk_integer_from_small(37), _ctx); /*bool*/;
  kk_unit_t __18 = kk_Unit;
  kk_string_t _x2288;
  if (b5_2058) {
    kk_define_string_literal(, _s2289, 4, "True")
    _x2288 = kk_string_dup(_s2289); /*string*/
  }
  else {
    kk_define_string_literal(, _s2290, 5, "False")
    _x2288 = kk_string_dup(_s2290); /*string*/
  }
  kk_std_core_printsln(_x2288, _ctx);
  bool b6_2060 = kk_lista1Koka_primo(kk_integer_from_small(10), _ctx); /*bool*/;
  kk_unit_t __19 = kk_Unit;
  kk_string_t _x2291;
  if (b6_2060) {
    kk_define_string_literal(, _s2292, 4, "True")
    _x2291 = kk_string_dup(_s2292); /*string*/
  }
  else {
    kk_define_string_literal(, _s2293, 5, "False")
    _x2291 = kk_string_dup(_s2293); /*string*/
  }
  kk_std_core_printsln(_x2291, _ctx);
  kk_unit_t __20 = kk_Unit;
  kk_string_t _x2294;
  kk_define_string_literal(, _s2295, 4, "Ex7:")
  _x2294 = kk_string_dup(_s2295); /*string*/
  kk_std_core_printsln(_x2294, _ctx);
  kk_string_t s21_2062;
  double _x2296 = kk_lista1Koka_seriePI(100.0, _ctx); /*float64*/
  s21_2062 = kk_std_core_show_1(_x2296, kk_std_core_types__new_None(_ctx), _ctx); /*string*/
  kk_unit_t __21 = kk_Unit;
  kk_std_core_printsln(s21_2062, _ctx);
  kk_string_t s22_2063;
  double _x2297 = kk_lista1Koka_seriePI(10000.0, _ctx); /*float64*/
  s22_2063 = kk_std_core_show_1(_x2297, kk_std_core_types__new_None(_ctx), _ctx); /*string*/
  kk_std_core_printsln(s22_2063, _ctx); return kk_Unit;
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
  kk_std_core_hnd__init(_ctx);
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
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}

// include files {{{1
#include <bits/stdc++.h>

// {{{1
#define IF if(
#define ELIF } else if(
#define ELSE } else {
#define pass ;;;

// TYPE {{{1
typedef int C_int;
typedef void C_void;
typedef long long C_long;
typedef char C_char;
typedef __int128 C_bignumber;

// function {{{1
#define def(typ, name) \
	C_##typ F_##name { C_##typ res
#define voidef(name) \
	C_void F_##name {
#define linedef(typ, name) \
	inline C_##typ F_##name { C_##typ res; return res 
#define START int main(int argv, char **args) { int res
#define call(func) F_##func

// brackets {{{1
#define then ) {
#define begin {
#define endfunc return res; }
#define end }
#define quit return res
#define FI }

// value {{{1
#define var auto
#define varr(typ) C_##typ

// input and output {{{1
#define input std::cin
#define output std::cout
#define _o <<
#define _i >>

// }}}1

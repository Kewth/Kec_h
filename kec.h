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
typedef std::string C_str;

// function {{{1
#define def(typ, name) \
	C_##typ F_##name { C_##typ res
#define voidef(name) \
	C_void F_##name {
#define linedef(typ, name) \
	inline C_##typ F_##name { C_##typ res; return res
#define START C_int main(C_int argv, C_char **args) { C_int res
#define call(func) F_##func

// class {{{1
#define CLASS(name) \
	class C_##name {

// brackets {{{1
#define then ) {
#define begin {
#define endfunc return res; }
#define end };
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

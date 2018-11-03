// include files {{{2
#include <bits/stdc++.h>

// if {{{2
#define IF if(
#define ELIF } else if(
#define ELSE } else {
#define pass ;;;

// TYPE {{{2
typedef int C_int;
typedef void C_void;
typedef long long C_long;
typedef char C_char;
// typedef __int128 C_bignumber;
typedef std::string C_str;

// function {{{2
#define def(typ, name) \
	C_##typ F_##name { C_##typ res
#define dec(typ, name) \
	C_##typ F_##name;
#define voidef(name) \
	C_void F_##name {
#define linedef(typ, name) \
	inline C_##typ F_##name { C_##typ res; return res
#define START C_int main(C_int argv, C_char **args) { C_int res
#define call(func) F_##func

// class {{{2
#define CLASS(name) \
	class C_##name {

// brackets {{{2
#define then ) {
#define BEGIN {
#define ENDF return res; }
#define END };
#define quit return res
#define FI }
#define JUST )

// value {{{2
#define var auto
#define va(typ) C_##typ

// while {{{2
#define WHI while ((
#define UNT while (!(
#define LE )) {
#define FOR(in) for(C_##in) {
#define IFOR(in) for(C_##in

// input and output {{{2
#define input std::cin >>
#define output std::cout <<
#define _o <<
#define _i >>
#define _os << ' ' <<


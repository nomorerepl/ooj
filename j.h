#pragma once
#include<stdlib.h> //malloc
#include<stdio.h>  //fgets printf
#include<string.h> //strlen

typedef void _;typedef char C,*S;typedef long long J;typedef struct a{J c,t,r;J d[3];J p[2];}*K;static K st[26];


#define O printf
#define R return
#define W(a...)          while(({a;}))                           //!< while
#define N(n,a...)        {J _n=(n),i=-1;W(++i<_n){a;}}           //!< no stinking loops
#define P(b,a...)        if(b)R({a;});                           //!< "bail early" predicate aka panic
#define Z(b,a...)        if(b){a;}else                           //!< be sure to terminate dangling else

#define K1(f) K f(K x)
#define K2(f) K f(K x,K y)
#define K3(f) K f(K x,K y,K z)

#define xc x->c
#define xt x->t
#define xr x->r
#define xd x->d
#define xp x->p

#define yc y->c
#define yt y->t
#define yr y->r
#define yd y->d
#define yp y->p

#define zc z->c
#define zt z->t
#define zr z->r
#define zd z->d
#define zp z->p

#define Ax (!xr)        //!< atom?
#define xn (xr?*xd:1)   //!< length

#define Ay (!yr)
#define yn (yr?*yd:1)

#define VTSZ 8LL        //!< size of verb table
#define ATSZ 3LL        //!< size of advb table

K2(over);K2(scan);K ex(K*e);K2(set);C qp(J a);C qv(J a);

//:~

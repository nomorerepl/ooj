#include<stdlib.h> //malloc
#include<stdio.h>  //fgets printf
#include<string.h> //strlen
#include"j.h"

I*ma(I n){R(I*)malloc(n*8);}_ mv(I*d,I*s,I n){N(n,d[i]=s[i]);}
I tr(I r,I*d){I z=1;N(r,z=z*d[i]);R z;}
K ga(I t,I r,I*d){K z=(K)ma(5+tr(r,d));zt=t,zr=r,mv(zd,d,r);R z;}

K1(iota){I n=*xp;K z=ga(0,1,&n);N(n,zp[i]=i)R z;}
K2(plus){I r=yr,*d=yd,n=tr(r,d);K z=ga(0,r,d);
 N(n,zp[i]=xp[i]+yp[i])R z;}
K2(mul){I r=yr,*d=yd,n=tr(r,d);K z=ga(0,r,d);
 N(n,zp[i]=xp[i]*yp[i])R z;}
K2(from){I r=yr-1,*d=yd+1,n=tr(r,d);
 K z=ga(yt,r,d);mv(zp,yp+(n**xp),n);R z;}
K1(box){K z=ga(1,0,0);*zp=(I)x;R z;}
K2(cat){I an=tr(xr,xd),wn=tr(yr,yd),n=an+wn;
 K z=ga(yt,1,&n);mv(zp,xp,an);mv(zp+an,yp,wn);R z;}
K2(find){R O("nyi\n"),(K)0;}
K2(rsh){I r=xr?*xd:1,n=tr(r,xp),wn=tr(yr,yd);
 K z=ga(yt,r,xp);mv(zp,yp,wn=n>wn?wn:n);
 if(n-=wn)mv(zp+wn,zp,n);R z;}
K1(sha){K z=ga(0,1,&xr);mv(zp,xd,xr);R z;}
K1(size){K z=ga(0,0,0);*zp=xr?*xd:1;R z;}
K1(fst){K z=ga(0,0,0);*zp=*xp;R z;}
K1(rev){I r=xr,*d=xd,n=tr(r,d);K z=ga(0,r,d);
 N(n,zp[i]=xp[n-i-1])R z;}
K1(id){R x;}

I sI(S a,I*n){C c;I i=0,r=*n=0;
 W((c=*a++)&&(c>='0'&&c<='9'))i++,r=r*10u+((I)c-'0');R*n=i,r;}
_ pi(I i){O("%ld ",i);}_ nl(){O("\n");}_ pt(){O(" ");}
_ pr(K x){I r=xr,*d=xd,n=tr(r,d);
 Z(xt,N(n,O("< ");pr((K)xp[i])))N(n,pi(xp[i]));}

C vt[]="+{!<#,*|";
K(*vd[])()={0,plus,from,find,0,  rsh,cat,mul,0},
 (*vm[])()={0,id,  size,iota,box,sha,0  ,fst,rev};

C qp(I a){R a>='a'&&a<='z';}C qv(I a){R a<'a';}

K ex(K*e){I a=(I)*e;
 Z(qp(a),P(':'==(I)e[1],st[a-'a']=ex(e+2))a=(I)st[a-'a']);
 R qv(a)?(*vm[a])(ex(e+1)):e[1]?(*vd[(I)e[1]])(a,ex(e+2)):(K)a;}
K noun(S*a){K z;I l;C c=**a;P(c<'0'||c>'9',(K)0);
 z=ga(0,0,0);*zp=sI(*a,&l);*a+=l-1;R z;}
K verb(C c){I i=0;C r;W(r=vt[i++])P(r==c,(K)i)R 0;}
K*wd(S s){K a,*e;C c;I n=strlen(s);P(!n,(K*)0);s[--n]=0;e=(K*)ma(n+1);n=0;
 W(c=*s){e[n++]=(a=noun(&s))?a:(a=verb(c))?a:((K)(I)c);s++;}R e[n]=0,e;}

int main(){C s[99];W(pt(),fgets(s,99,stdin))pr(ex(wd(s))),nl();R 0;}

//:~

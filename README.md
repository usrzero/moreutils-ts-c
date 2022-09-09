# moreutils-ts-c
Moreutils's ts C implementation


I searched for ts written in C
for better performance and less memory consumption,
and I found nothing.
So I decided to write m own ts in C.


PROS & CONS:
Moreutils ts:
pros:
- available in repositories
- configurable with patterns
cons:
- slow on big files
- big memory footprint (relatively)

Moreutils ts C:
pros:
- fast
- small memory footprint
- suitable for embedded
cons:
- not in distro repos
- don't have pattenrs (WIP)

BENCHMARKS:
My laptop is UX21A,
CPU Intel(R) Core(TM) i7-3517U CPU @ 1.90GHz
(downboosted for minimal power consumption)
Memory DDR3 Speed: 1600 MHz
SSD: ADATA XM11 256GB


igor@ux21a2 ~ $ wc -l test.txt 
1261810 test.txt
igor@ux21a2 ~ $ # perl ts
igor@ux21a2 ~ $ time cat test.txt | ts \%Y-\%m-\%d_\%H:\%M:\%S: > /dev/null 

real	0m14.942s
user	0m10.832s
sys	0m4.188s
igor@ux21a2 ~ $ # C ts
igor@ux21a2 ~ $ time cat test.txt | ./ts > /dev/null 

real	0m0.822s
user	0m0.792s
sys	0m0.080s
igor@ux21a2 ~ $ 








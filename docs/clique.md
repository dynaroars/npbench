# Clique Benchmarks


## Utils

-   [Converter](./instances/converter.tar.gz): convert from benchmarks
    from `ascii` to `binary` format and vice versa.

## DIMACS Instances

[Directory](./instances/clique/DIMACS_cliques/), [tar.gz format](./instances/clique/DIMACS_cliques.tar.gz)

Files from Dimacs
[<ftp://dimacs.rutgers.edu/pub/challenge/graph/benchmarks/clique/>](ftp://dimacs.rutgers.edu/pub/challenge/graph/benchmarks/clique/)
in binary format (`*.clq.b`).


|    | File                                                                      | Max Clique[^1] |
|----|---------------------------------------------------------------------------|---------------:|
| 1  | [brock200_1 ](./instances/clique/DIMACS_cliques/brock200_1.clq.b     )    |             21 |
| 2  | [brock200_2 ](./instances/clique/DIMACS_cliques/brock200_2.clq.b     )    |             12 |
| 3  | [brock200_3 ](./instances/clique/DIMACS_cliques/brock200_3.clq.b     )    |             15 |
| 4  | [brock200_4 ](./instances/clique/DIMACS_cliques/brock200_4.clq.b     )    |             17 |
| 5  | [brock400_1 ](./instances/clique/DIMACS_cliques/brock400_1.clq.b     )    |             27 |
| 6  | [brock400_2 ](./instances/clique/DIMACS_cliques/brock400_2.clq.b     )    |             29 |
| 7  | [brock400_3 ](./instances/clique/DIMACS_cliques/brock400_3.clq.b     )    |             31 |
| 8  | [brock400_4 ](./instances/clique/DIMACS_cliques/brock400_4.clq.b     )    |             33 |
| 9  | [brock800_1 ](./instances/clique/DIMACS_cliques/brock800_1.clq.b     )    |             23 |
| 10 | [brock800_2 ](./instances/clique/DIMACS_cliques/brock800_2.clq.b     )    |             24 |
| 11 | [brock800_3 ](./instances/clique/DIMACS_cliques/brock800_3.clq.b     )    |             25 |
| 12 | [brock800_4 ](./instances/clique/DIMACS_cliques/brock800_4.clq.b     )    |             26 |
| 13 | [c-fat200-1 ](./instances/clique/DIMACS_cliques/c-fat200-1.clq.b     )    |             12 |
| 14 | [c-fat200-2 ](./instances/clique/DIMACS_cliques/c-fat200-2.clq.b     )    |             24 |
| 15 | [c-fat200-5 ](./instances/clique/DIMACS_cliques/c-fat200-5.clq.b     )    |             58 |
| 16 | [c-fat500-1 ](./instances/clique/DIMACS_cliques/c-fat500-1.clq.b     )    |             14 |
| 17 | [c-fat500-2 ](./instances/clique/DIMACS_cliques/c-fat500-2.clq.b     )    |             26 |
| 18 | [c-fat500-5 ](./instances/clique/DIMACS_cliques/c-fat500-5.clq.b     )    |             64 |
| 19 | [c-fat500-10 ](./instances/clique/DIMACS_cliques/c-fat500-10.clq.b    )   |            126 |
| 20 | [hamming6-2 ](./instances/clique/DIMACS_cliques/hamming6-2.clq.b     )    |             32 |
| 21 | [hamming6-4 ](./instances/clique/DIMACS_cliques/hamming6-4.clq.b     )    |              4 |
| 22 | [hamming8-2 ](./instances/clique/DIMACS_cliques/hamming8-2.clq.b     )    |            128 |
| 23 | [hamming8-4 ](./instances/clique/DIMACS_cliques/hamming8-4.clq.b     )    |             16 |
| 24 | [hamming10-2 ](./instances/clique/DIMACS_cliques/hamming10-2.clq.b    )   |            512 |
| 25 | [hamming10-4 ](./instances/clique/DIMACS_cliques/hamming10-4.clq.b    )   |             40 |
| 26 | [johnson8-2-4 ](./instances/clique/DIMACS_cliques/johnson8-2-4.clq.b   )  |              4 |
| 27 | [johnson8-4-4 ](./instances/clique/DIMACS_cliques/johnson8-4-4.clq.b   )  |             14 |
| 28 | [johnson16-2-4 ](./instances/clique/DIMACS_cliques/johnson16-2-4.clq.b  ) |              8 |
| 29 | [johnson32-2-4 ](./instances/clique/DIMACS_cliques/johnson32-2-4.clq.b  ) |             16 |
| 30 | [keller4 ](./instances/clique/DIMACS_cliques/keller4.clq.b        )       |             11 |
| 31 | [keller5 ](./instances/clique/DIMACS_cliques/keller5.clq.b        )       |             27 |
| 32 | [keller6 ](./instances/clique/DIMACS_cliques/keller6.clq.b        )       |       >= 59 |
| 33 | [MANN_a9 ](./instances/clique/DIMACS_cliques/MANN_a9.clq.b        )       |             16 |
| 34 | [MANN_a27 ](./instances/clique/DIMACS_cliques/MANN_a27.clq.b       )      |            126 |
| 35 | [MANN_a45 ](./instances/clique/DIMACS_cliques/MANN_a44.clq.b       )      |            345 |
| 36 | [MANN_a81 ](./instances/clique/DIMACS_cliques/MANN_a81.clq.b       )      |     >= 1100 |
| 37 | [p_hat300-1 ](./instances/clique/DIMACS_cliques/p_hat300-1.clq.b     )    |              8 |
| 38 | [p_hat300-2 ](./instances/clique/DIMACS_cliques/p_hat300-2.clq.b     )    |             25 |
| 39 | [p_hat300-3 ](./instances/clique/DIMACS_cliques/p_hat300-3.clq.b     )    |             36 |
| 40 | [p_hat500-1 ](./instances/clique/DIMACS_cliques/p_hat500-1.clq.b     )    |              9 |
| 41 | [p_hat500-2 ](./instances/clique/DIMACS_cliques/p_hat500-2.clq.b     )    |             36 |
| 42 | [p_hat500-3 ](./instances/clique/DIMACS_cliques/p_hat500-3.clq.b     )    |       >= 50 |
| 43 | [p_hat700-1 ](./instances/clique/DIMACS_cliques/p_hat700-1.clq.b     )    |             11 |
| 44 | [p_hat700-2 ](./instances/clique/DIMACS_cliques/p_hat700-2.clq.b     )    |       >= 44 |
| 45 | [p_hat700-3 ](./instances/clique/DIMACS_cliques/p_hat700-3.clq.b     )    |       >= 62 |
| 46 | [p_hat1000-1 ](./instances/clique/DIMACS_cliques/p_hat1000-1.clq.b    )   |       >= 10 |
| 47 | [p_hat1000-2 ](./instances/clique/DIMACS_cliques/p_hat1000-2.clq.b    )   |       >= 46 |
| 48 | [p_hat1000-3 ](./instances/clique/DIMACS_cliques/p_hat1000-3.clq.b    )   |       >= 68 |
| 49 | [p_hat1500-1 ](./instances/clique/DIMACS_cliques/p_hat1500-1.clq.b    )   |       >= 12 |
| 50 | [p_hat1500-2 ](./instances/clique/DIMACS_cliques/p_hat1500-2.clq.b    )   |       >= 65 |
| 51 | [p_hat1500-3 ](./instances/clique/DIMACS_cliques/p_hat1500-3.clq.b    )   |       >= 94 |
| 52 | [san200_0.7_1 ](./instances/clique/DIMACS_cliques/san200_0.7_1.clq.b   )  |             30 |
| 53 | [san200_0.7_2 ](./instances/clique/DIMACS_cliques/san200_0.7_2.clq.b   )  |             18 |
| 54 | [san200_0.9_1 ](./instances/clique/DIMACS_cliques/san200_0.9_1.clq.b   )  |             70 |
| 55 | [san200_0.9_2 ](./instances/clique/DIMACS_cliques/san200_0.9_2.clq.b   )  |             60 |
| 56 | [san200_0.9_3 ](./instances/clique/DIMACS_cliques/san200_0.9_3.clq.b   )  |             44 |
| 57 | [san400_0.5_1 ](./instances/clique/DIMACS_cliques/san400_0.5_1.clq.b   )  |             13 |
| 58 | [san400_0.7_1 ](./instances/clique/DIMACS_cliques/san400_0.7_1.clq.b   )  |             40 |
| 59 | [san400_0.7_2 ](./instances/clique/DIMACS_cliques/san400_0.7_2.clq.b   )  |             30 |
| 60 | [san400_0.7_3 ](./instances/clique/DIMACS_cliques/san400_0.7_3.clq.b   )  |             22 |
| 61 | [san400_0.9_1 ](./instances/clique/DIMACS_cliques/san400_0.9_1.clq.b   )  |            100 |
| 62 | [san1000 ](./instances/clique/DIMACS_cliques/san1000.clq.b        )       |             15 |
| 63 | [sanr200_0.7 ](./instances/clique/DIMACS_cliques/sanr200_0.7.clq.b    )   |             18 |
| 64 | [sanr200_0.9 ](./instances/clique/DIMACS_cliques/sanr200_0.9.clq.b    )   |             42 |
| 65 | [sanr400_0.5 ](./instances/clique/DIMACS_cliques/sanr400_0.5.clq.b    )   |             13 |
| 66 | [sanr400_0.7 ](./instances/clique/DIMACS_cliques/sanr400_0.7.clq.b    )   |             21 |
  
  


## Additional Instances

[Directory](./instances/clique/Additional_cliques/), [tar.gz
format](./instances/clique/Additional_cliques.tar.gz)

Files from Mike Trick
[<http://mat.gsia.cmu.edu/COLOR02/clq.html>](http://mat.gsia.cmu.edu/COLOR02/clq.html).
For the `brock` graphs below, there is an "off-by-one" error in the
comments: if it claims node 26, for example, is in the clique, it is
really node 27.

       File                                                                          Max Clique[^2]
  ---- ----------------------------------------------------------------------------- ----------------
  1    [brock200_2 ](./instances/clique/Additional_cliques/brock200_2.clq    )       12
  2    [brock200_4 ](./instances/clique/Additional_cliques/brock200_4.clq    )       17
  3    [brock400_2 ](./instances/clique/Additional_cliques/brock400_2.clq    )       29
  4    [brock400_4 ](./instances/clique/Additional_cliques/brock400_4.clq    )       33
  5    [brock800_2 ](./instances/clique/Additional_cliques/brock800_2.clq    )       24
  6    [brock800_4 ](./instances/clique/Additional_cliques/brock800_4.clq    )       26
  7    [C125.9 ](./instances/clique/Additional_cliques/C125.9.clq        )           >= 34
  8    [C250.9 ](./instances/clique/Additional_cliques/C250.9.clq        )           >= 44
  9    [C500.9 ](./instances/clique/Additional_cliques/C500.9.clq        )           >= 57
  10   [C1000.9 ](./instances/clique/Additional_cliques/C1000.9.clq       )          >= 68
  11   [C2000.5 ](./instances/clique/Additional_cliques/C2000.5.clq       )          >= 16
  12   [C2000.9 ](./instances/clique/Additional_cliques/C2000.9.clq       )          >= 77
  13   [C4000.5 ](./instances/clique/Additional_cliques/C4000.5.clq       )          >= 18
  14   [DSJC500.5 ](./instances/clique/Additional_cliques/DSJC500.5.clq     )        >= 13
  15   [DSJC1000.5 ](./instances/clique/Additional_cliques/DSJC1000.5.clq    )       >= 15
  16   [gen200_p0.9_44 ](./instances/clique/Additional_cliques/gen200_p0.9_44.clq)   44
  17   [gen200_p0.9_55 ](./instances/clique/Additional_cliques/gen200_p0.9_55.clq)   55
  18   [gen400_p0.9_55 ](./instances/clique/Additional_cliques/gen400_p0.9_55.clq)   55
  19   [gen400_p0.9_65 ](./instances/clique/Additional_cliques/gen400_p0.9_65.clq)   65
  20   [gen400_p0.9_75 ](./instances/clique/Additional_cliques/gen400_p0.9_75.clq)   75
  21   [hamming8-4 ](./instances/clique/Additional_cliques/hamming8-4.clq    )       16
  22   [hamming10-4 ](./instances/clique/Additional_cliques/hamming10-4.clq   )      40
  23   [keller4 ](./instances/clique/Additional_cliques/keller4.clq       )          11
  24   [keller5 ](./instances/clique/Additional_cliques/keller5.clq       )          27
  25   [keller6 ](./instances/clique/Additional_cliques/keller6.clq       )          >= 59
  26   [MANN_a27 ](./instances/clique/Additional_cliques/MANN_a27.clq      )         126
  27   [MANN_a45 ](./instances/clique/Additional_cliques/MANN_a44.clq      )         345
  28   [MANN_a81 ](./instances/clique/Additional_cliques/MANN_a81.clq      )         >= 1100
  29   [p_hat300-1 ](./instances/clique/Additional_cliques/p_hat300-1.clq    )       8
  30   [p_hat300-2 ](./instances/clique/Additional_cliques/p_hat300-2.clq    )       25
  31   [p_hat300-3 ](./instances/clique/Additional_cliques/p_hat300-3.clq    )       36
  32   [p_hat700-1 ](./instances/clique/Additional_cliques/p_hat700-1.clq    )       11
  33   [p_hat700-2 ](./instances/clique/Additional_cliques/p_hat700-2.clq    )       >= 44
  34   [p_hat700-3 ](./instances/clique/Additional_cliques/p_hat700-3.clq    )       >= 62
  35   [p_hat1500-1 ](./instances/clique/Additional_cliques/p_hat1500-1.clq   )      >= 12
  36   [p_hat1500-2 ](./instances/clique/Additional_cliques/p_hat1500-2.clq   )      >= 65
  37   [p_hat1500-3 ](./instances/clique/Additional_cliques/p_hat1500-3.clq   )      >= 94

## Categories

Reference:
[<http://mat.gsia.cmu.edu/contents.clique.ps>](http://mat.gsia.cmu.edu/contents.clique.ps),
[(cached)](./instances/others/cached/contents.clique.ps)

CFat

>   (From Panos Pardalos pardalos\@math.uflorida.edu) Problems based on
    fault diagnosis problems. Original reference is Berman and Pelc,
    "Distributed Fault Diagnosis for Multiprocessor Systems,"
    Proceedings of the 20th Annual Symposium on Fault-Tolerant
    Computing, 340-346 (1990). For more instances, see the generator in
    graph/contributed/pardalos.

Joh

>   (From Panos Pardalos pardalos\@math.uflorida.edu) Problems based on
    problem in coding theory. A Johnson graph with parameters n; w; d
    has a node for every binary vector of length n with exactly w 1s.
    Two vertices are adjacent if and only if their hamming distance is
    at least d. A clique then represents a feasible set of vectors for a
    code. For more instances, see the generator in
    graph/contributed/pardalos.

Kel

>   (From Peter Shor shor\@research.att.com) Problems based on Keller's
    conjecture on tilings using hypercubes. One reference is J.C.
    Lagarias and P.W. Shor, "Keller's Cube-Tiling Conjecture is False
    in High Dimensions," Bulletin of the AMS, 27: 279-283 (1992). For
    more instances (though they get very large very fast) see either the
    generator in graph/contributed/shor or the generator in
    graph/contributed/pardalos.

Ham

>   (From Panos Pardalos pardalos\@math.uflorida.edu) Another coding
    theory problem. A Hamming graph with parameters n and d has a node
    for each binary vector of length n. Two nodes are adjacent if and
    only if the corresponding bit vectors are hamming distance at least
    d apart. For more instances, see the generator in
    graph/contributed/pardalos. It has been noted by participants that
    n- -2 graphs have a maximum clique of size $2^{n-1}$. For a proof of
    this, see the note in graph/contributed/bourjolly/hamming.tex.

San

>   (From Laura Sanchis laura\@cs.colgate.edu) Instances based on her
    "Test Case Construction for Vertex Cover Problem," DIMACS Workshop
    on Computational Support for Discrete Mathematics, March 1992 along
    with more recent work that will be part of a technical report to be
    published. The generator generates instances with known clique size.

SanR

>   (From Laura Sanchis laura\@cs.colgate.edu) These are random
    instances with sizes similar to those in San.

Bro

>   (From Mark Brockington brock\@cs.ualberta.ca) Instances from Mark
    Brockington and Joe Culberson's generator that attempts to "hide"
    cliques in a graph where the expected clique size is much smaller.
    For more instances, see their generator in
    graph/contributed/brockington.

PHat

>   (From Patrick Soriano and Michel Gendreau patrick\@crt.umontreal.ca)
    Random problems generated with the p hat generator which is a
    generalization of the classical uniform random graph generator. Uses
    3 parameters: n, the number of nodes, and a and b, two density
    parameters verifying $0 \le a \le b \le 1$. Generates problem
    instances having wider node degree spread and larger clique sizes.
    Reference: "Solving the Maximum Clique Problem Using a Tabu Search
    Approach", Annals of Operations Research 41, 385-403 (1993).

Stein

>   (From Carlo Mannino mannino\@iasi.rm.cnr.it) Clique formulation of
    the set covering formulation of the Steiner Triple Problem. Created
    using Mannino's code to convert set covering problems to clique
    problems. Notes: `MANN` graphs belongs to this class.

# Other Instances

BHOSLIB
:   Benchmarks with Hidden Optimum Solutions for Graph Problems (Maximum
    Clique, Maximum Independent Set, Minimum Vertex Cover and Vertex
    Coloring):
    [<http://www.nlsde.buaa.edu.cn/~kexu/benchmarks/graph-benchmarks.htm>](http://www.nlsde.buaa.edu.cn/~kexu/benchmarks/graph-benchmarks.htm)

------------------------------------------------------------------------

[Back to benchmark instances page](./index.html)

[^1]: Optimal clique size obtained from various resources including
    [<http://www.busygin.dp.ua/dimacs_clique.html>](http://www.busygin.dp.ua/dimacs_clique.html)
    and
    [<http://mat.gsia.cmu.edu/contents.clique.ps>](http://mat.gsia.cmu.edu/contents.clique.ps)

[^2]: Optimal clique size obtained from various resources including
    [<http://www.busygin.dp.ua/dimacs_clique.html>](http://www.busygin.dp.ua/dimacs_clique.html)
    and
    [<http://mat.gsia.cmu.edu/contents.clique.ps>](http://mat.gsia.cmu.edu/contents.clique.ps)

---
header-includes:
- "`<link rel=\"stylesheet\" type=\"text/css\" href=\"../Pub/solarized-light.css\" />`{=html}"
title: Vertex Cover Benchmark Instances
---

`<link rel="stylesheet" type="text/css" href="../Pub/solarized-light.css" />`{=html}

# Utils

-   [Converter](./instances/converter.tar.gz): convert from benchmarks
    from `ascii` to `binary` format and vice versa.

# Vertex Cover instances

[Directory](./instances/vertex_cover/benchmarks/), [tar.gz
format](./instances/vertex_cover/benchmarks.tar.gz)

From Ke Xu\'s website
[<http://www.nlsde.buaa.edu.cn/~kexu/benchmarks/graph-benchmarks.htm>](http://www.nlsde.buaa.edu.cn/~kexu/benchmarks/graph-benchmarks.htm)

::: {#tab:vc}
      File                                                                                    Vertices   Max IS[^1]   Min VC
  --- --------------------------------------------------------------------------------------- ---------- ------------ --------
  1   [frb30-15-mis (5 instances)](./instances/vertex_cover/benchmarks/frb30-15-mis.tar.gz)   450        30           420
  2   [frb35-17-mis (5 instances)](./instances/vertex_cover/benchmarks/frb35-17-mis.tar.gz)   595        35           560
  3   [frb40-19-mis (5 instances)](./instances/vertex_cover/benchmarks/frb40-19-mis.tar.gz)   760        40           720
  4   [frb45-21-mis (5 instances)](./instances/vertex_cover/benchmarks/frb45-21-mis.tar.gz)   945        45           900
  5   [frb50-23-mis (5 instances)](./instances/vertex_cover/benchmarks/frb50-23-mis.tar.gz)   1150       50           1100
  6   [frb53-24-mis (5 instances)](./instances/vertex_cover/benchmarks/frb53-24-mis.tar.gz)   1272       53           1219
  7   [frb56-25-mis (5 instances)](./instances/vertex_cover/benchmarks/frb56-25-mis.tar.gz)   1400       56           1344
  8   [frb59-26-mis (5 instances)](./instances/vertex_cover/benchmarks/frb59-26-mis.tar.gz)   1534       59           1475
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Clique complement graphs

[Directory](./instances/vertex_cover/clique_complement/), [tar.gz
format](./instances/coloring/vertex_cover/clique_complement.tar.gz)

From Muthubharathi Periannan\'s MS thesis at Penn State Harrisburg.

-   [Clique to Vertex
    Cover](./instances/vertex_cover/clique_complement/fileconverter.tar.gz)
    converter: converts graph instances for Max Clique into complement
    graphs, usable for Min Vertex Covering. The size of the minimum
    vertex cover is the difference between the total number of vertices
    and the size of the max clique.

::: {#tab:complementclique}
       File
  ---- ----------------------------------------------------------------------
  1    [brock](./instances/vertex_cover/clique_complement/brock.tar.gz)
  2    [C](./instances/vertex_cover/clique_complement/C.tar.gz)
  3    [cfat](./instances/vertex_cover/clique_complement/cfat.tar.gz)
  4    [gen](./instances/vertex_cover/clique_complement/gen.tar.gz)
  5    [hamming](./instances/vertex_cover/clique_complement/hamming.tar.gz)
  6    [johnson](./instances/vertex_cover/clique_complement/johnson.tar.gz)
  7    [keller](./instances/vertex_cover/clique_complement/keller.tar.gz)
  8    [MANN_a](./instances/vertex_cover/clique_complement/MANN_a.tar.gz)
  9    [p_hat](./instances/vertex_cover/clique_complement/p_hat.tar.gz)
  10   [san](./instances/vertex_cover/clique_complement/san.tar.gz)
  11   [sanr](./instances/vertex_cover/clique_complement/sanr.tar.gz)
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Random Graphs

[Directory](./instances/vertex_cover/random_graphs/), [tar.gz
format](./instances//vertex_cover/random_graphs.tar.gz)

From Muthubharathi Periannan\'s MS thesis at Penn State Harrisburg.

::: {#tab:random}
      File                                                                                                       Vertices
  --- ---------------------------------------------------------------------------------------------------------- ----------
  1   [random graphs with 50 vertices - 10 instances](./instances/vertex_cover/random_graphs/graph50.tar.gz)     50
  2   [random graphs with 100 vertices - 10 instances](./instances/vertex_cover/random_graphs/graph100.tar.gz)   100
  3   [random graphs with 200 vertices - 5 instances](./instances/vertex_cover/random_graphs/graph200.tar.gz)    200
  4   [random graphs with 250 vertices - 5 instances](./instances/vertex_cover/random_graphs/graph250.tar.gz)    250
  5   [random graphs with 500 vertices - 5 instances](./instances/vertex_cover/random_graphs/graph500.tar.gz)    500
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Other Instances

BHOSLIB
:   Benchmarks with Hidden Optimum Solutions for Graph Problems (Maximum
    Clique, Maximum Independent Set, Minimum Vertex Cover and Vertex
    Coloring):
    [<http://www.nlsde.buaa.edu.cn/~kexu/benchmarks/graph-benchmarks.htm>](http://www.nlsde.buaa.edu.cn/~kexu/benchmarks/graph-benchmarks.htm)

------------------------------------------------------------------------

[Back to benchmark instances page](./index.html)

[^1]: IS: indepdent set

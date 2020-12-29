---
header-includes:
- "`<link rel=\"stylesheet\" type=\"text/css\" href=\"../Pub/solarized-light.css\" />`{=html}"
title: Graph Coloring Benchmark Instances
---

`<link rel="stylesheet" type="text/css" href="../Pub/solarized-light.css" />`{=html}

# Utils

-   [Converter](./instances/converter.tar.gz): convert from benchmarks
    from `ascii` to `binary` format and vice versa.
-   [Benchmark](./instances/benchmark.tar.gz): Since the experiments are
    performed on different machines, download this file, untar, compile
    the program `dfmax`, run the program on `r500.b`, and report the
    resulting computation time.

# Graph Coloring instances

[Directory](./instances/coloring/graph_color/), [tar.gz
format](./instances/coloring/graph_color.tar.gz)

::: {#tab:gc}
        File                                                                              Vertices   Edges    Sol   Category   Note
  ----- --------------------------------------------------------------------------------- ---------- -------- ----- ---------- ----------------------------------------------------
  1     [(\*)DSJC125.1.col](./instances/coloring/graph_color/DSJC125.1.col)               125        736      ?     DSJ        
  2     [(\*)DSJC125.5.col](./instances/coloring/graph_color/DSJC125.5.col)               125        3891     ?     DSJ        
  3     [(\*)DSJC125.9.col](./instances/coloring/graph_color/DSJC125.9.col)               125        6961     ?     DSJ        
  4     [(\*)DSJC250.1.col](./instances/coloring/graph_color/DSJC250.1.col)               250        3218     ?     DSJ        
  5     [(\*)DSJC250.5.col](./instances/coloring/graph_color/DSJC250.5.col)               250        15668    ?     DSJ        
  6     [(\*)DSJC250.9.col](./instances/coloring/graph_color/DSJC250.9.col)               250        27897    ?     DSJ        
  7     [(\*)DSJC500.1.col](./instances/coloring/graph_color/DSJC500.1.col)               500        12458    ?     DSJ        
  8     [(\*)DSJC500.5.col](./instances/coloring/graph_color/DSJC500.5.col)               500        62624    ?     DSJ        
  9     [(\*)DSJC500.9.col](./instances/coloring/graph_color/DSJC500.9.col)               500        224874   ?     DSJ        \# edges should be[^1] 112437
  10    [(\*)DSJR500.1.col](./instances/coloring/graph_color/DSJR500.1.col)               500        3555     ?     DSJ        
  11    [(\*)DSJR500.1c.col](./instances/coloring/graph_color/DSJR500.1c.col)             500        121275   ?     DSJ        
  12    [(\*)DSJR500.5.col](./instances/coloring/graph_color/DSJR500.5.col)               500        58862    ?     DSJ        
  13    [(\*)DSJC1000.1.col](./instances/coloring/graph_color/DSJC1000.1.col)             1000       49629    ?     DSJ        
  14    [(\*)DSJC1000.5.col](./instances/coloring/graph_color/DSJC1000.5.col)             1000       249826   ?     DSJ        
  15    [(\*)DSJC1000.9.col](./instances/coloring/graph_color/DSJC1000.9.col)             1000       449449   ?     DSJ        
  16    [fpsol2.i.1.col](./instances/coloring/graph_color/fpsol2.i.1.col)                 496        11654    65    REG        
  17    [fpsol2.i.2.col](./instances/coloring/graph_color/fpsol2.i.2.col)                 451        8691     30    REG        
  18    [fpsol2.i.3.col](./instances/coloring/graph_color/fpsol2.i.3.col)                 425        8688     30    REG        
  19    [inithx.i.1.col](./instances/coloring/graph_color/inithx.i.1.col)                 864        18707    54    REG        
  20    [inithx.i.2.col](./instances/coloring/graph_color/inithx.i.2.col)                 645        13979    31    REG        
  21    [inithx.i.3.col](./instances/coloring/graph_color/inithx.i.3.col)                 621        13969    31    REG        
  22    [(\*)latin_square_10.col](./instances/coloring/graph_color/latin_square_10.col)   900        307350   ?     LAT        
  23    [(\*)le450_15a.col](./instances/coloring/graph_color/le450_15a.col)               450        8168     15    LEI        
  24    [(\*)le450_15b.col](./instances/coloring/graph_color/le450_15b.col)               450        8169     15    LEI        
  25    [(\*)le450_15c.col](./instances/coloring/graph_color/le450_15c.col)               450        16680    15    LEI        
  26    [(\*)le450_15d.col](./instances/coloring/graph_color/le450_15d.col)               450        16750    15    LEI        
  27    [(\*)le450_25a.col](./instances/coloring/graph_color/le450_25a.col)               450        8260     25    LEI        
  28    [(\*)le450_25b.col](./instances/coloring/graph_color/le450_25b.col)               450        8263     25    LEI        
  29    [(\*)le450_25c.col](./instances/coloring/graph_color/le450_25c.col)               450        17343    25    LEI        
  30    [(\*)le450_25d.col](./instances/coloring/graph_color/le450_25d.col)               450        17425    25    LEI        
  31    [(\*)le450_5a.col](./instances/coloring/graph_color/le450_5a.col)                 450        5714     5     LEI        
  32    [(\*)le450_5b.col](./instances/coloring/graph_color/le450_5b.col)                 450        5734     5     LEI        
  33    [(\*)le450_5c.col](./instances/coloring/graph_color/le450_5c.col)                 450        9803     5     LEI        
  34    [(\*)le450_5d.col](./instances/coloring/graph_color/le450_5d.col)                 450        9757     5     LEI        
  35    [mulsol.i.1.col](./instances/coloring/graph_color/mulsol.i.1.col)                 197        3925     49    REG        
  36    [mulsol.i.2.col](./instances/coloring/graph_color/mulsol.i.2.col)                 188        3885     31    REG        
  37    [mulsol.i.3.col](./instances/coloring/graph_color/mulsol.i.3.col)                 184        3916     31    REG        
  38    [mulsol.i.4.col](./instances/coloring/graph_color/mulsol.i.4.col)                 185        3946     31    REG        
  39    [mulsol.i.5.col](./instances/coloring/graph_color/mulsol.i.5.col)                 186        3973     31    REG        
  40    [school1.col](./instances/coloring/graph_color/school1.col)                       385        19095    ?     SCH        
  41    [(\*)school1_nsh.col](./instances/coloring/graph_color/school1_nsh.col)           352        14612    ?     SCH        
  42    [zeroin.i.1.col](./instances/coloring/graph_color/zeroin.i.1.col)                 211        4100     49    REG        
  43    [zeroin.i.2.col](./instances/coloring/graph_color/zeroin.i.2.col)                 211        3541     30    REG        
  44    [zeroin.i.3.col](./instances/coloring/graph_color/zeroin.i.3.col)                 206        3540     30    REG        
  45    [anna.col](./instances/coloring/graph_color/anna.col)                             138        493      11    SGB        
  46    [david.col](./instances/coloring/graph_color/david.col)                           87         406      11    SGB        
  47    [homer.col](./instances/coloring/graph_color/homer.col)                           561        1629     13    SGB        \# edges should be[^2] 1628 + 1 self-loop edge[^3]
  48    [huck.col](./instances/coloring/graph_color/huck.col)                             74         301      11    SGB        
  49    [jean.col](./instances/coloring/graph_color/jean.col)                             80         254      10    SGB        
  50    [games120.col](./instances/coloring/graph_color/games120.col)                     120        638      9     SGB        
  51    [miles1000.col](./instances/coloring/graph_color/miles1000.col)                   128        3216     42    SGB        
  52    [miles1500.col](./instances/coloring/graph_color/miles1500.col)                   128        5198     73    SGB        
  53    [miles250.col](./instances/coloring/graph_color/miles250.col)                     128        387      8     SGB        
  54    [miles500.col](./instances/coloring/graph_color/miles500.col)                     128        1170     20    SGB        
  55    [miles750.col](./instances/coloring/graph_color/miles750.col)                     128        2113     31    SGB        
  56    [queen5_5.col](./instances/coloring/graph_color/queen5_5.col)                     25         160      5     SGB        
  57    [queen6_6.col](./instances/coloring/graph_color/queen6_6.col)                     36         290      7     SGB        
  58    [queen7_7.col](./instances/coloring/graph_color/queen7_7.col)                     49         476      7     SGB        
  59    [(\*)queen8_12.col](./instances/coloring/graph_color/queen8_12.col)               96         1368     12    SGB        
  60    [(\*)queen8_8.col](./instances/coloring/graph_color/queen8_8.col)                 64         728      9     SGB        
  61    [(\*)queen9_9.col](./instances/coloring/graph_color/queen9_9.col)                 81         2112     10    SGB        \# edges should be[^4] 1056
  62    [(\*)queen10_10.col](./instances/coloring/graph_color/queen10_10.col)             100        2940     ?     SGB        \# edges should be[^5] 1470
  63    [(\*)queen11_11.col](./instances/coloring/graph_color/queen11_11.col)             121        3960     11    SGB        \# edges should be[^6] 1980
  64    [(\*)queen12_12.col](./instances/coloring/graph_color/queen12_12.col)             144        5192     ?     SGB        \# edges should be[^7] 2596
  65    [(\*)queen13_13.col](./instances/coloring/graph_color/queen13_13.col)             169        6656     13    SGB        \# edges should be[^8] 3328
  66    [(\*)queen14_14.col](./instances/coloring/graph_color/queen14_14.col)             196        8372     ?     SGB        \# edges should be[^9] 4186
  67    [(\*)queen15_15.col](./instances/coloring/graph_color/queen15_15.col)             225        10360    ?     SGB        \# edges should be[^10] 5180
  68    [(\*)queen16_16.col](./instances/coloring/graph_color/queen16_16.col)             256        12640    ?     SGB        \# edges should be[^11] 6320
  69    [myciel3.col](./instances/coloring/graph_color/myciel3.col)                       11         20       4     MYC        
  70    [myciel4.col](./instances/coloring/graph_color/myciel4.col)                       23         71       5     MYC        
  71    [(\*)myciel5.col](./instances/coloring/graph_color/myciel5.col)                   47         236      6     MYC        
  72    [(\*)myciel6.col](./instances/coloring/graph_color/myciel6.col)                   95         755      7     MYC        
  73    [(\*)myciel7.col](./instances/coloring/graph_color/myciel7.col)                   191        2360     8     MYC        
  74    [mugg88_1.col](./instances/coloring/graph_color/mug88_1.col)                      88         146      4     MIZ        
  75    [mugg88_25.col](./instances/coloring/graph_color/mug88_25.col)                    88         146      4     MIZ        
  76    [mugg100_1.col](./instances/coloring/graph_color/mug100_1.col)                    100        166      4     MIZ        
  77    [(\*)mugg100_25.col](./instances/coloring/graph_color/mug100_25.col)              100        166      4     MIZ        
  78    [abb313GPIA.col](./instances/coloring/graph_color/abb313GPIA.col)                 1557       53356    ?     HOS        corrected 12/29/03
  79    [ash331GPIA.col](./instances/coloring/graph_color/ash331GPIA.col)                 662        4185     ?     HOS        
  80    [ash608GPIA.col](./instances/coloring/graph_color/ash608GPIA.col)                 1216       7844     ?     HOS        
  81    [ash958GPIA.col](./instances/coloring/graph_color/ash958GPIA.col)                 1916       12506    ?     HOS        
  82    [will199GPIA.col](./instances/coloring/graph_color/will199GPIA.col)               701        6772     ?     HOS        corrected 12/29/03
  83    [(\*)1-Insertions_4.col](./instances/coloring/graph_color/1-Insertions_4.col)     67         232      4     CAR        
  84    [(\*)1-Insertions_5.col](./instances/coloring/graph_color/1-Insertions_5.col)     202        1227     ?     CAR        
  85    [(\*)1-Insertions_6.col](./instances/coloring/graph_color/1-Insertions_6.col)     607        6337     ?     CAR        
  86    [(\*)2-Insertions_3.col](./instances/coloring/graph_color/2-Insertions_3.col)     37         72       4     CAR        
  87    [(\*)2-Insertions_4.col](./instances/coloring/graph_color/2-Insertions_4.col)     149        541      4     CAR        
  88    [(\*)2-Insertions_5.col](./instances/coloring/graph_color/2-Insertions_5.col)     597        3936     ?     CAR        
  89    [(\*)3-Insertions_3.col](./instances/coloring/graph_color/3-Insertions_3.col)     56         110      4     CAR        
  90    [(\*)3-Insertions_4.col](./instances/coloring/graph_color/3-Insertions_4.col)     281        1046     ?     CAR        
  91    [(\*)3-Insertions_5.col](./instances/coloring/graph_color/3-Insertions_5.col)     1406       9695     ?     CAR        
  92    [(\*)4-Insertions_3.col](./instances/coloring/graph_color/4-Insertions_3.col)     79         156      3     CAR        
  93    [(\*)4-Insertions_4.col](./instances/coloring/graph_color/4-Insertions_4.col)     475        1795     ?     CAR        
  94    [(\*)1-FullIns_3.col](./instances/coloring/graph_color/1-FullIns_3.col)           30         100      ?     CAR        
  95    [(\*)1-FullIns_4.col](./instances/coloring/graph_color/1-FullIns_4.col)           93         593      ?     CAR        
  96    [(\*)1-FullIns_5.col](./instances/coloring/graph_color/1-FullIns_5.col)           282        3247     ?     CAR        
  97    [(\*)2-FullIns_3.col](./instances/coloring/graph_color/2-FullIns_3.col)           52         201      ?     CAR        
  98    [(\*)2-FullIns_4.col](./instances/coloring/graph_color/2-FullIns_4.col)           212        1621     ?     CAR        
  99    [(\*)2-FullIns_5.col](./instances/coloring/graph_color/2-FullIns_5.col)           852        12201    ?     CAR        
  100   [(\*)3-FullIns_3.col](./instances/coloring/graph_color/3-FullIns_3.col)           80         346      ?     CAR        
  101   [(\*)3-FullIns_4.col](./instances/coloring/graph_color/3-FullIns_4.col)           405        3524     ?     CAR        
  102   [(\*)3-FullIns_5.col](./instances/coloring/graph_color/3-FullIns_5.col)           2030       33751    ?     CAR        
  103   [(\*)4-FullIns_3.col](./instances/coloring/graph_color/4-FullIns_3.col)           114        541      ?     CAR        
  104   [(\*)4-FullIns_4.col](./instances/coloring/graph_color/4-FullIns_4.col)           690        6650     ?     CAR        
  105   [(\*)4-FullIns_5.col](./instances/coloring/graph_color/4-FullIns_5.col)           4146       77305    ?     CAR        
  106   [(\*)5-FullIns_3.col](./instances/coloring/graph_color/5-FullIns_3.col)           154        792      ?     CAR        
  107   [(\*)5-FullIns_4.col](./instances/coloring/graph_color/5-FullIns_4.col)           1085       11395    ?     CAR        
  108   [wap01a.col](./instances/coloring/graph_color/wap01a.col)                         2368       110871   ?     KOS        
  109   [wap02a.col](./instances/coloring/graph_color/wap02a.col)                         2464       111742   ?     KOS        
  110   [wap03a.col](./instances/coloring/graph_color/wap03a.col)                         4730       286722   ?     KOS        
  111   [wap04a.col](./instances/coloring/graph_color/wap04a.col)                         5231       294902   ?     KOS        \# vertices  \> 5000
  112   [wap05a.col](./instances/coloring/graph_color/wap05a.col)                         905        43081    ?     KOS        
  113   [wap06a.col](./instances/coloring/graph_color/wap06a.col)                         947        43571    ?     KOS        
  114   [wap07a.col](./instances/coloring/graph_color/wap07a.col)                         1809       103368   ?     KOS        
  115   [wap08a.col](./instances/coloring/graph_color/wap08a.col)                         1870       104176   ?     KOS        
  116   [qg.order30.col](./instances/coloring/graph_color/qg.order30.col)                 900        26100    30    GOM        
  117   [qg.order40.col](./instances/coloring/graph_color/qg.order40.col)                 1600       62400    40    GOM        
  118   [qg.order60.col](./instances/coloring/graph_color/qg.order60.col)                 3600       212400   60    GOM        
  119   [qg.order100.col](./instances/coloring/graph_color/qg.order100.col)               10000      990000   100   GOM        \# vertices  \> 5000
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Coloring with Fixed Set instances

[Directory](./instances/coloring/fixed_set_color/), [tar.gz
format](./instances/coloring/fixed_set_color.tar.gz)

In the following, some or all nodes must choose from the sets given by
the `f` lines.

::: {#tab:fixedset}
       File                                                                                                             Category   Note
  ---- ---------------------------------------------------------------------------------------------------------------- ---------- ------
  1    [qqwhdec.order18.holes120.1.col](./instances/coloring/fixed_set_color/qwhdec.order18.holes120.1.col)             GOM1       
  2    [qqwhdec.order30.holes316.1.col](./instances/coloring/fixed_set_color/qwhdec.order30.holes316.1.col)             GOM1       
  3    [qqwhdec.order30.holes320.1.col](./instances/coloring/fixed_set_color/qwhdec.order30.holes320.1.col)             GOM1       
  4    [qqwhdec.order33.holes381al.1.col](./instances/coloring/fixed_set_color/qwhdec.order33.holes381al.1.col)         GOM1       
  5    [qqwhdec.order35.holes405.1.col](./instances/coloring/fixed_set_color/qwhdec.order35.holes405.1.col)             GOM1       
  6    [qqwhdec.order40.holes528.1.col](./instances/coloring/fixed_set_color/qwhdec.order40.holes528.1.col)             GOM1       
  7    [qqwhdec.order5.holes10.1.col](./instances/coloring/fixed_set_color/qwhdec.order5.holes10.1.col)                 GOM1       
  8    [qqwhdec.order50.holes750al.1.col](./instances/coloring/fixed_set_color/qwhdec.order50.holes750al.1.col)         GOM1       
  9    [qqwhdec.order50.holes825al.1.col](./instances/coloring/fixed_set_color/qwhdec.order50.holes825al.1.col)         GOM1       
  10   [qqwhdec.order60.holes1080al.1.col](./instances/coloring/fixed_set_color/qwhdec.order60.holes1080al.1.col)       GOM1       
  11   [qqwhdec.order60.holes1152al.1.col](./instances/coloring/fixed_set_color/qwhdec.order60.holes1152al.1.col)       GOM1       
  12   [qqwhdec.order60.holes1440.1.col](./instances/coloring/fixed_set_color/qwhdec.order60.holes1440.1.col)           GOM1       
  13   [qqwhdec.order60.holes1620.1.col](./instances/coloring/fixed_set_color/qwhdec.order60.holes1620.1.col)           GOM1       
  14   [qqwhdec.order70.holes2450.1.col](./instances/coloring/fixed_set_color/qwhdec.order70.holes2450.1.col)           GOM1       
  15   [qqwhdec.order70.holes2940.1.col](./instances/coloring/fixed_set_color/qwhdec.order70.holes2940.1.col)           GOM1       
  16   [qqwhopt.order18.holes120.1.col](./instances/coloring/fixed_set_color/qwhopt.order18.holes120.1.col)             GOM1       
  17   [qqwhopt.order30.holes316.1.col](./instances/coloring/fixed_set_color/qwhopt.order30.holes316.1.col)             GOM1       
  18   [qqwhopt.order30.holes320.1.col](./instances/coloring/fixed_set_color/qwhopt.order30.holes320.1.col)             GOM1       
  19   [qqwhopt.order33.holes381al.1.col](./instances/coloring/fixed_set_color/qwhopt.order33.holes381al.1.col)         GOM1       
  20   [qqwhopt.order35.holes405.1.col](./instances/coloring/fixed_set_color/qwhopt.order35.holes405.1.col)             GOM1       
  21   [qqwhopt.order40.holes528.1.col](./instances/coloring/fixed_set_color/qwhopt.order40.holes528.1.col)             GOM1       
  22   [qqwhopt.order5.holes10.1.col](./instances/coloring/fixed_set_color/qwhopt.order5.holes10.1.col)                 GOM1       
  23   [qqwhopt.order50.holes750.bal.1.col](./instances/coloring/fixed_set_color/qwhopt.order50.holes750.bal.1.col)     GOM1       
  24   [qqwhopt.order50.holes825.bal.1.col](./instances/coloring/fixed_set_color/qwhopt.order50.holes825.bal.1.col)     GOM1       
  25   [qqwhopt.order60.holes1080.bal.1.col](./instances/coloring/fixed_set_color/qwhopt.order60.holes1080.bal.1.col)   GOM1       
  26   [qqwhopt.order60.holes1152.bal.1.col](./instances/coloring/fixed_set_color/qwhopt.order60.holes1152.bal.1.col)   GOM1       
  27   [qqwhopt.order60.holes1440.1.col](./instances/coloring/fixed_set_color/qwhopt.order60.holes1440.1.col)           GOM1       
  28   [qqwhopt.order60.holes1620.1.col](./instances/coloring/fixed_set_color/qwhopt.order60.holes1620.1.col)           GOM1       
  29   [qqwhopt.order70.holes2450.1.col](./instances/coloring/fixed_set_color/qwhopt.order70.holes2450.1.col)           GOM1       
  30   [qwhopt.order70.holes2940.1.col](./instances/coloring/fixed_set_color/qwhopt.order70.holes2940.1.col)            GOM1       
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Bandwidth and Multicoloring instances

[Directory](./instances/coloring/bandwidth_multicolor/), [tar.gz
format](./instances/coloring/bandwidth_multicolor.tar.gz)

The following can be used in bandwidth (edge weights) multicoloring
(node weights) or both simply by ignoring unwanted information (edge
weights for multicoloring and node weights for bandwidth). They can even
be used for graph coloring by ignoring both!

::: {#tab:bandwidth}
       File                                                                                         Vertices   Edges   Sol   Category   Note
  ---- -------------------------------------------------------------------------------------------- ---------- ------- ----- ---------- ------
  1    [GEOM20.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM20.col)                      20         40            GEO        
  2    [GEOM20a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM20a.col)                    20         57            GEO        
  3    [GEOM30.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM30.col)                      30         80            GEO        
  4    [GEOM30a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM30a.col)                    30         111           GEO        
  5    [GEOM40.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM40.col)                      40         118           GEO        
  6    [GEOM40a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM40a.col)                    40         186           GEO        
  7    [GEOM50.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM50.col)                      50         177           GEO        
  8    [GEOM50a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM50a.col)                    50         288           GEO        
  9    [GEOM60.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM60.col)                      60         245           GEO        
  10   [GEOM60a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM60a.col)                    60         339           GEO        
  11   [GEOM70.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM70.col)                      70         337           GEO        
  12   [GEOM70a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM70a.col)                    70         529           GEO        
  13   [GEOM80.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM80.col)                      80         429           GEO        
  14   [GEOM80a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM80a.col)                    80         692           GEO        
  15   [GEOM90.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM90.col)                      90         531           GEO        
  16   [GEOM90a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM90a.col)                    90         879           GEO        
  17   [GEOM100.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM100.col)                    100        647           GEO        
  18   [GEOM100a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM100a.col)                  100        1092          GEO        
  19   [GEOM110.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM110.col)                    110        748           GEO        
  20   [GEOM110a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM110a.col)                  110        1317          GEO        
  21   [GEOM120.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM120.col)                    120        893           GEO        
  22   [GEOM120a.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM120a.col)                  120        1554          GEO        
  23   [GEOM20b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM20b.col)                    20         52            GEO        
  24   [GEOM30b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM30b.col)                    30         111           GEO        
  25   [GEOM40b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM40b.col)                    40         197           GEO        
  26   [GEOM50b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM50b.col)                    50         299           GEO        
  27   [GEOM60b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM60b.col)                    60         426           GEO        
  28   [GEOM70b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM70b.col)                    70         558           GEO        
  29   [GEOM80b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM80b.col)                    80         743           GEO        
  30   [GEOM90b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM90b.col)                    90         950           GEO        
  31   [GEOM100b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM100b.col)                  100        1150          GEO        
  32   [GEOM110b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM110b.col)                  110        1366          GEO        
  33   [GEOM120b.col](./instances/coloring/bandwidth_multicolor/GEOM/GEOM120b.col)                  120        1611          GEO        
  34   [DSJC125.1g.col](./instances/coloring/bandwidth_multicolor/Instances_g/DSJC125.1g.col)       125        736     ?     DSJ        
  35   [DSJC125.5g.col](./instances/coloring/bandwidth_multicolor/Instances_g/DSJC125.5g.col)       125        3891    ?     DSJ        
  36   [DSJC125.9g.col](./instances/coloring/bandwidth_multicolor/Instances_g/DSJC125.9g.col)       125        6961    ?     DSJ        
  37   [myciel5g.col](./instances/coloring/bandwidth_multicolor/Instances_g/myciel5g.col)           47         236     ?     MYC        
  38   [myciel6g.col](./instances/coloring/bandwidth_multicolor/Instances_g/myciel6g.col)           95         755     ?     MYC        
  39   [myciel7g.col](./instances/coloring/bandwidth_multicolor/Instances_g/myciel7g.col)           191        2360    ?     MYC        
  40   [queen8_8g.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen8_8g.col)         64         728     ?     SGB        
  41   [queen9_9g.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen9_9g.col)         81         2112    ?     SGB        
  42   [queen10_10g.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen10_10g.col)     100        2940    ?     SGB        
  43   [queen11_11g.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen11_11g.col)     121        3960    ?     SGB        
  44   [queen12_12g.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen12_12g.col)     144        5192    ?     SGB        
  45   [DSJC125.1gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/DSJC125.1gb.col)     125        736     ?     DSJ        
  46   [DSJC125.5gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/DSJC125.5gb.col)     125        3891    ?     DSJ        
  47   [DSJC125.9gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/DSJC125.9gb.col)     125        6961    ?     DSJ        
  48   [myciel5gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/myciel5gb.col)         47         236     ?     MYC        
  49   [myciel6gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/myciel6gb.col)         95         755     ?     MYC        
  50   [myciel7gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/myciel7gb.col)         191        2360    ?     MYC        
  51   [queen8_8gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen8_8gb.col)       64         728     ?     SGB        
  52   [queen9_9gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen9_9gb.col)       81         2112    ?     SGB        
  53   [queen10_10gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen10_10gb.col)   100        2940    ?     SGB        
  54   [queen11_11gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen11_11gb.col)   121        3960    ?     SGB        
  55   [queen12_12gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/queen12_12gb.col)   144        5192    ?     SGB        
  56   [R50_1g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R50_1g.col)                                        MUC        
  57   [R50_5g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R50_5g.col)                                        MUC        
  58   [R50_9g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R50_9g.col)                                        MUC        
  59   [R75_1g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R75_1g.col)                                        MUC        
  60   [R75_5g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R75_5g.col)                                        MUC        
  61   [R75_9g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R75_9g.col)                                        MUC        
  62   [R100_1g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R100_1g.col)                                      MUC        
  63   [R100_5g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R100_5g.col)                                      MUC        
  64   [R100_9g.col](./instances/coloring/bandwidth_multicolor/Instances_g/R100_9g.col)                                      MUC        
  65   [R50_1gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R50_1gb.col)                                      MUC        
  66   [R50_5gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R50_5gb.col)                                      MUC        
  67   [R50_9gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R50_9gb.col)                                      MUC        
  68   [R75_1gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R75_1gb.col)                                      MUC        
  69   [R75_5gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R75_5gb.col)                                      MUC        
  70   [R75_9gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R75_9gb.col)                                      MUC        
  71   [R100_1gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R100_1gb.col)                                    MUC        
  72   [R100_5gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R100_5gb.col)                                    MUC        
  73   [R100_9gb.col](./instances/coloring/bandwidth_multicolor/Instances_g/R100_9gb.col)                                    MUC        
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Categories

DSJ

:   (From David Johnson, dsj\@research.att.com) Random graphs used in
    his paper with Aragon, McGeoch, and Schevon, \"Optimization by
    Simulated Annealing: An Experimental Evaluation; Part II, Graph
    Coloring and Number Partitioning\", Operations Research, 31,
    378--406 (1991).

    DSJC are standard (n , p) random graphs. DSJR are geometric graphs
    with DSJR..c being complements of geometric graphs. In some papers
    the edge count is twice that given here since both (i , j) and (j
    , i) are counted.

CUL

:   (From Joe Culberson (joe\@cs.ualberta.ca)) Quasi-random coloring
    problem.

REG
:   (From Gary Lewandowski (gary\@cs.wisc.edu)) Problem based on
    register allocation for variables in real codes.

LEI

:   (From Craig Morgenstern (morgenst\@riogrande.cs.tcu.edu)) Leighton
    graphs with guaranteed coloring size. A reference is F.T. Leighton,
    Journal of Research of the National Bureau of Standards, 84:
    489--505 (1979).

SCH

:   (From Gary Lewandowski (lewandow\@cs.wisc.edu)): Class scheduling
    graphs with and without study halls.

LAT

:   (From Gary Lewandowski (lewandow\@cs.wisc.edu)): Latin square
    problem.

SGB

:   (From Michael Trick (trick\@cmu.edu) Graphs from Donald Knuth\'s
    Stanford GraphBase. These can be divided into:

    Book Graphs

    :   Given a work of literature, a graph is created where each node
        represents a character. Two nodes are connected by an edge if
        the corresponding characters encounter each other in the book.
        Knuth creates the graphs for five classic works: Tolstoy\'s Anna
        Karenina (`anna`), Dicken\'s David Copperfield (`david`),
        Homer\'s Iliad (`homer`), Twain\'s Huckleberry Finn (`huck`),
        and Hugo\'s Les Miserables (`jean`).

    Game Graphs

    :   A graph representing the games played in a college football
        season can be represented by a graph where the nodes represent
        each college team. Two teams are connected by an edge if they
        played each other during the season. Knuth gives the graph for
        the 1990 college football season.

    Miles Graphs

    :   These graphs are similar to geometric graphs in that nodes are
        placed in space with two nodes connected if they are close
        enough. These graphs , however , are not random. The nodes
        represent a set of United States cities and the distance between
        them is given by by road mileage from 1947. These graphs are
        also due to Kuth.

    Queen Graphs

    :   Given an n by n chessboard , a queen graph is a graph on n\^2
        nodes , each corresponding to a square of the board. Two nodes
        are connected by an edge if the corresponding squares are in the
        same row , column , or diagonal. Unlike some of the other graphs
        , the coloring problem on this graph has a natural
        interpretation: Given such a chessboard , is it possible to
        place n sets of n queens on the board so that no two queens of
        the same set are in the same row , column , or diagonal? The
        answer is yes if and only if the graph has coloring number n.
        Vasek Chvatal has a
        [page](http://www.cs.concordia.ca/~chvatal/queengraphs.html) on
        such colorings.

MYC

:   (From Michael Trick (trick\@cmu.edu)) Graphs based on the Mycielski
    transformation. These graphs are difficult to solve because they are
    triangle free (clique number 2) but the coloring number increases in
    problem size.

MYC

:   (From Kuzunori Mizuno (mizuno\@algor.is.tsukaba.ac.jp) Graphs that
    are almost 3-colorable, but have a hard-to-find four clique
    embedded.

HOS

:   (From Shahadat Hossain) Graphs obtained from a matrix partitioning
    problem in the segmented columns approach to determine sparse
    Jacobian matrices.

CAR

:   (From M. Caramia (caramia\@iac.rm.cnr.it) and P. Dell\'Olmo
    (paolo.dellolmo\@uniroma1.it)) k-Insertion graphs and Full Insertion
    graphs are a generalization of myciel graphs with inserted nodes to
    increase graph size but not density.

KOS

:   (From Arie Koster koster\@zib.de) From real-life optical network
    design problems. Each vertex corresponds to a lightpath in the
    network; edges correspond to intersecting paths. (Corrected June 28
    , 2002 and replaced by wap?a.col instances: nodes now numbered from
    1 to n)

GOM

:   (From Carla Gomes gomes\@cs.cornell.edu) Latin squares (standard
    encoding).

GOM1

:   Encodings of latin square problem.

GEO

:   Geometric graphs generated by Michael Trick. Points are generated in
    a 10,000 by 10,000 grid and are connected by an edge if they are
    close enough together. Edge weights are inversely proportional to
    the distance between nodes; Node weights are uniformly generated.
    (Note, I do not know how hard this problem is, so if the 120 is too
    easy, let me know so I can generate larger instances). The GEOMn
    instances are sparse; GEOMa and GEOMb instances are denser; GEOMb
    requires fewer colors per node.

```{=html}
<!-- -->
```

MUC
:   Other instances are for multicoloring: the \"g.col\" are the
    corresponding coloring instances with node weights uniformly
    generated between 1 and 5; the \"gb.col\" have node weights
    uniformly generated between 1 and 20.

------------------------------------------------------------------------

[Back to benchmark instances page](./index.html)

[^1]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^2]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^3]: **self-loop**: e v1 v1

[^4]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^5]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^6]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^7]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^8]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^9]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^10]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

[^11]: **duplicated**: edges counted twice (e.g., e v1 v2 , e v2 v1)

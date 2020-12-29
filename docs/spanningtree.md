---
header-includes:
- "`<link rel=\"stylesheet\" type=\"text/css\" href=\"../Pub/solarized-light.css\" />`{=html}"
---

`<link rel="stylesheet" type="text/css" href="../Pub/solarized-light.css" />`{=html}

2\#+TITLE: Degree-Constrained Spanning Tree Benchmark Instances

# Spanning Tree Instances

[Directory](./instances/spanning_tree/SHRD-Graphs), [tar.gz
format](./instances/spanning_tree/SHRD-Graphs.tar.gz)

[README](./instances/spanning_tree/SHRD-Graphs/README): The CRD and SYM
data sets have been obtained from A Volgenant, the remainder have been
created by A Ernst and M Krishnamoorthy.

::: {#tab:spanningtree}
        File                                                         Deg      Sol[^1]
  ----- ---------------------------------------------------------- ----- ------------
  1     [crd100 ](./instances/spanning_tree/SHRD-Graphs/crd100)        2         7524
  2     [crd100 ](./instances/spanning_tree/SHRD-Graphs/crd100)        3     **6196**
  3     [crd100 ](./instances/spanning_tree/SHRD-Graphs/crd100)        4     **6194**
  4     [crd100 ](./instances/spanning_tree/SHRD-Graphs/crd100)        5     **6194**
  5     [crd101 ](./instances/spanning_tree/SHRD-Graphs/crd101)        2         8312
  6     [crd101 ](./instances/spanning_tree/SHRD-Graphs/crd101)        3     **7004**
  7     [crd101 ](./instances/spanning_tree/SHRD-Graphs/crd101)        4     **7004**
  8     [crd101 ](./instances/spanning_tree/SHRD-Graphs/crd101)        5     **7004**
  9     [crd102 ](./instances/spanning_tree/SHRD-Graphs/crd102)        2         7995
  10    [crd102 ](./instances/spanning_tree/SHRD-Graphs/crd102)        3     **6867**
  11    [crd102 ](./instances/spanning_tree/SHRD-Graphs/crd102)        4     **6831**
  12    [crd102 ](./instances/spanning_tree/SHRD-Graphs/crd102)        5     **6831**
  13    [crd103 ](./instances/spanning_tree/SHRD-Graphs/crd103)        2         8231
  14    [crd103 ](./instances/spanning_tree/SHRD-Graphs/crd103)        3     **7047**
  15    [crd103 ](./instances/spanning_tree/SHRD-Graphs/crd103)        4     **7041**
  16    [crd103 ](./instances/spanning_tree/SHRD-Graphs/crd103)        5     **7041**
  17    [crd104 ](./instances/spanning_tree/SHRD-Graphs/crd104)        2         8036
  18    [crd104 ](./instances/spanning_tree/SHRD-Graphs/crd104)        3     **6946**
  19    [crd104 ](./instances/spanning_tree/SHRD-Graphs/crd104)        4     **6946**
  20    [crd104 ](./instances/spanning_tree/SHRD-Graphs/crd104)        5     **6946**
  21    [crd105 ](./instances/spanning_tree/SHRD-Graphs/crd105)        2         7660
  22    [crd105 ](./instances/spanning_tree/SHRD-Graphs/crd105)        3     **6456**
  23    [crd105 ](./instances/spanning_tree/SHRD-Graphs/crd105)        4     **6449**
  24    [crd105 ](./instances/spanning_tree/SHRD-Graphs/crd105)        5     **6449**
  25    [crd106 ](./instances/spanning_tree/SHRD-Graphs/crd106)        2         7323
  26    [crd106 ](./instances/spanning_tree/SHRD-Graphs/crd106)        3     **6248**
  27    [crd106 ](./instances/spanning_tree/SHRD-Graphs/crd106)        4     **6248**
  28    [crd106 ](./instances/spanning_tree/SHRD-Graphs/crd106)        5     **6248**
  29    [crd107 ](./instances/spanning_tree/SHRD-Graphs/crd107)        2         8268
  30    [crd107 ](./instances/spanning_tree/SHRD-Graphs/crd107)        3     **7125**
  31    [crd107 ](./instances/spanning_tree/SHRD-Graphs/crd107)        4     **7125**
  32    [crd107 ](./instances/spanning_tree/SHRD-Graphs/crd107)        5     **7125**
  33    [crd108 ](./instances/spanning_tree/SHRD-Graphs/crd108)        2         7424
  34    [crd108 ](./instances/spanning_tree/SHRD-Graphs/crd108)        3     **6531**
  35    [crd108 ](./instances/spanning_tree/SHRD-Graphs/crd108)        4     **6531**
  36    [crd108 ](./instances/spanning_tree/SHRD-Graphs/crd108)        5     **6531**
  37    [crd109 ](./instances/spanning_tree/SHRD-Graphs/crd109)        2         7824
  38    [crd109 ](./instances/spanning_tree/SHRD-Graphs/crd109)        3     **6620**
  39    [crd109 ](./instances/spanning_tree/SHRD-Graphs/crd109)        4     **6613**
  40    [crd109 ](./instances/spanning_tree/SHRD-Graphs/crd109)        5     **6613**
  41    [crd300 ](./instances/spanning_tree/SHRD-Graphs/crd300)        2     **4472**
  42    [crd300 ](./instances/spanning_tree/SHRD-Graphs/crd300)        3     **3634**
  43    [crd300 ](./instances/spanning_tree/SHRD-Graphs/crd300)        4     **3634**
  44    [crd300 ](./instances/spanning_tree/SHRD-Graphs/crd300)        5     **3634**
  45    [crd301 ](./instances/spanning_tree/SHRD-Graphs/crd301)        2     **3618**
  46    [crd301 ](./instances/spanning_tree/SHRD-Graphs/crd301)        3     **3277**
  47    [crd301 ](./instances/spanning_tree/SHRD-Graphs/crd301)        4     **3277**
  48    [crd301 ](./instances/spanning_tree/SHRD-Graphs/crd301)        5     **3277**
  49    [crd302 ](./instances/spanning_tree/SHRD-Graphs/crd302)        2     **4221**
  50    [crd302 ](./instances/spanning_tree/SHRD-Graphs/crd302)        3     **4001**
  51    [crd302 ](./instances/spanning_tree/SHRD-Graphs/crd302)        4     **4001**
  52    [crd302 ](./instances/spanning_tree/SHRD-Graphs/crd302)        5     **4001**
  53    [crd303 ](./instances/spanning_tree/SHRD-Graphs/crd303)        2     **4234**
  54    [crd303 ](./instances/spanning_tree/SHRD-Graphs/crd303)        3     **3861**
  55    [crd303 ](./instances/spanning_tree/SHRD-Graphs/crd303)        4     **3861**
  56    [crd303 ](./instances/spanning_tree/SHRD-Graphs/crd303)        5     **3861**
  57    [crd304 ](./instances/spanning_tree/SHRD-Graphs/crd304)        2     **4730**
  58    [crd304 ](./instances/spanning_tree/SHRD-Graphs/crd304)        3     **3931**
  59    [crd304 ](./instances/spanning_tree/SHRD-Graphs/crd304)        4     **3931**
  60    [crd304 ](./instances/spanning_tree/SHRD-Graphs/crd304)        5     **3931**
  61    [crd305 ](./instances/spanning_tree/SHRD-Graphs/crd305)        2     **4249**
  62    [crd305 ](./instances/spanning_tree/SHRD-Graphs/crd305)        3     **3812**
  63    [crd305 ](./instances/spanning_tree/SHRD-Graphs/crd305)        4     **3774**
  64    [crd305 ](./instances/spanning_tree/SHRD-Graphs/crd305)        5     **3774**
  65    [crd306 ](./instances/spanning_tree/SHRD-Graphs/crd306)        2     **4212**
  66    [crd306 ](./instances/spanning_tree/SHRD-Graphs/crd306)        3     **3831**
  67    [crd306 ](./instances/spanning_tree/SHRD-Graphs/crd306)        4     **3801**
  68    [crd306 ](./instances/spanning_tree/SHRD-Graphs/crd306)        5     **3801**
  69    [crd307 ](./instances/spanning_tree/SHRD-Graphs/crd307)        2     **4259**
  70    [crd307 ](./instances/spanning_tree/SHRD-Graphs/crd307)        3     **3927**
  71    [crd307 ](./instances/spanning_tree/SHRD-Graphs/crd307)        4     **3927**
  72    [crd307 ](./instances/spanning_tree/SHRD-Graphs/crd307)        5     **3927**
  73    [crd308 ](./instances/spanning_tree/SHRD-Graphs/crd308)        2     **4030**
  74    [crd308 ](./instances/spanning_tree/SHRD-Graphs/crd308)        3     **3714**
  75    [crd308 ](./instances/spanning_tree/SHRD-Graphs/crd308)        4     **3714**
  76    [crd308 ](./instances/spanning_tree/SHRD-Graphs/crd308)        5     **3714**
  77    [crd309 ](./instances/spanning_tree/SHRD-Graphs/crd309)        2     **4030**
  78    [crd309 ](./instances/spanning_tree/SHRD-Graphs/crd309)        3     **3730**
  79    [crd309 ](./instances/spanning_tree/SHRD-Graphs/crd309)        4     **3730**
  80    [crd309 ](./instances/spanning_tree/SHRD-Graphs/crd309)        5     **3730**
  81    [crd500 ](./instances/spanning_tree/SHRD-Graphs/crd500)        2     **5312**
  82    [crd500 ](./instances/spanning_tree/SHRD-Graphs/crd500)        3     **4931**
  83    [crd500 ](./instances/spanning_tree/SHRD-Graphs/crd500)        4     **4931**
  84    [crd500 ](./instances/spanning_tree/SHRD-Graphs/crd500)        5     **4931**
  85    [crd501 ](./instances/spanning_tree/SHRD-Graphs/crd501)        2         5625
  86    [crd501 ](./instances/spanning_tree/SHRD-Graphs/crd501)        3     **5126**
  87    [crd501 ](./instances/spanning_tree/SHRD-Graphs/crd501)        4     **5126**
  88    [crd501 ](./instances/spanning_tree/SHRD-Graphs/crd501)        5     **5126**
  89    [crd502 ](./instances/spanning_tree/SHRD-Graphs/crd502)        2         5507
  90    [crd502 ](./instances/spanning_tree/SHRD-Graphs/crd502)        3     **4898**
  91    [crd502 ](./instances/spanning_tree/SHRD-Graphs/crd502)        4     **4898**
  92    [crd502 ](./instances/spanning_tree/SHRD-Graphs/crd502)        5     **4898**
  93    [crd503 ](./instances/spanning_tree/SHRD-Graphs/crd503)        2         5090
  94    [crd503 ](./instances/spanning_tree/SHRD-Graphs/crd503)        3     **4543**
  95    [crd503 ](./instances/spanning_tree/SHRD-Graphs/crd503)        4     **4543**
  96    [crd503 ](./instances/spanning_tree/SHRD-Graphs/crd503)        5     **4543**
  97    [crd504 ](./instances/spanning_tree/SHRD-Graphs/crd504)        2         5562
  98    [crd504 ](./instances/spanning_tree/SHRD-Graphs/crd504)        3     **4733**
  99    [crd504 ](./instances/spanning_tree/SHRD-Graphs/crd504)        4     **4733**
  100   [crd504 ](./instances/spanning_tree/SHRD-Graphs/crd504)        5     **4733**
  101   [crd505 ](./instances/spanning_tree/SHRD-Graphs/crd505)        2         5579
  102   [crd505 ](./instances/spanning_tree/SHRD-Graphs/crd505)        3     **4895**
  103   [crd505 ](./instances/spanning_tree/SHRD-Graphs/crd505)        4     **4892**
  104   [crd505 ](./instances/spanning_tree/SHRD-Graphs/crd505)        5     **4892**
  105   [crd506 ](./instances/spanning_tree/SHRD-Graphs/crd506)        2         5180
  106   [crd506 ](./instances/spanning_tree/SHRD-Graphs/crd506)        3     **4722**
  107   [crd506 ](./instances/spanning_tree/SHRD-Graphs/crd506)        4     **4691**
  108   [crd506 ](./instances/spanning_tree/SHRD-Graphs/crd506)        5     **4691**
  109   [crd507 ](./instances/spanning_tree/SHRD-Graphs/crd507)        2         5233
  110   [crd507 ](./instances/spanning_tree/SHRD-Graphs/crd507)        3     **4761**
  111   [crd507 ](./instances/spanning_tree/SHRD-Graphs/crd507)        4     **4761**
  112   [crd507 ](./instances/spanning_tree/SHRD-Graphs/crd507)        5     **4761**
  113   [crd508 ](./instances/spanning_tree/SHRD-Graphs/crd508)        2     **5371**
  114   [crd508 ](./instances/spanning_tree/SHRD-Graphs/crd508)        3     **5008**
  115   [crd508 ](./instances/spanning_tree/SHRD-Graphs/crd508)        4     **5008**
  116   [crd508 ](./instances/spanning_tree/SHRD-Graphs/crd508)        5     **5008**
  117   [crd509 ](./instances/spanning_tree/SHRD-Graphs/crd509)        2         5345
  118   [crd509 ](./instances/spanning_tree/SHRD-Graphs/crd509)        3     **4607**
  119   [crd509 ](./instances/spanning_tree/SHRD-Graphs/crd509)        4     **4607**
  120   [crd509 ](./instances/spanning_tree/SHRD-Graphs/crd509)        5     **4607**
  121   [crd700 ](./instances/spanning_tree/SHRD-Graphs/crd700)        2         6544
  122   [crd700 ](./instances/spanning_tree/SHRD-Graphs/crd700)        3     **5789**
  123   [crd700 ](./instances/spanning_tree/SHRD-Graphs/crd700)        4     **5789**
  124   [crd700 ](./instances/spanning_tree/SHRD-Graphs/crd700)        5     **5789**
  125   [crd701 ](./instances/spanning_tree/SHRD-Graphs/crd701)        2         6182
  126   [crd701 ](./instances/spanning_tree/SHRD-Graphs/crd701)        3     **5849**
  127   [crd701 ](./instances/spanning_tree/SHRD-Graphs/crd701)        4     **5848**
  128   [crd701 ](./instances/spanning_tree/SHRD-Graphs/crd701)        5     **5848**
  129   [crd702 ](./instances/spanning_tree/SHRD-Graphs/crd702)        2         7089
  130   [crd702 ](./instances/spanning_tree/SHRD-Graphs/crd702)        3     **6167**
  131   [crd702 ](./instances/spanning_tree/SHRD-Graphs/crd702)        4     **6167**
  132   [crd702 ](./instances/spanning_tree/SHRD-Graphs/crd702)        5     **6167**
  133   [crd703 ](./instances/spanning_tree/SHRD-Graphs/crd703)        2         6606
  134   [crd703 ](./instances/spanning_tree/SHRD-Graphs/crd703)        3     **5894**
  135   [crd703 ](./instances/spanning_tree/SHRD-Graphs/crd703)        4     **5878**
  136   [crd703 ](./instances/spanning_tree/SHRD-Graphs/crd703)        5     **5878**
  137   [crd704 ](./instances/spanning_tree/SHRD-Graphs/crd704)        2         6642
  138   [crd704 ](./instances/spanning_tree/SHRD-Graphs/crd704)        3     **5590**
  139   [crd704 ](./instances/spanning_tree/SHRD-Graphs/crd704)        4     **5590**
  140   [crd704 ](./instances/spanning_tree/SHRD-Graphs/crd704)        5     **5590**
  141   [crd705 ](./instances/spanning_tree/SHRD-Graphs/crd705)        2         6779
  142   [crd705 ](./instances/spanning_tree/SHRD-Graphs/crd705)        3     **5854**
  143   [crd705 ](./instances/spanning_tree/SHRD-Graphs/crd705)        4     **5853**
  144   [crd705 ](./instances/spanning_tree/SHRD-Graphs/crd705)        5     **5853**
  145   [crd706 ](./instances/spanning_tree/SHRD-Graphs/crd706)        2         6859
  146   [crd706 ](./instances/spanning_tree/SHRD-Graphs/crd706)        3     **6078**
  147   [crd706 ](./instances/spanning_tree/SHRD-Graphs/crd706)        4     **6078**
  148   [crd706 ](./instances/spanning_tree/SHRD-Graphs/crd706)        5     **6078**
  149   [crd707 ](./instances/spanning_tree/SHRD-Graphs/crd707)        2         6668
  150   [crd707 ](./instances/spanning_tree/SHRD-Graphs/crd707)        3     **5985**
  151   [crd707 ](./instances/spanning_tree/SHRD-Graphs/crd707)        4     **5985**
  152   [crd707 ](./instances/spanning_tree/SHRD-Graphs/crd707)        5     **5985**
  153   [crd708 ](./instances/spanning_tree/SHRD-Graphs/crd708)        2         6419
  154   [crd708 ](./instances/spanning_tree/SHRD-Graphs/crd708)        3     **5803**
  155   [crd708 ](./instances/spanning_tree/SHRD-Graphs/crd708)        4     **5803**
  156   [crd708 ](./instances/spanning_tree/SHRD-Graphs/crd708)        5     **5803**
  157   [crd709 ](./instances/spanning_tree/SHRD-Graphs/crd709)        2         6427
  158   [crd709 ](./instances/spanning_tree/SHRD-Graphs/crd709)        3     **5502**
  159   [crd709 ](./instances/spanning_tree/SHRD-Graphs/crd709)        4     **5502**
  160   [crd709 ](./instances/spanning_tree/SHRD-Graphs/crd709)        5     **5502**
  161   [shrd150](./instances/spanning_tree/SHRD-Graphs/shrd150)       2          895
  162   [shrd150](./instances/spanning_tree/SHRD-Graphs/shrd150)       3      **582**
  163   [shrd150](./instances/spanning_tree/SHRD-Graphs/shrd150)       4          430
  164   [shrd150](./instances/spanning_tree/SHRD-Graphs/shrd150)       5          339
  165   [shrd159](./instances/spanning_tree/SHRD-Graphs/shrd159)       2          906
  166   [shrd159](./instances/spanning_tree/SHRD-Graphs/shrd159)       3          597
  167   [shrd159](./instances/spanning_tree/SHRD-Graphs/shrd159)       4          430
  168   [shrd159](./instances/spanning_tree/SHRD-Graphs/shrd159)       5          332
  169   [shrd200](./instances/spanning_tree/SHRD-Graphs/shrd200)       2         1873
  170   [shrd200](./instances/spanning_tree/SHRD-Graphs/shrd200)       3         1100
  171   [shrd200](./instances/spanning_tree/SHRD-Graphs/shrd200)       4          829
  172   [shrd200](./instances/spanning_tree/SHRD-Graphs/shrd200)       5          638
  173   [shrd209](./instances/spanning_tree/SHRD-Graphs/shrd209)       2         1808
  174   [shrd209](./instances/spanning_tree/SHRD-Graphs/shrd209)       3         1106
  175   [shrd209](./instances/spanning_tree/SHRD-Graphs/shrd209)       4          807
  176   [shrd209](./instances/spanning_tree/SHRD-Graphs/shrd209)       5          634
  177   [shrd258](./instances/spanning_tree/SHRD-Graphs/shrd258)       2         2953
  178   [shrd258](./instances/spanning_tree/SHRD-Graphs/shrd258)       3         1838
  179   [shrd258](./instances/spanning_tree/SHRD-Graphs/shrd258)       4         1302
  180   [shrd258](./instances/spanning_tree/SHRD-Graphs/shrd258)       5         1007
  181   [shrd259](./instances/spanning_tree/SHRD-Graphs/shrd259)       2         2984
  182   [shrd259](./instances/spanning_tree/SHRD-Graphs/shrd259)       3         1870
  183   [shrd259](./instances/spanning_tree/SHRD-Graphs/shrd259)       4         1312
  184   [shrd259](./instances/spanning_tree/SHRD-Graphs/shrd259)       5         1019
  185   [shrd300](./instances/spanning_tree/SHRD-Graphs/shrd300)       2         4560
  186   [shrd300](./instances/spanning_tree/SHRD-Graphs/shrd300)       3         2738
  187   [shrd300](./instances/spanning_tree/SHRD-Graphs/shrd300)       4         1965
  188   [shrd300](./instances/spanning_tree/SHRD-Graphs/shrd300)       5         1526
  189   [shrd309](./instances/spanning_tree/SHRD-Graphs/shrd309)       2         4268
  190   [shrd309](./instances/spanning_tree/SHRD-Graphs/shrd309)       3         2765
  191   [shrd309](./instances/spanning_tree/SHRD-Graphs/shrd309)       4         1947
  192   [shrd309](./instances/spanning_tree/SHRD-Graphs/shrd309)       5         1487
  193   [str1000](./instances/spanning_tree/SHRD-Graphs/str1000)       2         5211
  194   [str1000](./instances/spanning_tree/SHRD-Graphs/str1000)       3     **4702**
  195   [str1000](./instances/spanning_tree/SHRD-Graphs/str1000)       4     **4546**
  196   [str1000](./instances/spanning_tree/SHRD-Graphs/str1000)       5     **4403**
  197   [str1001](./instances/spanning_tree/SHRD-Graphs/str1001)       2         5211
  198   [str1001](./instances/spanning_tree/SHRD-Graphs/str1001)       3     **4702**
  199   [str1001](./instances/spanning_tree/SHRD-Graphs/str1001)       4     **4546**
  200   [str1001](./instances/spanning_tree/SHRD-Graphs/str1001)       5     **4403**
  201   [str1002](./instances/spanning_tree/SHRD-Graphs/str1002)       2         7276
  202   [str1002](./instances/spanning_tree/SHRD-Graphs/str1002)       3     **6713**
  203   [str1002](./instances/spanning_tree/SHRD-Graphs/str1002)       4     **6511**
  204   [str1002](./instances/spanning_tree/SHRD-Graphs/str1002)       5     **6362**
  205   [str1003](./instances/spanning_tree/SHRD-Graphs/str1003)       2         7276
  206   [str1003](./instances/spanning_tree/SHRD-Graphs/str1003)       3     **6713**
  207   [str1003](./instances/spanning_tree/SHRD-Graphs/str1003)       4     **6511**
  208   [str1003](./instances/spanning_tree/SHRD-Graphs/str1003)       5     **6362**
  209   [str1004](./instances/spanning_tree/SHRD-Graphs/str1004)       2         8935
  210   [str1004](./instances/spanning_tree/SHRD-Graphs/str1004)       3     **8313**
  211   [str1004](./instances/spanning_tree/SHRD-Graphs/str1004)       4     **8117**
  212   [str1004](./instances/spanning_tree/SHRD-Graphs/str1004)       5     **7930**
  213   [str1005](./instances/spanning_tree/SHRD-Graphs/str1005)       2         8935
  214   [str1005](./instances/spanning_tree/SHRD-Graphs/str1005)       3     **8313**
  215   [str1005](./instances/spanning_tree/SHRD-Graphs/str1005)       4     **8117**
  216   [str1005](./instances/spanning_tree/SHRD-Graphs/str1005)       5     **7930**
  217   [str1006](./instances/spanning_tree/SHRD-Graphs/str1006)       2        10684
  218   [str1006](./instances/spanning_tree/SHRD-Graphs/str1006)       3   1\* 0155\*
  219   [str1006](./instances/spanning_tree/SHRD-Graphs/str1006)       4     **9951**
  220   [str1006](./instances/spanning_tree/SHRD-Graphs/str1006)       5     **9756**
  221   [str1007](./instances/spanning_tree/SHRD-Graphs/str1007)       2        10684
  222   [str1007](./instances/spanning_tree/SHRD-Graphs/str1007)       3   1\* 0155\*
  223   [str1007](./instances/spanning_tree/SHRD-Graphs/str1007)       4     **9951**
  224   [str1007](./instances/spanning_tree/SHRD-Graphs/str1007)       5     **9756**
  225   [str1008](./instances/spanning_tree/SHRD-Graphs/str1008)       2        12625
  226   [str1008](./instances/spanning_tree/SHRD-Graphs/str1008)       3   1\* 1952\*
  227   [str1008](./instances/spanning_tree/SHRD-Graphs/str1008)       4        11726
  228   [str1008](./instances/spanning_tree/SHRD-Graphs/str1008)       5        11530
  229   [str1009](./instances/spanning_tree/SHRD-Graphs/str1009)       2        12568
  230   [str1009](./instances/spanning_tree/SHRD-Graphs/str1009)       3   1\* 1985\*
  231   [str1009](./instances/spanning_tree/SHRD-Graphs/str1009)       4        11767
  232   [str1009](./instances/spanning_tree/SHRD-Graphs/str1009)       5        11571
  233   [str300 ](./instances/spanning_tree/SHRD-Graphs/str300)        2     **4173**
  234   [str300 ](./instances/spanning_tree/SHRD-Graphs/str300)        3     **3924**
  235   [str300 ](./instances/spanning_tree/SHRD-Graphs/str300)        4     **3761**
  236   [str300 ](./instances/spanning_tree/SHRD-Graphs/str300)        5     **3605**
  237   [str301 ](./instances/spanning_tree/SHRD-Graphs/str301)        2     **4171**
  238   [str301 ](./instances/spanning_tree/SHRD-Graphs/str301)        3     **3907**
  239   [str301 ](./instances/spanning_tree/SHRD-Graphs/str301)        4     **3753**
  240   [str301 ](./instances/spanning_tree/SHRD-Graphs/str301)        5     **3600**
  241   [str302 ](./instances/spanning_tree/SHRD-Graphs/str302)        2     **5706**
  242   [str302 ](./instances/spanning_tree/SHRD-Graphs/str302)        3     **5434**
  243   [str302 ](./instances/spanning_tree/SHRD-Graphs/str302)        4     **5237**
  244   [str302 ](./instances/spanning_tree/SHRD-Graphs/str302)        5     **5089**
  245   [str303 ](./instances/spanning_tree/SHRD-Graphs/str303)        2     **5660**
  246   [str303 ](./instances/spanning_tree/SHRD-Graphs/str303)        3     **5352**
  247   [str303 ](./instances/spanning_tree/SHRD-Graphs/str303)        4     **5152**
  248   [str303 ](./instances/spanning_tree/SHRD-Graphs/str303)        5     **4990**
  249   [str304 ](./instances/spanning_tree/SHRD-Graphs/str304)        2     **7089**
  250   [str304 ](./instances/spanning_tree/SHRD-Graphs/str304)        3     **6763**
  251   [str304 ](./instances/spanning_tree/SHRD-Graphs/str304)        4     **6559**
  252   [str304 ](./instances/spanning_tree/SHRD-Graphs/str304)        5     **6368**
  253   [str305 ](./instances/spanning_tree/SHRD-Graphs/str305)        2     **7187**
  254   [str305 ](./instances/spanning_tree/SHRD-Graphs/str305)        3     **6874**
  255   [str305 ](./instances/spanning_tree/SHRD-Graphs/str305)        4     **6665**
  256   [str305 ](./instances/spanning_tree/SHRD-Graphs/str305)        5     **6467**
  257   [str306 ](./instances/spanning_tree/SHRD-Graphs/str306)        2         8674
  258   [str306 ](./instances/spanning_tree/SHRD-Graphs/str306)        3     **8298**
  259   [str306 ](./instances/spanning_tree/SHRD-Graphs/str306)        4     **8066**
  260   [str306 ](./instances/spanning_tree/SHRD-Graphs/str306)        5     **7871**
  261   [str307 ](./instances/spanning_tree/SHRD-Graphs/str307)        2     **8499**
  262   [str307 ](./instances/spanning_tree/SHRD-Graphs/str307)        3     **8164**
  263   [str307 ](./instances/spanning_tree/SHRD-Graphs/str307)        4     **7964**
  264   [str307 ](./instances/spanning_tree/SHRD-Graphs/str307)        5     **7768**
  265   [str308 ](./instances/spanning_tree/SHRD-Graphs/str308)        2     **9793**
  266   [str308 ](./instances/spanning_tree/SHRD-Graphs/str308)        3     **9432**
  267   [str308 ](./instances/spanning_tree/SHRD-Graphs/str308)        4     **9223**
  268   [str308 ](./instances/spanning_tree/SHRD-Graphs/str308)        5     **9030**
  269   [str309 ](./instances/spanning_tree/SHRD-Graphs/str309)        2     **9948**
  270   [str309 ](./instances/spanning_tree/SHRD-Graphs/str309)        3     **9597**
  271   [str309 ](./instances/spanning_tree/SHRD-Graphs/str309)        4     **9367**
  272   [str309 ](./instances/spanning_tree/SHRD-Graphs/str309)        5     **9169**
  273   [str500 ](./instances/spanning_tree/SHRD-Graphs/str500)        2         4471
  274   [str500 ](./instances/spanning_tree/SHRD-Graphs/str500)        3     **4128**
  275   [str500 ](./instances/spanning_tree/SHRD-Graphs/str500)        4     **3962**
  276   [str500 ](./instances/spanning_tree/SHRD-Graphs/str500)        5     **3807**
  277   [str501 ](./instances/spanning_tree/SHRD-Graphs/str501)        2     **4517**
  278   [str501 ](./instances/spanning_tree/SHRD-Graphs/str501)        3     **4259**
  279   [str501 ](./instances/spanning_tree/SHRD-Graphs/str501)        4     **4095**
  280   [str501 ](./instances/spanning_tree/SHRD-Graphs/str501)        5     **3936**
  281   [str502 ](./instances/spanning_tree/SHRD-Graphs/str502)        2         6162
  282   [str502 ](./instances/spanning_tree/SHRD-Graphs/str502)        3     **5823**
  283   [str502 ](./instances/spanning_tree/SHRD-Graphs/str502)        4     **5634**
  284   [str502 ](./instances/spanning_tree/SHRD-Graphs/str502)        5     **5482**
  285   [str503 ](./instances/spanning_tree/SHRD-Graphs/str503)        2         6090
  286   [str503 ](./instances/spanning_tree/SHRD-Graphs/str503)        3     **5724**
  287   [str503 ](./instances/spanning_tree/SHRD-Graphs/str503)        4     **5530**
  288   [str503 ](./instances/spanning_tree/SHRD-Graphs/str503)        5     **5377**
  289   [str504 ](./instances/spanning_tree/SHRD-Graphs/str504)        2         7682
  290   [str504 ](./instances/spanning_tree/SHRD-Graphs/str504)        3     **7300**
  291   [str504 ](./instances/spanning_tree/SHRD-Graphs/str504)        4     **7105**
  292   [str504 ](./instances/spanning_tree/SHRD-Graphs/str504)        5     **6919**
  293   [str505 ](./instances/spanning_tree/SHRD-Graphs/str505)        2         7723
  294   [str505 ](./instances/spanning_tree/SHRD-Graphs/str505)        3     **7274**
  295   [str505 ](./instances/spanning_tree/SHRD-Graphs/str505)        4     **7073**
  296   [str505 ](./instances/spanning_tree/SHRD-Graphs/str505)        5     **6880**
  297   [str506 ](./instances/spanning_tree/SHRD-Graphs/str506)        2         9279
  298   [str506 ](./instances/spanning_tree/SHRD-Graphs/str506)        3     **8852**
  299   [str506 ](./instances/spanning_tree/SHRD-Graphs/str506)        4     **8645**
  300   [str506 ](./instances/spanning_tree/SHRD-Graphs/str506)        5     **8449**
  301   [str507 ](./instances/spanning_tree/SHRD-Graphs/str507)        2         9271
  302   [str507 ](./instances/spanning_tree/SHRD-Graphs/str507)        3     **8788**
  303   [str507 ](./instances/spanning_tree/SHRD-Graphs/str507)        4     **8582**
  304   [str507 ](./instances/spanning_tree/SHRD-Graphs/str507)        5     **8393**
  305   [str508 ](./instances/spanning_tree/SHRD-Graphs/str508)        2         0859
  306   [str508 ](./instances/spanning_tree/SHRD-Graphs/str508)        3     **0358**
  307   [str508 ](./instances/spanning_tree/SHRD-Graphs/str508)        4         0138
  308   [str508 ](./instances/spanning_tree/SHRD-Graphs/str508)              **9941**
  309   [str509 ](./instances/spanning_tree/SHRD-Graphs/str509)        2         0776
  310   [str509 ](./instances/spanning_tree/SHRD-Graphs/str509)        3     **0345**
  311   [str509 ](./instances/spanning_tree/SHRD-Graphs/str509)        4         0123
  312   [str509 ](./instances/spanning_tree/SHRD-Graphs/str509)        5     **9933**
  313   [str700 ](./instances/spanning_tree/SHRD-Graphs/str700)        2         4727
  314   [str700 ](./instances/spanning_tree/SHRD-Graphs/str700)        3     **4397**
  315   [str700 ](./instances/spanning_tree/SHRD-Graphs/str700)        4     **4249**
  316   [str700 ](./instances/spanning_tree/SHRD-Graphs/str700)        5     **4100**
  317   [str701 ](./instances/spanning_tree/SHRD-Graphs/str701)        2         4786
  318   [str701 ](./instances/spanning_tree/SHRD-Graphs/str701)        3     **4375**
  319   [str701 ](./instances/spanning_tree/SHRD-Graphs/str701)        4     **4217**
  320   [str701 ](./instances/spanning_tree/SHRD-Graphs/str701)        5     **4069**
  321   [str702 ](./instances/spanning_tree/SHRD-Graphs/str702)        2         6494
  322   [str702 ](./instances/spanning_tree/SHRD-Graphs/str702)        3     **6079**
  323   [str702 ](./instances/spanning_tree/SHRD-Graphs/str702)        4     **5877**
  324   [str702 ](./instances/spanning_tree/SHRD-Graphs/str702)        5     **5724**
  325   [str703 ](./instances/spanning_tree/SHRD-Graphs/str703)        2         6485
  326   [str703 ](./instances/spanning_tree/SHRD-Graphs/str703)        3     **6079**
  327   [str703 ](./instances/spanning_tree/SHRD-Graphs/str703)        4     **5880**
  328   [str703 ](./instances/spanning_tree/SHRD-Graphs/str703)        5     **5728**
  329   [str704 ](./instances/spanning_tree/SHRD-Graphs/str704)        2         8298
  330   [str704 ](./instances/spanning_tree/SHRD-Graphs/str704)        3     **7897**
  331   [str704 ](./instances/spanning_tree/SHRD-Graphs/str704)        4     **7694**
  332   [str704 ](./instances/spanning_tree/SHRD-Graphs/str704)        5     **7497**
  333   [str705 ](./instances/spanning_tree/SHRD-Graphs/str705)        2         8134
  334   [str705 ](./instances/spanning_tree/SHRD-Graphs/str705)        3     **7688**
  335   [str705 ](./instances/spanning_tree/SHRD-Graphs/str705)        4     **7496**
  336   [str705 ](./instances/spanning_tree/SHRD-Graphs/str705)        5     **7311**
  337   [str706 ](./instances/spanning_tree/SHRD-Graphs/str706)        2         9863
  338   [str706 ](./instances/spanning_tree/SHRD-Graphs/str706)        3     **9359**
  339   [str706 ](./instances/spanning_tree/SHRD-Graphs/str706)        4     **9153**
  340   [str706 ](./instances/spanning_tree/SHRD-Graphs/str706)        5     **8964**
  341   [str707 ](./instances/spanning_tree/SHRD-Graphs/str707)        2         9855
  342   [str707 ](./instances/spanning_tree/SHRD-Graphs/str707)        3     **9467**
  343   [str707 ](./instances/spanning_tree/SHRD-Graphs/str707)        4     **9256**
  344   [str707 ](./instances/spanning_tree/SHRD-Graphs/str707)        5     **9065**
  345   [str708 ](./instances/spanning_tree/SHRD-Graphs/str708)        2         1361
  346   [str708 ](./instances/spanning_tree/SHRD-Graphs/str708)        3     **0887**
  347   [str708 ](./instances/spanning_tree/SHRD-Graphs/str708)        4         0674
  348   [str708 ](./instances/spanning_tree/SHRD-Graphs/str708)        5         0482
  349   [str709 ](./instances/spanning_tree/SHRD-Graphs/str709)        2         1347
  350   [str709 ](./instances/spanning_tree/SHRD-Graphs/str709)        3     **0765**
  351   [str709 ](./instances/spanning_tree/SHRD-Graphs/str709)        4         0561
  352   [str709 ](./instances/spanning_tree/SHRD-Graphs/str709)        5         0367
  353   [sym300 ](./instances/spanning_tree/SHRD-Graphs/sym300)        2     **1376**
  354   [sym300 ](./instances/spanning_tree/SHRD-Graphs/sym300)        3     **1012**
  355   [sym300 ](./instances/spanning_tree/SHRD-Graphs/sym300)        4      **965**
  356   [sym300 ](./instances/spanning_tree/SHRD-Graphs/sym300)        5      **959**
  357   [sym301 ](./instances/spanning_tree/SHRD-Graphs/sym301)        2     **1637**
  358   [sym301 ](./instances/spanning_tree/SHRD-Graphs/sym301)        3     **1285**
  359   [sym301 ](./instances/spanning_tree/SHRD-Graphs/sym301)        4     **1219**
  360   [sym301 ](./instances/spanning_tree/SHRD-Graphs/sym301)        5     **1219**
  361   [sym302 ](./instances/spanning_tree/SHRD-Graphs/sym302)        2         2048
  362   [sym302 ](./instances/spanning_tree/SHRD-Graphs/sym302)        3     **1311**
  363   [sym302 ](./instances/spanning_tree/SHRD-Graphs/sym302)        4     **1256**
  364   [sym302 ](./instances/spanning_tree/SHRD-Graphs/sym302)        5     **1252**
  365   [sym303 ](./instances/spanning_tree/SHRD-Graphs/sym303)        2     **1494**
  366   [sym303 ](./instances/spanning_tree/SHRD-Graphs/sym303)        3     **1125**
  367   [sym303 ](./instances/spanning_tree/SHRD-Graphs/sym303)        4     **1090**
  368   [sym303 ](./instances/spanning_tree/SHRD-Graphs/sym303)        5     **1090**
  369   [sym304 ](./instances/spanning_tree/SHRD-Graphs/sym304)        2     **2511**
  370   [sym304 ](./instances/spanning_tree/SHRD-Graphs/sym304)        3     **1722**
  371   [sym304 ](./instances/spanning_tree/SHRD-Graphs/sym304)        4     **1686**
  372   [sym304 ](./instances/spanning_tree/SHRD-Graphs/sym304)        5     **1686**
  373   [sym305 ](./instances/spanning_tree/SHRD-Graphs/sym305)        2         1523
  374   [sym305 ](./instances/spanning_tree/SHRD-Graphs/sym305)        3      **958**
  375   [sym305 ](./instances/spanning_tree/SHRD-Graphs/sym305)        4      **904**
  376   [sym305 ](./instances/spanning_tree/SHRD-Graphs/sym305)        5      **903**
  377   [sym306 ](./instances/spanning_tree/SHRD-Graphs/sym306)        2     **1588**
  378   [sym306 ](./instances/spanning_tree/SHRD-Graphs/sym306)        3     **1110**
  379   [sym306 ](./instances/spanning_tree/SHRD-Graphs/sym306)        4      **976**
  380   [sym306 ](./instances/spanning_tree/SHRD-Graphs/sym306)        5      **976**
  381   [sym307 ](./instances/spanning_tree/SHRD-Graphs/sym307)        2     **1750**
  382   [sym307 ](./instances/spanning_tree/SHRD-Graphs/sym307)        3     **1280**
  383   [sym307 ](./instances/spanning_tree/SHRD-Graphs/sym307)        4     **1271**
  384   [sym307 ](./instances/spanning_tree/SHRD-Graphs/sym307)        5     **1271**
  385   [sym308 ](./instances/spanning_tree/SHRD-Graphs/sym308)        2         2273
  386   [sym308 ](./instances/spanning_tree/SHRD-Graphs/sym308)        3     **1546**
  387   [sym308 ](./instances/spanning_tree/SHRD-Graphs/sym308)        4     **1506**
  388   [sym308 ](./instances/spanning_tree/SHRD-Graphs/sym308)        5     **1506**
  389   [sym309 ](./instances/spanning_tree/SHRD-Graphs/sym309)        2     **1731**
  390   [sym309 ](./instances/spanning_tree/SHRD-Graphs/sym309)        3     **1368**
  391   [sym309 ](./instances/spanning_tree/SHRD-Graphs/sym309)        4     **1302**
  392   [sym309 ](./instances/spanning_tree/SHRD-Graphs/sym309)        5     **1296**
  393   [sym500 ](./instances/spanning_tree/SHRD-Graphs/sym500)        2         2522
  394   [sym500 ](./instances/spanning_tree/SHRD-Graphs/sym500)        3     **1156**
  395   [sym500 ](./instances/spanning_tree/SHRD-Graphs/sym500)        4     **1105**
  396   [sym500 ](./instances/spanning_tree/SHRD-Graphs/sym500)        5     **1098**
  397   [sym501 ](./instances/spanning_tree/SHRD-Graphs/sym501)        2         2009
  398   [sym501 ](./instances/spanning_tree/SHRD-Graphsp/sym501)       3     **1106**
  399   [sym501 ](./instances/spanning_tree/SHRD-Graphs/sym501)        4     **1065**
  400   [sym501 ](./instances/spanning_tree/SHRD-Graphs/sym501)        5     **1045**
  401   [sym502 ](./instances/spanning_tree/SHRD-Graphs/sym502)        2         2508
  402   [sym502 ](./instances/spanning_tree/SHRD-Graphs/sym502)        3     **1459**
  403   [sym502 ](./instances/spanning_tree/SHRD-Graphs/sym502)        4     **1416**
  404   [sym502 ](./instances/spanning_tree/SHRD-Graphs/sym502)        5     **1416**
  405   [sym503 ](./instances/spanning_tree/SHRD-Graphs/sym503)        2         2166
  406   [sym503 ](./instances/spanning_tree/SHRD-Graphs/sym503)        3     **1431**
  407   [sym503 ](./instances/spanning_tree/SHRD-Graphs/sym503)        4     **1367**
  408   [sym503 ](./instances/spanning_tree/SHRD-Graphs/sym503)        5     **1349**
  409   [sym504 ](./instances/spanning_tree/SHRD-Graphs/sym504)        2         2671
  410   [sym504 ](./instances/spanning_tree/SHRD-Graphs/sym504)        3     **1272**
  411   [sym504 ](./instances/spanning_tree/SHRD-Graphs/sym504)        4     **1241**
  412   [sym504 ](./instances/spanning_tree/SHRD-Graphs/sym504)        5     **1231**
  413   [sym505 ](./instances/spanning_tree/SHRD-Graphs/sym505)        2         2666
  414   [sym505 ](./instances/spanning_tree/SHRD-Graphs/sym505)        3     **1441**
  415   [sym505 ](./instances/spanning_tree/SHRD-Graphs/sym505)        4     **1276**
  416   [sym505 ](./instances/spanning_tree/SHRD-Graphs/sym505)        5     **1268**
  417   [sym506 ](./instances/spanning_tree/SHRD-Graphs/sym506)        2         2076
  418   [sym506 ](./instances/spanning_tree/SHRD-Graphs/sym506)        3     **1329**
  419   [sym506 ](./instances/spanning_tree/SHRD-Graphs/sym506)        4     **1256**
  420   [sym506 ](./instances/spanning_tree/SHRD-Graphs/sym506)        5     **1226**
  421   [sym507 ](./instances/spanning_tree/SHRD-Graphs/sym507)        2         2174
  422   [sym507 ](./instances/spanning_tree/SHRD-Graphs/sym507)        3     **1163**
  423   [sym507 ](./instances/spanning_tree/SHRD-Graphs/sym507)        4     **1106**
  424   [sym507 ](./instances/spanning_tree/SHRD-Graphs/sym507)        5     **1093**
  425   [sym508 ](./instances/spanning_tree/SHRD-Graphs/sym508)        2         2161
  426   [sym508 ](./instances/spanning_tree/SHRD-Graphs/sym508)        3     **1281**
  427   [sym508 ](./instances/spanning_tree/SHRD-Graphs/sym508)        4     **1266**
  428   [sym508 ](./instances/spanning_tree/SHRD-Graphs/sym508)        5     **1266**
  429   [sym509 ](./instances/spanning_tree/SHRD-Graphs/sym509)        2         2470
  430   [sym509 ](./instances/spanning_tree/SHRD-Graphs/sym509)        3     **1190**
  431   [sym509 ](./instances/spanning_tree/SHRD-Graphs/sym509)        4     **1160**
  432   [sym509 ](./instances/spanning_tree/SHRD-Graphs/sym509)        5     **1160**
  433   [sym700 ](./instances/spanning_tree/SHRD-Graphs/sym700)        2         2746
  434   [sym700 ](./instances/spanning_tree/SHRD-Graphs/sym700)        3     **1341**
  435   [sym700 ](./instances/spanning_tree/SHRD-Graphs/sym700)        4     **1234**
  436   [sym700 ](./instances/spanning_tree/SHRD-Graphs/sym700)        5     **1183**
  437   [sym701 ](./instances/spanning_tree/SHRD-Graphs/sym701)        2         2908
  438   [sym701 ](./instances/spanning_tree/SHRD-Graphs/sym701)        3     **1270**
  439   [sym701 ](./instances/spanning_tree/SHRD-Graphs/sym701)        4     **1198**
  440   [sym701 ](./instances/spanning_tree/SHRD-Graphs/sym701)        5     **1186**
  441   [sym702 ](./instances/spanning_tree/SHRD-Graphs/sym702)        2         2802
  442   [sym702 ](./instances/spanning_tree/SHRD-Graphs/sym702)        3     **1296**
  443   [sym702 ](./instances/spanning_tree/SHRD-Graphs/sym702)        4     **1234**
  444   [sym702 ](./instances/spanning_tree/SHRD-Graphs/sym702)        5     **1232**
  445   [sym703 ](./instances/spanning_tree/SHRD-Graphs/sym703)        2         1859
  446   [sym703 ](./instances/spanning_tree/SHRD-Graphs/sym703)        3     **1033**
  447   [sym703 ](./instances/spanning_tree/SHRD-Graphs/sym703)        4      **992**
  448   [sym703 ](./instances/spanning_tree/SHRD-Graphs/sym703)        5      **990**
  449   [sym704 ](./instances/spanning_tree/SHRD-Graphs/sym704)        2         2454
  450   [sym704 ](./instances/spanning_tree/SHRD-Graphs/sym704)        3     **1412**
  451   [sym704 ](./instances/spanning_tree/SHRD-Graphs/sym704)        4     **1335**
  452   [sym704 ](./instances/spanning_tree/SHRD-Graphs/sym704)        5     **1335**
  453   [sym705 ](./instances/spanning_tree/SHRD-Graphs/sym705)        2         2860
  454   [sym705 ](./instances/spanning_tree/SHRD-Graphs/sym705)        3     **1347**
  455   [sym705 ](./instances/spanning_tree/SHRD-Graphs/sym705)        4     **1298**
  456   [sym705 ](./instances/spanning_tree/SHRD-Graphs/sym705)        5     **1283**
  457   [sym706 ](./instances/spanning_tree/SHRD-Graphs/sym706)        2         1786
  458   [sym706 ](./instances/spanning_tree/SHRD-Graphs/sym706)        3      **987**
  459   [sym706 ](./instances/spanning_tree/SHRD-Graphs/sym706)        4      **977**
  460   [sym706 ](./instances/spanning_tree/SHRD-Graphs/sym706)        5      **958**
  461   [sym707 ](./instances/spanning_tree/SHRD-Graphs/sym707)        2         3024
  462   [sym707 ](./instances/spanning_tree/SHRD-Graphs/sym707)        3     **1507**
  463   [sym707 ](./instances/spanning_tree/SHRD-Graphs/sym707)        4     **1447**
  464   [sym707 ](./instances/spanning_tree/SHRD-Graphs/sym707)        5     **1432**
  465   [sym708 ](./instances/spanning_tree/SHRD-Graphs/sym708)        2         2472
  466   [sym708 ](./instances/spanning_tree/SHRD-Graphs/sym708)        3     **1318**
  467   [sym708 ](./instances/spanning_tree/SHRD-Graphs/sym708)        4     **1284**
  468   [sym708 ](./instances/spanning_tree/SHRD-Graphs/sym708)        5     **1271**
  469   [sym709 ](./instances/spanning_tree/SHRD-Graphs/sym709)        2         2404
  470   [sym709 ](./instances/spanning_tree/SHRD-Graphs/sym709)        3     **1106**
  471   [sym709 ](./instances/spanning_tree/SHRD-Graphs/sym709)        4     **1044**
  472   [sym709 ](./instances/spanning_tree/SHRD-Graphs/sym709)        5     **1044**
:::

```{=org}
#+tblfm: $1=@#-1   
```
# Additional Instances

[Directory](./instances/spanning_tree/IEEE-Graphs/), [tar.gz
format](./instances/spanning_tree/IEEE-Graphs.tar.gz)

::: {#tab:additional}
       File
  ---- ------------------------------------------------------------------
  1    [R100n1 ](./instances/spanning_tree/IEEE-Graphs/R100n1)
  2    [R100n2 ](./instances/spanning_tree/IEEE-Graphs/R100n2)
  3    [R100n3 ](./instances/spanning_tree/IEEE-Graphs/R100n3)
  4    [R200n1 ](./instances/spanning_tree/IEEE-Graphs/R200n1)
  5    [R200n2 ](./instances/spanning_tree/IEEE-Graphs/R200n2)
  6    [R200n3 ](./instances/spanning_tree/IEEE-Graphs/R200n3)
  7    [ R50n1 ](./instances/spanning_tree/IEEE-Graphs/R50n1)
  8    [ R50n2 ](./instances/spanning_tree/IEEE-Graphs/R50n2)
  9    [ R50n3 ](./instances/spanning_tree/IEEE-Graphs/R50n3)
  10   [m050n1 ](./instances/spanning_tree/IEEE-Graphs/m050n1)
  11   [m050n2 ](./instances/spanning_tree/IEEE-Graphs/m050n2)
  12   [m050n3 ](./instances/spanning_tree/IEEE-Graphs/m050n3)
  13   [m100n1 ](./instances/spanning_tree/IEEE-Graphs/m100n1)
  14   [m100n2 ](./instances/spanning_tree/IEEE-Graphs/m100n2)
  15   [m100n3 ](./instances/spanning_tree/IEEE-Graphs/m100n3)
  16   [m200n1 ](./instances/spanning_tree/IEEE-Graphs/m200n1)
  17   [m200n2 ](./instances/spanning_tree/IEEE-Graphs/m200n2)
  18   [m200n3 ](./instances/spanning_tree/IEEE-Graphs/m200n3)
  19   [m300n1 ](./instances/spanning_tree/IEEE-Graphs/m300n1)
  20   [m400n1 ](./instances/spanning_tree/IEEE-Graphs/m400n1)
  21   [m500n1 ](./instances/spanning_tree/IEEE-Graphs/m500n1)
  22   [zhou-gen-9n](./instances/spanning_tree/IEEE-Graphs/zhou-gen-9n)
:::

```{=org}
#+tblfm: $1=@#-1   
```

------------------------------------------------------------------------

[Back to benchmark instances page](./index.html)

[^1]: **bold** indicates optimal solutions

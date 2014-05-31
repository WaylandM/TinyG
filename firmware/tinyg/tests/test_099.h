/*
 * test_099.h - Arbitrary test file for debugging
 */

/****** Extract from flux test.NUMBERED_003.gcode ***/

const char test_99[] PROGMEM = "\
N0 G0 X0 Y0 Z0\n\
N1 F2000\n\
N2 G01 X34.4634 Y27.6346\n\
N3 G01 X34.5426 Y27.7138\n\
N4 G01 X35.5339 Y28.7051\n\
N5 G01 X35.5899 Y28.8021\n\
N6 G01 X35.6189 Y28.9103\n\
N7 G01 X35.6189 Y30.7788\n\
N8 G01 X35.7212 Y30.8811\n\
N9 G01 X36.3400 Y30.8811\n\
";
/*
N10 G01 X36.3679 Y30.8774
N11 G01 X36.3958 Y30.8811
N12 G01 X36.4239 Y30.8811
N13 G01 X36.4510 Y30.8884
N14 G01 X36.4789 Y30.8920
N15 G01 X36.5049 Y30.9028
N16 G01 X36.5321 Y30.9101
N17 G01 X36.5564 Y30.9242
N18 G01 X36.5824 Y30.9349
N19 G01 X36.6047 Y30.9520
N20 G01 X36.6291 Y30.9661
N21 G01 X36.6490 Y30.9860
N22 G01 X36.6713 Y31.0031
N23 G01 X36.6884 Y31.0254
N24 G01 X36.7083 Y31.0453
N25 G01 X36.7223 Y31.0697
N26 G01 X36.7395 Y31.0920
N27 G01 X36.7502 Y31.1179
N28 G01 X36.7643 Y31.1423
N29 G01 X36.7716 Y31.1695
N30 G01 X36.7823 Y31.1954
N31 G01 X36.7860 Y31.2233
N32 G01 X36.7933 Y31.2505
N33 G01 X36.7933 Y31.2786
N34 G01 X36.7969 Y31.3065
N35 G01 X36.7933 Y31.3344
N36 G01 X36.7933 Y31.3625
N37 G01 X36.7860 Y31.3897
N38 G01 X36.7823 Y31.4176
N39 G01 X36.7716 Y31.4435
N40 G01 X36.7643 Y31.4707
N41 G01 X36.7502 Y31.4951
N42 G01 X36.7395 Y31.5210
N43 G01 X36.7223 Y31.5433
N44 G01 X36.7083 Y31.5677
N45 G01 X36.6884 Y31.5876
N46 G01 X36.6713 Y31.6099
N47 G01 X36.6490 Y31.6270
N48 G01 X36.6291 Y31.6469
N49 G01 X36.6047 Y31.6610
N50 G01 X36.5824 Y31.6781
N51 G01 X36.5564 Y31.6888
N52 G01 X36.5321 Y31.7029
N53 G01 X36.5049 Y31.7102
N54 G01 X36.2210 Y31.8278
N55 G01 X36.2072 Y31.8442
N56 G01 X36.1921 Y31.8548
N57 G01 X36.1790 Y31.8678
N58 G01 X36.1463 Y31.8867
N59 G01 X36.1153 Y31.9083
N60 G01 X36.0980 Y31.9146
N61 G01 X36.0820 Y31.9238
N62 G01 X36.0455 Y31.9336
N63 G01 X36.0100 Y31.9465
N64 G01 X35.9917 Y31.9480
N65 G01 X35.9738 Y31.9528
N66 G01 X35.9360 Y31.9528
N67 G01 X35.8984 Y31.9560
N68 G01 X35.8803 Y31.9528
N69 G01 X35.8618 Y31.9528
N70 G01 X35.8253 Y31.9430
N71 G01 X35.7670 Y31.9327
N72 G01 X35.7404 Y31.9316
N73 G01 X35.7121 Y31.9229
N74 G01 X35.6829 Y31.9177
N75 G01 X35.6588 Y31.9064
N76 G01 X35.6500 Y31.9037
N77 G01 X35.6215 Y31.9063
N78 G01 X0 Y0
N79 G01 Z0
*/

/****** Extract from us-seal ***/
/*
const char test_99[] PROGMEM = "\
G21 G92\n\
N9 G1 Z0.30 F1000\n\
N1738 G1 X6.57 Y19.94\n\
N1739 G1 X6.57 Y19.87\n\
N1740 G1 X6.57 Y19.86\n\
N1741 G1 X6.57 Y19.79\n\
N1742 G1 X6.57 Y19.77\n\
N1743 G1 X6.57 Y19.71\n\
N1744 G1 X6.57 Y19.69\n\
N1745 G1 X6.57 Y19.63\n\
N1746 G1 X6.57 Y19.61\n\
N1747 G1 X6.57 Y19.55\n\
N1748 G1 X6.57 Y19.53\n\
N1749 G1 X6.57 Y19.47\n\
N1750 G1 X6.64 Y19.47\n\
N1751 G1 X6.68 Y19.47\n\
N1752 G1 X6.76 Y19.54\n\
N1753 G1 X6.86 Y19.52\n\
N1754 G1 X6.86 Y19.68\n\
N1755 G1 X6.86 Y19.75\n\
N1756 G1 X6.86 Y19.76\n\
N1757 G1 X6.78 Y19.77\n\
N1758 G1 X6.78 Y19.93\n\
N1759 G1 X6.77 Y19.99\n\
N1760 G1 X6.78 Y20.01\n\
N1761 G1 X6.69 Y20.01\n\
N1762 G1 X6.69 Y20.18\n\
N1763 G1 X6.69 Y20.24\n\
N1764 G1 X6.69 Y20.26\n\
N1765 G1 X6.69 Y20.32\n\
N1766 G1 X6.69 Y20.34\n\
N1767 G1 X6.61 Y20.34\n\
N1768 G1 X6.61 Y20.50\n\
";
*/
/****** Extract from Evil45 F3000, NoA ***/
/*
const char test_99[] PROGMEM = "\
N1 G21\n\
N2 G90\n\
N9 G92 X95.52 Y102.24\n\
N11 G1 F3000 X95.52 Y102.18\n\
N12 G1 X95.52 Y101.54\n\
N13 G1 X95.52 Y101.49\n\
N14 G1 X95.52 Y98.86\n\
N15 G1 X95.52 Y98.75\n\
N16 G1 X95.52 Y98.19\n\
N17 G1 X95.52 Y98.13\n\
N18 G1 X95.52 Y97.68\n\
N19 G1 X95.55 Y97.68\n\
N20 G1 X95.76 Y97.68\n\
N21 G1 X96.60 Y97.68\n\
N22 G1 X96.71 Y97.68\n\
N23 G1 X97.93 Y97.68\n\
N24 G1 X98.09 Y97.68\n\
N25 G1 X100.71 Y97.68\n\
N26 G1 X100.82 Y97.68\n\
N27 G1 X101.37 Y97.68\n\
N28 G1 X101.43 Y97.68\n\
N29 G1 X101.76 Y97.68\n\
N30 G1 X101.95 Y97.68\n\
N31 G1 X101.96 Y97.69\n\
N32 G1 X102.12 Y97.82\n\
N33 G1 X102.57 Y97.97\n\
N34 G1 X102.98 Y97.77\n\
N35 G1 X103.09 Y97.68\n\
";
*/
/****** Programs for running the pendulum with spinning heads ***

const char test_99[] PROGMEM = "\
G1 F6200 x100 y1.25 z1.25 a1.25\n\
x0 y0 z0 a0\n\
G1 F6200 x100 y1.25 z1.25 a1.25\n\
x0 y0 z0 a0\n\
";

const char test_98[] PROGMEM = "\
G1 F6200 x100 y1.25 z1.25 a1.25\n\
x0 y0 z0 a0\n\
G1 F6200 x100 y1.25 z6.25 a1.25\n\
x0 y0 z0 a0\n\
";

const char test_97[] PROGMEM = "\
g0 y0.625 z0.625 a0.625\n\
g4 P0.75\n\
G1 F4000 y80 z80 a80\n\
y0.625 z0.625 a0.625\n\
g4 P0.75\n\
y0 z0 a0\n\
";

const char test_96[] PROGMEM = "\
G1 F3000 y20\n\
z20 a20\n\
y0 a0\n\
y20 z0 a20\n\
a0 y0\n\
";

***/

/*
// Ultimaker robot short line test
//N1517 G0 X109.77 Y96.32 Z0.60
//N1519 G1 F2520 X109.94 Y96.37 A22.20145
//N1549 G1 X110.50 Y107.36 A22.28936

const char test_98[] PROGMEM = "\
N8G21\n\
N9G90\n\
N1G28.3Z0\n\
N10G28.3X0Y0\n\
N12F2500\n\
N1525G1X0Y0\n\
N1549G1X0Y9.79000000000001\n\
M30";

const char test_99[] PROGMEM = "\
N8G21\n\
N9G90\n\
N1G28.3Z0\n\
N10G28.3X0Y0\n\
N12F2500\n\
N1525G1X0Y0\n\
N1526G1X0Y0.02\n\
N1527G1X0Y0.39\n\
N1528G1X0Y0.43\n\
N1529G1X0Y1.18\n\
N1530G1X0Y1.26\n\
N1531G1X0Y2.02\n\
N1532G1X0Y2.07\n\
N1533G1X0Y2.84\n\
N1534G1X0Y2.88\n\
N1535G1X0Y3.65\n\
N1536G1X0Y3.70\n\
N1537G1X0Y4.47\n\
N1538G1X0Y4.51\n\
N1539G1X0Y5.28\n\
N1540G1X0Y5.33\n\
N1541G1X0Y6.10\n\
N1542G1X0Y6.14\n\
N1543G1X0Y6.91\n\
N1544G1X0Y6.96\n\
N1545G1X0Y7.73\n\
N1546G1X0Y7.77\n\
N1547G1X0Y8.56\n\
N1548G1X0Y8.66\n\
N1549G1X0Y9.79\n\
M30";
*/
/*
N1557G1X-1.23Y11.13\n\
N1558G1X-1.25Y11.13\n\
N1559G1X-1.58Y11.13\n\
N1560G1X-1.62Y11.13\n\
N1561G1X-2.3Y11.13\n\
N1562G1X-2.36Y11.13\n\
N1563G1X-3.05Y11.13\n\
N1564G1X-3.09Y11.13\n\
N1565G1X-3.78Y11.13\n\
N1566G1X-3.81999999999999Y11.13\n\
N1567G1X-4.51000000000001Y11.13\n\
N1568G1X-4.56Y11.13\n\
N1569G1X-5.25Y11.13\n\
N1570G1X-5.29000000000001Y11.13\n\
N1571G1X-6Y11.13\n\
N1572G1X-6.09Y11.13\n\
N1573G1X-7.09999999999999Y11.13\n\
N1578G1X-9.15000000000001Y11.13\n\
N1579G1X-9.23Y11.13\n\
N1580G1X-9.78Y11.13\n\
N1581G1X-9.95999999999999Y11.13\n\
N1582G1X-10.6Y11.13\n\
N1583G1X-10.7Y11.13\n\
N1584G1X-11.34Y11.13\n\
N1585G1X-11.43Y11.13\n\
N1586G1X-12.07Y11.13\n\
N1587G1X-12.16Y11.13\n\
N1588G1X-12.8Y11.13\n\
N1589G1X-12.9Y11.13\n\
N1590G1X-13.54Y11.13\n\
N1591G1X-13.63Y11.13\n\
N1592G1X-14.64Y11.13\n\
N1593G1X-14.73Y11.13\n\
N1594G1X-14.99Y11.13\n\
N1595G1X-15.05Y11.13\n\
N1603G1X-16Y9.52000000000001\n\
N1604G1X-16Y9.42\n\
N1605G1X-16Y8.81\n\
N1606G1X-16Y8.60000000000001\n\
N1607G1X-16Y7.89\n\
N1608G1X-16Y7.79000000000001\n\
N1609G1X-16Y7.07000000000001\n\
N1610G1X-16Y6.97000000000001\n\
N1611G1X-16Y6.26000000000001\n\
N1612G1X-16Y6.16000000000001\n\
N1613G1X-16Y5.44000000000001\n\
N1614G1X-16Y5.34\n\
N1615G1X-16Y4.63000000000001\n\
N1616G1X-16Y4.53\n\
N1617G1X-16Y3.81\n\
N1618G1X-16Y3.71000000000001\n\
N1619G1X-16Y3\n\
N1620G1X-16Y2.89\n\
N1621G1X-16Y2.18000000000001\n\
N1622G1X-16Y2.08000000000001\n\
N1623G1X-16Y1.37\n\
N1624G1X-16Y1.26000000000001\n\
N1625G1X-16Y0.140000000000001\n\
N1626G1X-16Y0.0400000000000063\n\
N1627G1X-16Y-0.25\n\
N1628G1X-16Y-0.319999999999993\n\
N1636G1X-14.46Y-1.27\n\
N1637G1X-14.37Y-1.27\n\
N1638G1X-13.82Y-1.27\n\
N1639G1X-13.64Y-1.27\n\
N1640G1X-13Y-1.27\n\
N1641G1X-12.9Y-1.27\n\
N1642G1X-12.26Y-1.27\n\
N1643G1X-12.17Y-1.27\n\
N1644G1X-11.53Y-1.27\n\
N1645G1X-11.44Y-1.27\n\
N1646G1X-10.8Y-1.27\n\
N1647G1X-10.7Y-1.27\n\
N1648G1X-10.06Y-1.27\n\
N1649G1X-9.97Y-1.27\n\
N1650G1X-8.95999999999999Y-1.27\n\
N1651G1X-8.87Y-1.27\n\
N1652G1X-8.61Y-1.27\n\
N1657G1X-6.81999999999999Y-1.27\n\
N1658G1X-6.78Y-1.27\n\
N1659G1X-6.09999999999999Y-1.27\n\
N1660G1X-6.04000000000001Y-1.27\n\
N1661G1X-5.34999999999999Y-1.27\n\
N1662G1X-5.31Y-1.27\n\
N1663G1X-4.62Y-1.27\n\
N1664G1X-4.58Y-1.27\n\
N1665G1X-3.89Y-1.27\n\
N1666G1X-3.84999999999999Y-1.27\n\
N1667G1X-3.15000000000001Y-1.27\n\
N1668G1X-3.11Y-1.27\n\
N1669G1X-2.40000000000001Y-1.27\n\
N1670G1X-2.31Y-1.27\n\
N1671G1X-1.3Y-1.27";
*/

/*

#define __SHORT_LINES

#ifdef __SHORT_LINES
const char test_99[] PROGMEM = "\
N0 G92 X110.50 Y96.32 A22.21268\n\
N1 F2520\n\
N1525 G1 X110.50 Y97.57 A22.21268\n\
N1526 G1 X110.50 Y97.59 A22.21280\n\
N1527 G1 X110.50 Y97.96 A22.21573\n\
N1528 G1 X110.50 Y98.00 A22.21607\n\
N1529 G1 X110.50 Y98.75 A22.22195\n\
N1530 G1 X110.50 Y98.83 A22.22251\n\
N1531 G1 X110.50 Y99.59 A22.22851\n\
N1532 G1 X110.50 Y99.64 A22.22886\n\
N1533 G1 X110.50 Y100.41 A22.23490\n\
N1534 G1 X110.50 Y100.45 A22.23524\n\
N1535 G1 X110.50 Y101.22 A22.24129\n\
N1536 G1 X110.50 Y101.27 A22.24163\n\
N1537 G1 X110.50 Y102.04 A22.24768\n\
N1538 G1 X110.50 Y102.08 A22.24803\n\
N1539 G1 X110.50 Y102.85 A22.25406\n\
N1540 G1 X110.50 Y102.90 A22.25441\n\
N1541 G1 X110.50 Y103.67 A22.26046\n\
N1542 G1 X110.50 Y103.71 A22.26080\n\
N1543 G1 X110.50 Y104.48 A22.26685\n\
N1544 G1 X110.50 Y104.53 A22.26719\n\
N1545 G1 X110.50 Y105.30 A22.27323\n\
N1546 G1 X110.50 Y105.34 A22.27358\n\
N1547 G1 X110.50 Y106.13 A22.27975\n\
N1548 G1 X110.50 Y106.23 A22.28052\n\
N1549 G1 X110.50 Y107.36 A22.28936";
#else
const char test_99[] PROGMEM = "\
N0 G92 X110.50 Y96.32 A22.21268\n\
N1 F2520\n\
N1525 G1 X110.50 Y97.57 A22.21268\n\
N1549 G1 X110.50 Y107.36 A22.28936";
#endif

*/
/*
N0 T1M6\n\
N1 G17\n\
N2 G0Z5.000\n\
N3 G0X0.000Y0.000\n\
N4 (S12000M3)\n\
N5 G92 X74.888 Y0.000 Z5.000\n\
N6 G1Z-2.391F100.0\n\
*/

/*
// back and forth in Z
const char test_99[] PROGMEM = "\
N6 G92 X75 Y0 Z0\n\
N7 F500.0\n\
N8 G1Y0.291Z-2.198\n\
N9 X74.767Y0.058Z-2.355\n\
N10 X74.709Y-0.000Z-2.371\n\
N11 X74.529Z-2.264\n\
N12 X74.634Y0.105Z-2.319\n\
N13 X74.843Y0.314Z-2.183\n\
N14 X75.000Y0.471Z-2.126\n\
N15 Y0.650Z-2.100\n\
N16 X74.783Y0.434Z-2.131\n\
N17 X74.566Y0.217Z-2.244\n\
N18 X74.350Y-0.000Z-2.182\n\
N19 X74.170Z-2.144\n\
N20 X74.429Y0.259Z-2.165\n\
N21 X74.533Y0.363Z-2.191\n\
N22 X74.689Y0.519Z-2.114\n\
N23 X74.844Y0.674Z-2.096\n\
N24 X75.000Y0.830Z-2.114\n\
N25 Y1.010Z-2.144\n\
N26 X74.787Y0.797Z-2.098\n\
N27 X74.628Y0.638Z-2.108\n\
N28 X74.469Y0.478Z-2.157\n\
N29 X74.309Y0.319Z-2.110\n\
N30 X74.044Y0.053Z-2.108\n\
N31 X73.990Y0.000Z-2.077\n\
N32 X73.811Z-1.947\n\
N33 X73.973Y0.162Z-2.079\n\
N34 X74.243Y0.432Z-2.084\n\
N35 X74.459Y0.649Z-2.157\n\
N36 X74.676Y0.865Z-2.109\n\
N37 X74.838Y1.027Z-2.111\n\
N38 X75.000Y1.189Z-2.160\n\
N39 Y1.369Z-2.194\n\
N40 X74.842Y1.211Z-2.134\n\
N41 X74.684Y1.053Z-2.120\n\
N42 X74.421Y0.790Z-2.176\n\
N43 X74.316Y0.684Z-2.137\n\
N44 X74.158Y0.526Z-2.077\n\
N45 X73.947Y0.316Z-2.067\n\
N46 X73.894Y0.263Z-2.046\n\
N47 X73.737Y0.105Z-1.918\n\
N48 X73.631Y0.000Z-1.872\n\
N49 X73.452Z-1.815\n\
N50 X73.665Y0.214Z-1.914\n\
N51 X73.825Y0.374Z-2.028\n\
N52 X73.879Y0.427Z-2.076\n\
N53 X74.092Y0.641Z-2.094\n\
N54 X74.306Y0.854Z-2.192\n\
N55 X74.519Y1.068Z-2.141\n\
N56 X74.733Y1.281Z-2.143\n\
N57 X74.840Y1.388Z-2.174\n\
N58 X74.893Y1.442Z-2.169\n\
N59 X75.000Y1.548Z-2.121\n\
N60 Y1.728Z-2.076\n\
N61 X74.843Y1.571Z-2.130\n\
N62 X74.738Y1.466Z-2.195\n\
N63 X74.476Y1.204Z-2.147\n\
N64 X74.215Y0.943Z-2.202\n\
N65 X73.900Y0.628Z-2.101\n\
N66 X73.848Y0.576Z-2.096\n\
N67 X73.586Y0.314Z-1.913\n\
N68 X73.377Y0.105Z-1.808\n\
N69 X73.272Y0.000Z-1.787\n\
N70 X73.182Z-1.787\n\
N71 X73.092Z-1.750\n\
N72 X73.410Y0.318Z-1.868\n\
N73 X73.781Y0.689Z-2.086\n\
N74 X74.099Y1.007Z-2.224\n\
N75 X74.205Y1.113Z-2.211\n\
N76 X74.364Y1.272Z-2.176\n\
N77 X74.629Y1.537Z-2.191\n\
N78 X74.682Y1.590Z-2.177\n\
N79 X74.894Y1.802Z-2.066\n\
N80 X75.000Y1.908Z-2.046\n\
N81 Y2.087Z-2.051\n\
N82 X74.839Y1.927Z-2.062\n\
N83 X74.679Y1.766Z-2.136\n\
N84 X74.625Y1.713Z-2.170\n\
N85 X74.572Y1.659Z-2.180\n\
N86 X74.358Y1.445Z-2.157\n\
N87 X74.197Y1.284Z-2.195\n\
N88 X74.090Y1.177Z-2.245\n\
N89 X73.983Y1.070Z-2.225\n\
N90 X73.823Y0.910Z-2.138\n\
N91 X73.394Y0.482Z-1.917\n\
N92 X73.180Y0.268Z-1.825\n\
N93 X72.966Y0.054Z-1.711\n\
N94 X72.913Y-0.000Z-1.693\n\
N95 X72.733Z-1.646\n\
N96 X72.997Y0.264Z-1.753\n\
N97 X73.260Y0.527Z-1.902\n\
N98 X73.629Y0.896Z-2.077\n\
N99 X73.840Y1.107Z-2.224\n\
N100 X73.893Y1.160Z-2.245\n\
N101 X75Y0Z0\n";

*/

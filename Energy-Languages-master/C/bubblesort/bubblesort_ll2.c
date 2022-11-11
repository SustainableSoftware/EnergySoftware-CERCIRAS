// C program to sort Linked List
// using Bubble Sort
// by swapping nodes

#include <stdio.h>
#include <stdlib.h>

/* structure for a node */
struct Node {
	int data;
	struct Node* next;
} Node;

/*Function to swap the nodes */
struct Node* swap(struct Node* ptr1, struct Node* ptr2)
{
	struct Node* tmp = ptr2->next;
	ptr2->next = ptr1;
	ptr1->next = tmp;
	return ptr2;
}

/* Function to sort the list */
void bubbleSort(struct Node** head, int count)
{
	struct Node** h;
	int i, j, swapped;

	for (i = 0; i <= count; i++) {

		h = head;
		swapped = 0;

		for (j = 0; j < count - i - 1; j++) {

			struct Node* p1 = *h;
			struct Node* p2 = p1->next;

			if (p1->data > p2->data) {

				/* update the link after swapping */
				*h = swap(p1, p2);
				swapped = 1;
			}

			h = &(*h)->next;
		}

		/* break if the loop ended without any swap */
		if (swapped == 0)
			break;
	}
}

/* Function to print the list */
void printList(struct Node* n)
{
	while (n != NULL) {
		printf("%d -> ", n->data);
		n = n->next;
	}
	printf("\n");
}

/* Function to insert a struct Node
at the beginning of a linked list */
void insertAtTheBegin(struct Node** start_ref, int data)
{
	struct Node* ptr1
		= (struct Node*)malloc(sizeof(struct Node));

	ptr1->data = data;
	ptr1->next = *start_ref;
	*start_ref = ptr1;
}

// Driver Code
int main()
{
	int arr[] = {571, 1752, 1126, 1085, 926, 554, 1331, 768, 337, 1343, 703, 434, 167, 109, 91, 711, 386, 327, 1151, 1421, 127, 1262, 1801, 369, 1560, 797, 409, 1704, 1372, 113, 344, 1069, 1406, 293, 1469, 556, 1137, 1854, 1556, 1130, 80, 59, 1922, 1705, 320, 1330, 1060, 979, 205, 1725, 1954, 708, 255, 1947, 869, 1226, 611, 1865, 695, 1508, 601, 1024, 411, 330, 1290, 1739, 1364, 1047, 997, 1424, 1628, 741, 814, 441, 1315, 1265, 1231, 574, 357, 1112, 718, 1814, 1828, 1571, 736, 44, 1821, 1700, 1111, 582, 205, 1329, 1130, 484, 291, 885, 88, 777, 1040, 212, 1169, 1652, 1348, 624, 1943, 1183, 851, 1680, 1370, 755, 861, 1283, 241, 304, 1220, 594, 1583, 120, 314, 1293, 1409, 340, 1413, 1461, 855, 1690, 1821, 1276, 1785, 1368, 1992, 1093, 580, 572, 1100, 1544, 951, 955, 1525, 1920, 679, 1048, 1881, 1093, 1708, 231, 343, 1524, 1052, 1537, 775, 1917, 1159, 1249, 1539, 1999, 546, 322, 383, 283, 1477, 1009, 1970, 1349, 426, 155, 1703, 1578, 926, 1605, 405, 863, 613, 538, 67, 1552, 909, 1298, 225, 590, 1037, 1214, 923, 586, 1405, 1655, 67, 1034, 1571, 1514, 131, 572, 765, 70, 738, 895, 1673, 781, 846, 1283, 476, 1773, 207, 314, 1636, 1922, 1891, 1984, 1916, 205, 1957, 115, 1401, 674, 1584, 1158, 272, 480, 1345, 39, 621, 608, 1053, 273, 1309, 1843, 251, 1800, 1706, 1603, 2000, 1681, 1082, 1343, 1905, 1984, 813, 1461, 1680, 1349, 146, 1401, 1000, 563, 1993, 898, 1799, 653, 1621, 1996, 1922, 1304, 1859, 191, 1210, 1198, 162, 191, 1216, 1330, 1945, 42, 1921, 1660, 1682, 609, 510, 1724, 1341, 516, 1487, 327, 413, 1518, 895, 651, 1366, 608, 20, 21, 837, 91, 1622, 1955, 1803, 1099, 742, 673, 406, 1705, 879, 807, 945, 1288, 867, 1965, 1995, 1525, 1195, 1199, 1178, 1345, 1729, 894, 1975, 1877, 456, 1873, 1691, 1870, 1483, 1447, 220, 996, 1198, 611, 1032, 517, 1306, 1500, 1570, 159, 691, 999, 477, 1029, 1840, 214, 1942, 1642, 1248, 1571, 1301, 669, 479, 388, 147, 745, 1460, 1019, 426, 645, 725, 1035, 430, 881, 1532, 1219, 564, 1769, 561, 1570, 1627, 1803, 226, 1341, 642, 76, 443, 1552, 21, 1503, 1856, 469, 749, 1670, 1539, 1875, 1609, 807, 1900, 294, 1593, 491, 1056, 427, 1997, 1706, 777, 937, 953, 1971, 536, 492, 825, 149, 1102, 1451, 1308, 301, 406, 282, 1709, 803, 1076, 1484, 657, 345, 494, 586, 526, 725, 432, 261, 1938, 370, 1410, 377, 1009, 1862, 131, 257, 1205, 508, 1910, 443, 398, 1366, 631, 164, 376, 496, 1068, 1178, 1298, 1341, 1695, 1983, 41, 1522, 1705, 1754, 120, 933, 226, 1046, 1327, 645, 1668, 1037, 945, 1279, 763, 845, 1298, 454, 75, 1810, 1957, 1305, 563, 1928, 1571, 1530, 240, 416, 1983, 220, 1557, 1709, 365, 1871, 1732, 694, 489, 749, 1053, 195, 377, 1466, 1435, 769, 848, 1677, 1418, 1177, 313, 1973, 1361, 1881, 143, 1089, 1105, 254, 1787, 947, 1053, 694, 817, 1451, 115, 1608, 88, 1454, 549, 199, 1505, 1667, 914, 1913, 274, 1207, 997, 570, 607, 217, 1188, 317, 298, 190, 1978, 1212, 601, 701, 1114, 1094, 1310, 1438, 982, 1724, 403, 1087, 75, 1874, 351, 441, 1153, 258, 810, 955, 233, 663, 613, 1995, 1789, 1544, 511, 419, 208, 641, 755, 1758, 1185, 1376, 67, 736, 13, 363, 1168, 253, 1235, 871, 1583, 1159, 894, 855, 983, 1617, 1446, 1842, 1238, 681, 182, 320, 621, 1837, 821, 825, 750, 1904, 827, 1230, 1889, 1552, 655, 1673, 1643, 935, 1591, 839, 114, 1235, 56, 1476, 762, 1720, 213, 280, 1524, 1754, 1029, 1509, 1790, 695, 1569, 1752, 641, 162, 1845, 736, 676, 96, 1439, 1966, 542, 94, 1382, 1170, 968, 28, 1029, 1723, 240, 1912, 1039, 1425, 1360, 1331, 1667, 1885, 1365, 1078, 1871, 1628, 1552, 139, 123, 387, 297, 1032, 926, 1642, 696, 643, 766, 743, 837, 1922, 1220, 216, 1416, 1925, 270, 775, 1775, 136, 1663, 1321, 1645, 498, 1263, 1869, 1330, 1213, 1450, 336, 1426, 1590, 431, 821, 1485, 1994, 1270, 471, 1624, 1392, 1364, 1431, 1746, 1640, 1424, 875, 157, 1624, 397, 76, 478, 317, 638, 835, 209, 1552, 1761, 323, 745, 618, 1592, 1156, 1949, 1066, 1157, 1835, 996, 268, 1780, 1521, 815, 559, 1442, 1736, 264, 642, 1500, 771, 1264, 1052, 1754, 87, 551, 1790, 1767, 1904, 47, 352, 395, 296, 771, 589, 0, 559, 480, 827, 39, 1620, 826, 908, 900, 1679, 1947, 1112, 1394, 66, 1011, 264, 1319, 917, 716, 1546, 16, 181, 1681, 1428, 735, 620, 606, 422, 938, 546, 678, 701, 1112, 1760, 1707, 1877, 402, 1028, 770, 355, 1475, 116, 1956, 53, 764, 1199, 670, 306, 81, 895, 600, 851, 1339, 809, 1117, 1770, 1071, 818, 1998, 1166, 934, 898, 1364, 1235, 106, 1285, 623, 171, 1747, 70, 713, 448, 1785, 1816, 742, 1061, 518, 663, 1746, 1087, 1651, 1067, 1206, 375, 270, 437, 1942, 75, 1049, 56, 1191, 1200, 1462, 347, 1047, 1199, 676, 1967, 614, 483, 1165, 1047, 982, 491, 1268, 1529, 493, 1040, 173, 474, 973, 59, 34, 800, 120, 188, 1762, 919, 1587, 1768, 385, 1830, 936, 1422, 725, 244, 1602, 318, 232, 369, 780, 473, 563, 167, 1454, 1128, 216, 770, 1373, 1625, 597, 1718, 1660, 1707, 1331, 268, 1777, 1719, 1763, 1076, 1379, 102, 223, 808, 183, 1528, 1713, 417, 1124, 338, 474, 825, 1691, 1391, 237, 1431, 1577, 1023, 151, 1396, 98, 277, 1595, 937, 535, 51, 172, 113, 576, 114, 1568, 594, 785, 399, 730, 1857, 1804, 368, 615, 867, 1963, 1978, 1150, 551, 503, 1027, 1429, 1120, 416, 1434, 947, 846, 1588, 107, 261, 1831, 901, 1246, 757, 1912, 274, 679, 1681, 1335, 1916, 253, 1572, 1610, 1606, 312, 847, 1136, 537, 1360, 33, 1976, 46, 656, 1488, 610, 973, 885, 197, 1346, 1681, 1361, 721, 1661, 1790, 816, 139, 1568, 1382, 1576, 84, 77, 1626, 408, 633, 997, 1738, 516, 1092, 554, 556, 242, 104, 1864, 479, 757, 1212, 367, 1058, 1277, 1693, 714, 578, 1848, 1006, 1708, 378, 274, 1865, 1401, 702, 1653, 393, 1608, 167, 1091, 750, 923};
	int list_size, i;

	/* start with empty linked list */
	struct Node* start = NULL;
	list_size = sizeof(arr) / sizeof(arr[0]);

	/* Create linked list from the array arr[] */
	for (i = 0; i < list_size; i++)
		insertAtTheBegin(&start, arr[i]);

	/* print list before sorting */
//	printf("Linked list before sorting\n");
//	printList(start);

	/* sort the linked list */
	bubbleSort(&start, list_size);

	/* print list after sorting */
//	printf("Linked list after sorting\n");
	printList(start);

	return 0;
}

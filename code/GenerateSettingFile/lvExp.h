#include <QtCore/QtCore>

const qint32 maxLv = 1000;

quint64 expNeed[maxLv] = {
	30, 50, 100, 150, 200, 300, 500, 1140, 1950, 2950,
	4160, 5600, 7290, 9250, 11500, 14060, 16950, 20190, 23800, 39800,
	57440, 76800, 97960, 121000, 146000, 173040, 202200, 233560, 267200, 303200,
	341640, 382600, 426160, 472400, 521400, 573240, 628000, 685760, 746600, 810600,
	877840, 948400, 1022360, 1099800, 1180800, 1265440, 1353800, 1445960, 1542000, 1642000,
	1746040, 1854200, 1966560, 2083200, 2204200, 2329640, 2459600, 2594160, 2733400, 2877400,
	3026240, 3180000, 3338760, 3502600, 3671600, 3845840, 4025400, 4210360, 4400800, 4596800,
	4798440, 5005800, 5218960, 5438000, 5663000, 5894040, 6131200, 6374560, 6624200, 6880200,
	7142640, 7411600, 7687160, 7969400, 8258400, 8554240, 8857000, 9166760, 9483600, 9807600,
	10138840, 10477400, 10823360, 11176800, 11537800, 11906440, 12282800, 12666960, 13059000, 13459000,
	13867040, 14283200, 14707560, 15140200, 15581200, 16030640, 16488600, 16955160, 17430400, 17914400,
	18407240, 18909000, 19419760, 19939600, 20468600, 21006840, 21554400, 22111360, 22677800, 23253800,
	23839440, 24434800, 25039960, 25655000, 26280000, 26915040, 27560200, 28215560, 28881200, 29557200,
	30243640, 30940600, 31648160, 32366400, 33095400, 33835240, 34586000, 35347760, 36120600, 36904600,
	37699840, 38506400, 39324360, 40153800, 40994800, 41847440, 42711800, 43587960, 44476000, 45376000,
	46288040, 47212200, 48148560, 49097200, 50058200, 51031640, 52017600, 53016160, 54027400, 55051400,
	56088240, 57138000, 58200760, 59276600, 60365600, 61467840, 62583400, 63712360, 64854800, 66010800,
	67180440, 68363800, 69560960, 70772000, 71997000, 73236040, 74489200, 75756560, 77038200, 78334200,
	79644640, 80969600, 82309160, 83663400, 85032400, 86416240, 87815000, 89228760, 90657600, 92101600,
	93560840, 95035400, 96525360, 98030800, 99551800, 101088440, 102640800, 104208960, 105793000, 107393000,
	109009040, 110641200, 112289560, 113954200, 115635200, 117332640, 119046600, 120777160, 122524400, 124288400,
	126069240, 127867000, 129681760, 131513600, 133362600, 135228840, 137112400, 139013360, 140931800, 142867800,
	144821440, 146792800, 148781960, 150789000, 152814000, 154857040, 156918200, 158997560, 161095200, 163211200,
	165345640, 167498600, 169670160, 171860400, 174069400, 176297240, 178544000, 180809760, 183094600, 185398600,
	187721840, 190064400, 192426360, 194807800, 197208800, 199629440, 202069800, 204529960, 207010000, 209510000,
	212030040, 214570200, 217130560, 219711200, 222312200, 224933640, 227575600, 230238160, 232921400, 235625400,
	238350240, 241096000, 243862760, 246650600, 249459600, 252289840, 255141400, 258014360, 260908800, 263824800,
	266762440, 269721800, 272702960, 275706000, 278731000, 281778040, 284847200, 287938560, 291052200, 294188200,
	297346640, 300527600, 303731160, 306957400, 310206400, 313478240, 316773000, 320090760, 323431600, 326795600,
	330182840, 333593400, 337027360, 340484800, 343965800, 347470440, 350998800, 354550960, 358127000, 361727000,
	365351040, 368999200, 372671560, 376368200, 380089200, 383834640, 387604600, 391399160, 395218400, 399062400,
	402931240, 406825000, 410743760, 414687600, 418656600, 422650840, 426670400, 430715360, 434785800, 438881800,
	443003440, 447150800, 451323960, 455523000, 459748000, 463999040, 468276200, 472579560, 476909200, 481265200,
	485647640, 490056600, 494492160, 498954400, 503443400, 507959240, 512502000, 517071760, 521668600, 526292600,
	530943840, 535622400, 540328360, 545061800, 549822800, 554611440, 559427800, 564271960, 569144000, 574044000,
	578972040, 583928200, 588912560, 593925200, 598966200, 604035640, 609133600, 614260160, 619415400, 624599400,
	629812240, 635054000, 640324760, 645624600, 650953600, 656311840, 661699400, 667116360, 672562800, 678038800,
	683544440, 689079800, 694644960, 700240000, 705865000, 711520040, 717205200, 722920560, 728666200, 734442200,
	740248640, 746085600, 751953160, 757851400, 763780400, 769740240, 775731000, 781752760, 787805600, 793889600,
	800004840, 806151400, 812329360, 818538800, 824779800, 831052440, 837356800, 843692960, 850061000, 856461000,
	862893040, 869357200, 875853560, 882382200, 888943200, 895536640, 902162600, 908821160, 915512400, 922236400,
	928993240, 935783000, 942605760, 949461600, 956350600, 963272840, 970228400, 977217360, 984239800, 991295800,
	998385440, 1005508800, 1012665960, 1019857000, 1027082000, 1034341040, 1041634200, 1048961560, 1056323200, 1063719200,
	1071149640, 1078614600, 1086114160, 1093648400, 1101217400, 1108821240, 1116460000, 1124133760, 1131842600, 1139586600,
	1147365840, 1155180400, 1163030360, 1170915800, 1178836800, 1186793440, 1194785800, 1202813960, 1210878000, 1218978000,
	1227114040, 1235286200, 1243494560, 1251739200, 1260020200, 1268337640, 1276691600, 1285082160, 1293509400, 1301973400,
	1310474240, 1319012000, 1327586760, 1336198600, 1344847600, 1353533840, 1362257400, 1371018360, 1379816800, 1388652800,
	1397526440, 1406437800, 1415386960, 1424374000, 1433399000, 1442462040, 1451563200, 1460702560, 1469880200, 1479096200,
	1488350640, 1497643600, 1506975160, 1516345400, 1525754400, 1535202240, 1544689000, 1554214760, 1563779600, 1573383600,
	1583026840, 1592709400, 1602431360, 1612192800, 1621993800, 1631834440, 1641714800, 1651634960, 1661595000, 1671595000,
	1681635040, 1691715200, 1701835560, 1711996200, 1722197200, 1732438640, 1742720600, 1753043160, 1763406400, 1773810400,
	1784255240, 1794741000, 1805267760, 1815835600, 1826444600, 1837094840, 1847786400, 1858519360, 1869293800, 1880109800,
	1890967440, 1901866800, 1912807960, 1923791000, 1934816000, 1945883040, 1956992200, 1968143560, 1979337200, 1990573200,
	2001851640, 2013172600, 2024536160, 2035942400, 2047391400, 2058883240, 2070418000, 2081995760, 2093616600, 2105280600,
	2116987840, 2128738400, 2140532360, 2152369800, 2164250800, 2176175440, 2188143800, 2200155960, 2212212000, 2224312000,
	2236456040, 2248644200, 2260876560, 2273153200, 2285474200, 2297839640, 2310249600, 2322704160, 2335203400, 2347747400,
	2360336240, 2372970000, 2385648760, 2398372600, 2411141600, 2423955840, 2436815400, 2449720360, 2462670800, 2475666800,
	2488708440, 2501795800, 2514928960, 2528108000, 2541333000, 2554604040, 2567921200, 2581284560, 2594694200, 2608150200,
	2621652640, 2635201600, 2648797160, 2662439400, 2676128400, 2689864240, 2703647000, 2717476760, 2731353600, 2745277600,
	2759248840, 2773267400, 2787333360, 2801446800, 2815607800, 2829816440, 2844072800, 2858376960, 2872729000, 2887129000,
	2901577040, 2916073200, 2930617560, 2945210200, 2959851200, 2974540640, 2989278600, 3004065160, 3018900400, 3033784400,
	3048717240, 3063699000, 3078729760, 3093809600, 3108938600, 3124116840, 3139344400, 3154621360, 3169947800, 3185323800,
	3200749440, 3216224800, 3231749960, 3247325000, 3262950000, 3278625040, 3294350200, 3310125560, 3325951200, 3341827200,
	3357753640, 3373730600, 3389758160, 3405836400, 3421965400, 3438145240, 3454376000, 3470657760, 3486990600, 3503374600,
	3519809840, 3536296400, 3552834360, 3569423800, 3586064800, 3602757440, 3619501800, 3636297960, 3653146000, 3670046000,
	3686998040, 3704002200, 3721058560, 3738167200, 3755328200, 3772541640, 3789807600, 3807126160, 3824497400, 3841921400,
	3859398240, 3876928000, 3894510760, 3912146600, 3929835600, 3947577840, 3965373400, 3983222360, 4001124800, 4019080800,
	4037090440, 4055153800, 4073270960, 4091442000, 4109667000, 4127946040, 4146279200, 4164666560, 4183108200, 4201604200,
	4220154640, 4238759600, 4257419160, 4276133400, 4294902400, 4313726240, 4332605000, 4351538760, 4370527600, 4389571600,
	4408670840, 4427825400, 4447035360, 4466300800, 4485621800, 4504998440, 4524430800, 4543918960, 4563463000, 4583063000,
	4602719040, 4622431200, 4642199560, 4662024200, 4681905200, 4701842640, 4721836600, 4741887160, 4761994400, 4782158400,
	4802379240, 4822657000, 4842991760, 4863383600, 4883832600, 4904338840, 4924902400, 4945523360, 4966201800, 4986937800,
	5007731440, 5028582800, 5049491960, 5070459000, 5091484000, 5112567040, 5133708200, 5154907560, 5176165200, 5197481200,
	5218855640, 5240288600, 5261780160, 5283330400, 5304939400, 5326607240, 5348334000, 5370119760, 5391964600, 5413868600,
	5435831840, 5457854400, 5479936360, 5502077800, 5524278800, 5546539440, 5568859800, 5591239960, 5613680000, 5636180000,
	5658740040, 5681360200, 5704040560, 5726781200, 5749582200, 5772443640, 5795365600, 5818348160, 5841391400, 5864495400,
	5887660240, 5910886000, 5934172760, 5957520600, 5980929600, 6004399840, 6027931400, 6051524360, 6075178800, 6098894800,
	6122672440, 6146511800, 6170412960, 6194376000, 6218401000, 6242488040, 6266637200, 6290848560, 6315122200, 6339458200,
	6363856640, 6388317600, 6412841160, 6437427400, 6462076400, 6486788240, 6511563000, 6536400760, 6561301600, 6586265600,
	6611292840, 6636383400, 6661537360, 6686754800, 6712035800, 6737380440, 6762788800, 6788260960, 6813797000, 6839397000,
	6865061040, 6890789200, 6916581560, 6942438200, 6968359200, 6994344640, 7020394600, 7046509160, 7072688400, 7098932400,
	7125241240, 7151615000, 7178053760, 7204557600, 7231126600, 7257760840, 7284460400, 7311225360, 7338055800, 7364951800,
	7391913440, 7418940800, 7446033960, 7473193000, 7500418000, 7527709040, 7555066200, 7582489560, 7609979200, 7637535200,
	7665157640, 7692846600, 7720602160, 7748424400, 7776313400, 7804269240, 7832292000, 7860381760, 7888538600, 7916762600,
	7945053840, 7973412400, 8001838360, 8030331800, 8058892800, 8087521440, 8116217800, 8144981960, 8173814000, 8202714000,
	8231682040, 8260718200, 8289822560, 8318995200, 8348236200, 8377545640, 8406923600, 8436370160, 8465885400, 8495469400,
	8525122240, 8554844000, 8584634760, 8614494600, 8644423600, 8674421840, 8704489400, 8734626360, 8764832800, 8795108800,
	8825454440, 8855869800, 8886354960, 8916910000, 8947535000, 8978230040, 9008995200, 9039830560, 9070736200, 9101712200,
	9132758640, 9163875600, 9195063160, 9226321400, 9257650400, 9289050240, 9320521000, 9352062760, 9383675600, 9415359600,
	9447114840, 9478941400, 9510839360, 9542808800, 9574849800, 9606962440, 9639146800, 9671402960, 9703731000, 9736131000,
	9768603040, 9801147200, 9833763560, 9866452200, 9899213200, 9932046640, 9964952600, 9997931160, 10030982400, 10064106400,
	10097303240, 10130573000, 10163915760, 10197331600, 10230820600, 10264382840, 10298018400, 10331727360, 10365509800, 10399365800,
	10433295440, 10467298800, 10501375960, 10535527000, 10569752000, 10604051040, 10638424200, 10672871560, 10707393200, 10741989200,
	10776659640, 10811404600, 10846224160, 10881118400, 10916087400, 10951131240, 10986250000, 11021443760, 11056712600, 11092056600,
	11127475840, 11162970400, 11198540360, 11234185800, 11269906800, 11305703440, 11341575800, 11377523960, 11413548000, 11449648000,
	11485824040, 11522076200, 11558404560, 11594809200, 11631290200, 11667847640, 11704481600, 11741192160, 11777979400, 11814843400,
	11851784240, 11888802000, 11925896760, 11963068600, 12000317600, 12037643840, 12075047400, 12112528360, 12150086800, 12187722800,
	12225436440, 12263227800, 12301096960, 12339044000, 12377069000, 12415172040, 12453353200, 12491612560, 12529950200, 12568366200,
	12606860640, 12645433600, 12684085160, 12722815400, 12761624400, 12800512240, 12839479000, 12878524760, 12917649600, 12956853600,
	12996136840, 13035499400, 13074941360, 13114462800, 13154063800, 13193744440, 13233504800, 13273344960, 13313265000, 13353265000
};
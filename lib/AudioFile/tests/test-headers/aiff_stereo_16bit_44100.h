#include <vector>

namespace aiff_stereo_16bit_44100 { 

int numSamplesPerChannel = 352800;
int bitDepth = 16;
uint32_t sampleRate = 44100;
int numChannels = 2;

std::vector<std::vector<double>> testBuffer = {{-0.009429931640625, -0.030426025390625, -0.035186767578125, 0.17071533203125, -0.01959228515625, -0.11553955078125, 0.06549072265625, 0.014617919921875, -0.01251220703125, -0.038818359375, -0.051116943359375, 0.055755615234375, 0.052215576171875, 0.010406494140625, -0.0538330078125, -0.038848876953125, 0.059295654296875, -0.002655029296875, -0.004608154296875, 0.062774658203125, 0.03363037109375, 0.040863037109375, -0.00921630859375, -0.055572509765625, -0.015533447265625, -0.070648193359375, -0.0711669921875, 0.0555419921875, 0.142486572265625, 0.044586181640625, -0.14093017578125, -0.04248046875, 0.116851806640625, 0.03070068359375, -0.069549560546875, -0.035400390625, 0.1212158203125, 0.07855224609375, -0.1387939453125, 0.037109375, 0.1822509765625, -0.1285400390625, -0.071685791015625, 0.22222900390625, -0.020782470703125, -0.175018310546875, 0.080718994140625, 0.116790771484375, -0.033233642578125, -0.00732421875, 0.068206787109375, -0.014404296875, -0.016632080078125, 0.1287841796875, 0.06170654296875, -0.033599853515625, 0.129180908203125, 0.152374267578125, -0.0736083984375, -0.08221435546875, 0.12152099609375, 0.10015869140625, -0.069122314453125, 0.015380859375, 0.158447265625, 0.025604248046875, -0.029754638671875, 0.1312255859375, 0.060211181640625, -0.105621337890625, 0.050079345703125, 0.21539306640625, 0.049591064453125, -0.066802978515625, 0.0919189453125, 0.013458251953125, -0.132843017578125, 0.152252197265625, 0.18670654296875, -0.079315185546875, 0.025909423828125, 0.1351318359375, -0.00177001953125, -0.04156494140625, 0.041412353515625, -0.02325439453125, -0.10821533203125, 0.065704345703125, 0.08941650390625, -0.067901611328125, -0.03741455078125, 0.01251220703125, 0.080474853515625, 0.03302001953125, -0.148468017578125, -0.019134521484375, 0.065338134765625, -0.136505126953125, -0.06561279296875, 0.09429931640625, -0.020660400390625, -0.0557861328125, -0.045623779296875, -0.090576171875, -0.060943603515625, -0.0792236328125, -0.01702880859375, -0.002716064453125, -0.141143798828125, -0.10955810546875, -0.034332275390625, -0.023284912109375, -0.035552978515625, -0.10833740234375, -0.103363037109375, -0.03570556640625, -0.0582275390625, -0.14263916015625, -0.167572021484375, -0.079315185546875, -0.044677734375, -0.1461181640625, -0.1444091796875, -0.075531005859375, -0.081146240234375, -0.104156494140625, -0.126373291015625, -0.11944580078125, -0.158905029296875, -0.167388916015625, -0.1009521484375, -0.134307861328125, -0.15655517578125, -0.098114013671875, -0.1104736328125, -0.15087890625, -0.125732421875, -0.140380859375, -0.166748046875, -0.076690673828125, -0.044403076171875, -0.152130126953125, -0.1761474609375, -0.0623779296875, -0.009002685546875, -0.083526611328125, -0.1474609375, -0.13336181640625, -0.087432861328125, -0.09112548828125, -0.1595458984375, -0.11383056640625, 0.0025634765625, -0.108612060546875, -0.176055908203125, -0.017364501953125, -0.05621337890625, -0.171630859375, -0.048736572265625, 0.077789306640625, -0.01885986328125, -0.144775390625, -0.062713623046875, -0.01025390625, -0.075836181640625, -0.057830810546875, -0.00714111328125, 0.016387939453125, -0.017364501953125, -0.015411376953125, 0.061767578125, 0.011260986328125, -0.0439453125, 0.026641845703125, 0.056884765625, 0.02276611328125, 0.0557861328125, 0.09747314453125, 0.022064208984375, -0.023834228515625, 0.037872314453125, 0.1395263671875, 0.0946044921875, -0.033355712890625, 0.10833740234375, 0.190093994140625, 0.0584716796875, 0.059173583984375, 0.08880615234375, 0.0999755859375, 0.104644775390625, 0.066558837890625, 0.089996337890625, 0.126220703125, 0.13580322265625, 0.150634765625, 0.122833251953125, 0.072235107421875, 0.10394287109375, 0.136077880859375, 0.124969482421875, 0.144622802734375, 0.116241455078125, 0.114501953125, 0.1761474609375, 0.139617919921875, 0.098052978515625, 0.158355712890625, 0.14996337890625, 0.053192138671875, 0.090240478515625, 0.182586669921875, 0.175506591796875, 0.16473388671875, 0.122100830078125, 0.103729248046875, 0.1373291015625, 0.112823486328125, 0.12225341796875, 0.138885498046875, 0.150299072265625, 0.15008544921875, 0.096405029296875, 0.090911865234375, 0.01837158203125, -0.038330078125, 0.025909423828125, 0.001434326171875, -0.01409912109375, 0.0623779296875, 0.112518310546875, 0.1634521484375, 0.24664306640625, 0.253265380859375, 0.236114501953125, 0.298248291015625, 0.243194580078125, 0.172027587890625, 0.24615478515625, 0.216766357421875, 0.134552001953125, 0.121490478515625, 0.11419677734375, 0.08935546875, -0.007232666015625, -0.0238037109375, 0.013458251953125, -0.071044921875, -0.09210205078125, -0.051483154296875, -0.08331298828125, -0.127166748046875, -0.137054443359375, -0.077239990234375, -0.053558349609375, -0.08843994140625, -0.098236083984375, -0.14013671875, -0.12054443359375, -0.044769287109375, -0.11083984375, -0.152679443359375, -0.06036376953125, -0.060333251953125, -0.1005859375, -0.07586669921875, -0.02154541015625, 0.022705078125, -0.02044677734375, 0.00494384765625, 0.069183349609375, 0.079742431640625, 0.158416748046875, 0.142669677734375, 0.080841064453125, 0.1121826171875, 0.0828857421875, 0.0223388671875, 0.018951416015625, 0.056610107421875, 0.060394287109375, 0.02294921875, 0.000701904296875, -0.020172119140625, 0.01123046875, 0.031005859375, -0.038848876953125, -0.03265380859375, 0.012420654296875, -0.050567626953125, -0.099517822265625, -0.07818603515625, -0.1011962890625, -0.1331787109375, -0.130584716796875, -0.16241455078125, -0.175506591796875, -0.164947509765625, -0.161773681640625, -0.11907958984375, -0.11871337890625, -0.174957275390625, -0.1658935546875, -0.157562255859375, -0.223480224609375, -0.22882080078125, -0.17333984375, -0.190582275390625, -0.24285888671875, -0.215728759765625, -0.159027099609375, -0.172882080078125, -0.198516845703125, -0.1790771484375, -0.162689208984375, -0.188690185546875, -0.21173095703125, -0.2039794921875, -0.207122802734375, -0.184112548828125, -0.162811279296875, -0.19024658203125, -0.1748046875, -0.14013671875, -0.142974853515625, -0.149322509765625, -0.1236572265625, -0.096710205078125, -0.12646484375, -0.130645751953125, -0.077789306640625, -0.04254150390625, -0.060028076171875, -0.049163818359375, 0.04315185546875, 0.0528564453125, 0.01708984375, 0.069427490234375, 0.1015625, 0.10479736328125, 0.1112060546875, 0.106781005859375, 0.168792724609375, 0.215240478515625, 0.1641845703125, 0.156829833984375, 0.200408935546875, 0.196014404296875, 0.158477783203125, 0.147491455078125, 0.1724853515625, 0.17608642578125, 0.156982421875, 0.14520263671875, 0.14154052734375, 0.143707275390625, 0.128875732421875, 0.083282470703125, 0.0904541015625, 0.121429443359375, 0.060333251953125, 0.068634033203125, 0.142333984375, 0.122314453125, 0.13726806640625, 0.163848876953125, 0.15008544921875, 0.189056396484375, 0.202056884765625, 0.1939697265625, 0.219818115234375, 0.23236083984375, 0.224822998046875, 0.198516845703125, 0.188720703125, 0.17999267578125, 0.14501953125, 0.146270751953125, 0.16339111328125, 0.17364501953125, 0.180633544921875, 0.133514404296875, 0.111175537109375, 0.1343994140625, 0.082366943359375, 0.022735595703125, 0.025115966796875, 0.013641357421875, -0.01580810546875, -0.011444091796875, 0.024688720703125, 0.019287109375, -0.020111083984375, 0.0008544921875, 0.008087158203125, -0.01922607421875, -0.004669189453125, -0.00848388671875, -0.012908935546875, -0.00213623046875, -0.00225830078125, 0.0054931640625, -0.001495361328125, 0.012298583984375, 0.026397705078125, 0.01165771484375, 0.00335693359375, -0.002105712890625, 0.020843505859375, 0.02276611328125, -0.02996826171875, -0.027313232421875, -0.02850341796875, -0.09857177734375, -0.08453369140625, -0.043792724609375, -0.0887451171875, -0.09521484375, -0.076507568359375, -0.087890625, -0.094085693359375, -0.102294921875, -0.08465576171875, -0.071258544921875, -0.1043701171875, -0.097869873046875, -0.063446044921875, -0.063201904296875, -0.03558349609375, 0.001495361328125, 0.003631591796875, -0.000579833984375, -0.004791259765625, 0.000457763671875, -0.00103759765625, -0.043792724609375, -0.079864501953125, -0.08441162109375, -0.106689453125, -0.130645751953125, -0.136871337890625, -0.120819091796875, -0.10394287109375, -0.12506103515625, -0.10198974609375, -0.04742431640625, -0.03851318359375, -0.018798828125, 6.103515625e-05, -0.0032958984375, 0.023895263671875, 0.047271728515625, 0.018463134765625, -0.0032958984375, 0.022735595703125, 0.024200439453125, -0.00927734375, -0.014892578125, -0.024810791015625, -0.04498291015625, -0.0562744140625, -0.072113037109375, -0.073638916015625, -0.06494140625, -0.065460205078125, -0.0618896484375, -0.03472900390625, -0.012542724609375, -0.0146484375, -0.0078125, -0.01214599609375, -0.021453857421875, -0.010986328125, -0.011749267578125, -0.0126953125, -0.0233154296875, -0.040374755859375, -0.025238037109375, -0.002838134765625, -0.007720947265625, -0.022674560546875, -0.01568603515625, -0.012481689453125, -0.013275146484375, -0.0062255859375, -0.022705078125, -0.026885986328125, -0.023712158203125, -0.051971435546875, -0.048828125, -0.0289306640625, -0.0340576171875, -0.02191162109375, 0.003936767578125, 0.027923583984375, 0.021881103515625, -0.00665283203125, 0.016693115234375, 0.052764892578125, 0.034271240234375}, {-0.007781982421875, -0.02508544921875, -0.029052734375, 0.140869140625, -0.01611328125, -0.095458984375, 0.05401611328125, 0.011932373046875, -0.010223388671875, -0.031890869140625, -0.0419921875, 0.046112060546875, 0.04302978515625, 0.00836181640625, -0.044525146484375, -0.03228759765625, 0.048736572265625, -0.002410888671875, -0.004119873046875, 0.051666259765625, 0.0269775390625, 0.03399658203125, -0.008331298828125, -0.047271728515625, -0.011627197265625, -0.06134033203125, -0.063690185546875, 0.050567626953125, 0.115875244140625, 0.02581787109375, -0.11456298828125, -0.02630615234375, 0.096099853515625, 0.013671875, -0.071929931640625, -0.02972412109375, 0.117401123046875, 0.074859619140625, -0.143341064453125, -0.00653076171875, 0.169342041015625, -0.070709228515625, -0.08624267578125, 0.13677978515625, -0.010528564453125, -0.12677001953125, 0.04742431640625, 0.08538818359375, -0.015228271484375, 0.002410888671875, 0.0445556640625, -0.052581787109375, -0.034423828125, 0.1241455078125, 0.05096435546875, -0.07647705078125, 0.03424072265625, 0.094482421875, -0.033660888671875, -0.049407958984375, 0.078582763671875, 0.05535888671875, -0.0574951171875, 0.020355224609375, 0.100433349609375, -0.02215576171875, -0.03228759765625, 0.10845947265625, 0.03070068359375, -0.09619140625, 0.029327392578125, 0.1314697265625, 0.0103759765625, -0.052734375, 0.0662841796875, -0.00958251953125, -0.125244140625, 0.113067626953125, 0.150970458984375, -0.065399169921875, 0.011138916015625, 0.093963623046875, -0.018157958984375, -0.045501708984375, 0.036041259765625, -0.0130615234375, -0.096466064453125, 0.043609619140625, 0.073486328125, -0.057037353515625, -0.042388916015625, 0.003509521484375, 0.0645751953125, 0.02593994140625, -0.10821533203125, 0.001708984375, 0.066436767578125, -0.089385986328125, -0.026611328125, 0.091949462890625, -0.017486572265625, -0.05657958984375, -0.030548095703125, -0.031036376953125, -0.0108642578125, -0.0548095703125, -0.008148193359375, 0.019012451171875, -0.07684326171875, -0.05609130859375, -0.020751953125, -0.01458740234375, 0.005767822265625, -0.030181884765625, -0.057037353515625, -0.031707763671875, -0.00396728515625, -0.04803466796875, -0.10845947265625, -0.04644775390625, 0.016204833984375, -0.0521240234375, -0.080047607421875, -0.04339599609375, -0.0306396484375, -0.0360107421875, -0.0577392578125, -0.05877685546875, -0.0797119140625, -0.0787353515625, -0.0491943359375, -0.08892822265625, -0.082855224609375, -0.01922607421875, -0.055511474609375, -0.105194091796875, -0.05084228515625, -0.041015625, -0.0833740234375, -0.031768798828125, -3.0517578125e-05, -0.070098876953125, -0.10113525390625, -0.031951904296875, 0.022705078125, -0.010101318359375, -0.069854736328125, -0.10662841796875, -0.069244384765625, -0.0113525390625, -0.0545654296875, -0.062530517578125, 9.1552734375e-05, -0.06982421875, -0.106781005859375, -0.003692626953125, -0.030242919921875, -0.09442138671875, -0.01922607421875, 0.04986572265625, -0.0126953125, -0.092254638671875, -0.043212890625, -0.018310546875, -0.0484619140625, -0.005340576171875, 0.0389404296875, 0.034820556640625, -0.01239013671875, -0.011444091796875, 0.030059814453125, -0.015228271484375, -0.02685546875, 0.0303955078125, 0.035308837890625, -9.1552734375e-05, 0.02789306640625, 0.07049560546875, 0.003448486328125, -0.044647216796875, 0.00933837890625, 0.09552001953125, 0.065460205078125, -0.0450439453125, 0.057403564453125, 0.13531494140625, 0.024139404296875, 0.014404296875, 0.050933837890625, 0.055084228515625, 0.049957275390625, 0.024383544921875, 0.033477783203125, 0.051483154296875, 0.06805419921875, 0.09503173828125, 0.069183349609375, 0.0150146484375, 0.038299560546875, 0.059478759765625, 0.040802001953125, 0.063751220703125, 0.052001953125, 0.0469970703125, 0.091278076171875, 0.067962646484375, 0.046661376953125, 0.09881591796875, 0.074493408203125, -0.013519287109375, 0.033447265625, 0.101318359375, 0.076904296875, 0.064727783203125, 0.0325927734375, 0.03033447265625, 0.058807373046875, 0.036102294921875, 0.055633544921875, 0.07525634765625, 0.086578369140625, 0.086090087890625, 0.030487060546875, 0.001800537109375, -0.07098388671875, -0.09820556640625, -0.02899169921875, -0.053558349609375, -0.077789306640625, -0.018096923828125, 0.046783447265625, 0.120819091796875, 0.1968994140625, 0.192718505859375, 0.170928955078125, 0.228240966796875, 0.202850341796875, 0.143218994140625, 0.1767578125, 0.150665283203125, 0.103668212890625, 0.10107421875, 0.077880859375, 0.03509521484375, -0.03912353515625, -0.04345703125, -0.021881103515625, -0.09051513671875, -0.1024169921875, -0.07733154296875, -0.10015869140625, -0.126373291015625, -0.14178466796875, -0.10406494140625, -0.07568359375, -0.080963134765625, -0.076080322265625, -0.126373291015625, -0.124786376953125, -0.042022705078125, -0.078765869140625, -0.12628173828125, -0.0654296875, -0.062591552734375, -0.0731201171875, -0.033416748046875, -0.00018310546875, 0.02777099609375, 0.016571044921875, 0.060546875, 0.111297607421875, 0.112274169921875, 0.176422119140625, 0.176513671875, 0.13916015625, 0.160980224609375, 0.129608154296875, 0.0814208984375, 0.0892333984375, 0.114410400390625, 0.1002197265625, 0.07806396484375, 0.06915283203125, 0.03765869140625, 0.05810546875, 0.080780029296875, 0.01995849609375, 0.030548095703125, 0.08331298828125, 0.03369140625, -0.018096923828125, -0.008941650390625, -0.024444580078125, -0.059051513671875, -0.074554443359375, -0.10260009765625, -0.1148681640625, -0.093902587890625, -0.074920654296875, -0.0550537109375, -0.07427978515625, -0.11358642578125, -0.087493896484375, -0.081695556640625, -0.148345947265625, -0.160308837890625, -0.12030029296875, -0.132568359375, -0.172576904296875, -0.15130615234375, -0.100616455078125, -0.11102294921875, -0.128936767578125, -0.117645263671875, -0.117340087890625, -0.144439697265625, -0.17120361328125, -0.152923583984375, -0.14068603515625, -0.141448974609375, -0.12872314453125, -0.139892578125, -0.135467529296875, -0.108489990234375, -0.11370849609375, -0.13201904296875, -0.106842041015625, -0.0736083984375, -0.090179443359375, -0.085784912109375, -0.05206298828125, -0.045013427734375, -0.0595703125, -0.033111572265625, 0.05096435546875, 0.062774658203125, 0.028411865234375, 0.062896728515625, 0.08935546875, 0.096221923828125, 0.111419677734375, 0.10797119140625, 0.145233154296875, 0.184722900390625, 0.146026611328125, 0.132080078125, 0.174285888671875, 0.173431396484375, 0.130035400390625, 0.120269775390625, 0.139892578125, 0.13922119140625, 0.12957763671875, 0.109100341796875, 0.085662841796875, 0.093994140625, 0.083526611328125, 0.0277099609375, 0.028350830078125, 0.05755615234375, 0.015045166015625, 0.02264404296875, 0.071044921875, 0.0557861328125, 0.076507568359375, 0.100250244140625, 0.089202880859375, 0.12200927734375, 0.132537841796875, 0.117462158203125, 0.143524169921875, 0.168243408203125, 0.15576171875, 0.125396728515625, 0.11529541015625, 0.103790283203125, 0.072662353515625, 0.0721435546875, 0.08599853515625, 0.1007080078125, 0.11004638671875, 0.0616455078125, 0.03515625, 0.051177978515625, 0.001678466796875, -0.04595947265625, -0.046478271484375, -0.07000732421875, -0.093109130859375, -0.069305419921875, -0.02935791015625, -0.047698974609375, -0.096771240234375, -0.073028564453125, -0.055206298828125, -0.081085205078125, -0.068878173828125, -0.06353759765625, -0.067138671875, -0.05389404296875, -0.050994873046875, -0.060028076171875, -0.06683349609375, -0.0323486328125, -0.00848388671875, -0.02935791015625, -0.045501708984375, -0.046112060546875, -0.01715087890625, -0.007598876953125, -0.057159423828125, -0.06317138671875, -0.057373046875, -0.1085205078125, -0.0994873046875, -0.0782470703125, -0.119537353515625, -0.111358642578125, -0.083343505859375, -0.09002685546875, -0.0958251953125, -0.100677490234375, -0.080657958984375, -0.0738525390625, -0.103668212890625, -0.087860107421875, -0.05670166015625, -0.052581787109375, -0.01361083984375, 0.02984619140625, 0.026763916015625, 0.01654052734375, 0.02197265625, 0.034820556640625, 0.028961181640625, -0.011688232421875, -0.040740966796875, -0.047515869140625, -0.07000732421875, -0.088226318359375, -0.089599609375, -0.073089599609375, -0.06304931640625, -0.074798583984375, -0.04254150390625, 0.005157470703125, 0.018096923828125, 0.040924072265625, 0.058380126953125, 0.05657958984375, 0.07958984375, 0.106414794921875, 0.0928955078125, 0.072479248046875, 0.0799560546875, 0.076019287109375, 0.055908203125, 0.0606689453125, 0.053497314453125, 0.023712158203125, 0.005218505859375, -0.0037841796875, 0.004302978515625, 0.01153564453125, -0.0072021484375, -0.00933837890625, 0.03509521484375, 0.071197509765625, 0.063995361328125, 0.056610107421875, 0.05157470703125, 0.048248291015625, 0.056488037109375, 0.053680419921875, 0.04522705078125, 0.035552978515625, 0.027679443359375, 0.0384521484375, 0.0545654296875, 0.04962158203125, 0.031768798828125, 0.03521728515625, 0.040618896484375, 0.0380859375, 0.039520263671875, 0.020111083984375, 0.015716552734375, 0.02117919921875, -0.010040283203125, -0.015045166015625, 0.006500244140625, 0.003692626953125, 0.008270263671875, 0.027801513671875, 0.053802490234375, 0.049957275390625, 0.017578125, 0.029022216796875, 0.06060791015625, 0.049957275390625}};

}; // end namespace
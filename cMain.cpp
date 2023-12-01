#include "cMain.h"
#include "Logger.h"

cMain::cMain(void)
{
	M=new cFont("���",11,11);
	S=new cFont("���",11,11);
	C=new cFont("���",10,10);
	EC=new cFont("���",10,10);
	GetTexManager()->AddTex(999,"./Image/background.png");
	GetTexManager()->AddTex(998,"./Image/����â.png");
	GetTexManager()->AddTex(997,"./Image/��������.png");
	GetTexManager()->AddTex(996,"./Image/�ú�����.png");
	GetTexManager()->AddTex(995,"./Image/�����缳��.png");

	GetTexManager()->AddTex(350,"./image/����â.png");

	GetTexManager()->AddTex(399,"./image/����/����2.png");
	GetTexManager()->AddTex(400,"./image/����/����.png");

	GetTexManager()->AddTex(401,"./image/����/����.png");
	GetTexManager()->AddTex(402,"./image/����/����2.png");

	GetTexManager()->AddTex(403,"./image/����/�����.png");
	GetTexManager()->AddTex(404,"./image/����/�����2.png");

	GetTexManager()->AddTex(405,"./image/����/�ҵ帶����.png");
	GetTexManager()->AddTex(406,"./image/����/�ҵ帶����2.png");

	GetTexManager()->AddTex(407,"./image/����/�ú�.png");
	GetTexManager()->AddTex(408,"./image/����/�ú�2.png");

	GetTexManager()->AddTex(409,"./image/����/����Ʈ��ó.png");
	GetTexManager()->AddTex(410,"./image/����/����Ʈ��ó2.png");

	GetTexManager()->AddTex(411,"./image/����/��������.png");
	GetTexManager()->AddTex(412,"./image/����/��������2.png");

	GetTexManager()->AddTex(413,"./image/����/������.png");
	GetTexManager()->AddTex(414,"./image/����/������2.png");

	GetTexManager()->AddTex(415,"./image/����/�ݵ�������.png");
	GetTexManager()->AddTex(416,"./image/����/�ݵ�������2.png");

	GetTexManager()->AddTex(417,"./image/����/���̾������.png");
	GetTexManager()->AddTex(418,"./image/����/���̾������2.png");

	GetTexManager()->AddTex(420,"./image/���־���/�ڷΰ���.png");
	GetTexManager()->AddTex(421,"./image/���־���/�ڷΰ���2.png");
	GetTexManager()->AddTex(450,"./image/����â.png");

	GetTexManager()->AddTex(322,"./image/���־���/����.png");
	GetTexManager()->AddTex(323,"./image/���־���/����2.png");
	GetTexManager()->AddTex(324,"./image/���־���/���.png");
	GetTexManager()->AddTex(325,"./image/���־���/���2.png");
	GetTexManager()->AddTex(326,"./image/���־���/�Ӿ�.png");
	GetTexManager()->AddTex(327,"./image/���־���/�Ӿ�2.png");
	GetTexManager()->AddTex(328,"./image/����&����ü��/����ü��.png");
	GetTexManager()->AddTex(329,"./image/����&����ü��/����ü��2.png");
	GetTexManager()->AddTex(330,"./image/���־���/����.png");
	GetTexManager()->AddTex(331,"./image/���־���/����2.png");

	GetTexManager()->AddTex(432,"./image/������/���Ծ���.png");
	GetTexManager()->AddTex(433,"./image/������/���Ծ��۸��콺.png");

	GetTexManager()->AddTex(340,"./image/10/��������.png");
	GetTexManager()->AddTex(341,"./image/10/���������.png");
	GetTexManager()->AddTex(342,"./image/10/�ҵ帶���ͼ���.png");
	GetTexManager()->AddTex(343,"./image/10/�ú�����.png");
	GetTexManager()->AddTex(344,"./image/10/����Ʈ��ó����.png");
	GetTexManager()->AddTex(345,"./image/10/�������ۼ���.png");
	GetTexManager()->AddTex(346,"./image/10/�����缳��.png");
	GetTexManager()->AddTex(347,"./image/10/�ݵ������弳��.png");
	GetTexManager()->AddTex(348,"./image/10/���̾�����Ǽ���.png");

	GetTexManager()->AddTex(350,"./image/����2/����/��������.png");
	GetTexManager()->AddTex(351,"./image/����2/����/�����.png");
	GetTexManager()->AddTex(352,"./image/����2/����/�ҵ帶����.png");
	GetTexManager()->AddTex(353,"./image/����2/����/�ú�����.png");
	GetTexManager()->AddTex(354,"./image/����2/����/����Ʈ��ó.png");
	GetTexManager()->AddTex(355,"./image/����2/����/��������.png");
	GetTexManager()->AddTex(356,"./image/����2/����/����������.png");
	GetTexManager()->AddTex(357,"./image/����2/����/�ݵ�������.png");
	GetTexManager()->AddTex(358,"./image/����2/����/���̾������.png");

	GetTexManager()->AddTex(360,"./image/����&����ü��/����/����ü��1.png");
	GetTexManager()->AddTex(361,"./image/����&����ü��/����/����ü��2.png");
	GetTexManager()->AddTex(362,"./image/����&����ü��/����/����ü��3.png");
	GetTexManager()->AddTex(363,"./image/����&����ü��/����/����1.png");
	GetTexManager()->AddTex(364,"./image/����&����ü��/����/����2.png");
	GetTexManager()->AddTex(365,"./image/����&����ü��/����/����3.png");

	GetTexManager()->AddTex(370,"./image/���־���/����/����1.png");
	GetTexManager()->AddTex(371,"./image/���־���/����/����2.png");
	GetTexManager()->AddTex(372,"./image/���־���/����/����3.png");
	GetTexManager()->AddTex(373,"./image/���־���/����/���1.png");
	GetTexManager()->AddTex(374,"./image/���־���/����/���2.png");
	GetTexManager()->AddTex(375,"./image/���־���/����/���3.png");
	GetTexManager()->AddTex(376,"./image/���־���/����/�Ӿ�.png");
	GetTexManager()->AddTex(377,"./image/���־���/����/���ۼ���.png");

	GetTexManager()->AddTex(380,"./image/�ڿ�.png");
	GetTexManager()->AddTex(381,"./image/�α�.png");


	GetTexManager()->AddTex(382,"./image/���־���/����.png");
	GetTexManager()->AddTex(383,"./image/���־���/����2.png");
	GetTexManager()->AddTex(384,"./image/���־���/���.png");
	GetTexManager()->AddTex(385,"./image/���־���/���2.png");
	GetTexManager()->AddTex(386,"./image/���־���/���.png");
	GetTexManager()->AddTex(387,"./image/���־���/���2.png");
	GetTexManager()->AddTex(388,"./image/���־���/�Ӿ�.png");
	GetTexManager()->AddTex(389,"./image/���־���/�Ӿ�2.png");
	GetTexManager()->AddTex(390,"./image/���־���/����.png");
	GetTexManager()->AddTex(391,"./image/���־���/����2.png");

	GetTexManager()->AddTex(392,"./image/������/���Ծ���.png");
	GetTexManager()->AddTex(393,"./image/������/���Ծ��۸��콺.png");



	GetTexManager()->AddTex(0, "./Image/�����̵�1.png");
	GetTexManager()->AddTex(1, "./Image/�����̵�2.png");
	GetTexManager()->AddTex(2, "./Image/�����̵�3.png");
	GetTexManager()->AddTex(3, "./Image/�����̵�4.png");
	GetTexManager()->AddTex(4, "./Image/�����̵�5.png");
	GetTexManager()->AddTex(5, "./Image/�����̵�6.png");
	GetTexManager()->AddTex(6, "./Image/��������1.png");
	GetTexManager()->AddTex(7, "./Image/��������2.png");
	GetTexManager()->AddTex(8, "./Image/��������3.png");
	GetTexManager()->AddTex(9, "./Image/��������4.png");
	GetTexManager()->AddTex(10, "./Image/��������5.png");
	GetTexManager()->AddTex(11, "./Image/�������1.png");
	GetTexManager()->AddTex(12, "./Image/�������2.png");
	GetTexManager()->AddTex(13, "./Image/�������3.png");

	GetTexManager()->AddTex(14, "./Image/�������̵�1.png");
	GetTexManager()->AddTex(15, "./Image/�������̵�2.png");
	GetTexManager()->AddTex(16, "./Image/�������̵�3.png");
	GetTexManager()->AddTex(17, "./Image/�������̵�4.png");
	GetTexManager()->AddTex(18,"./Image/�������̵�5.png");
	GetTexManager()->AddTex(19,"./Image/�������̵�6.png");
	GetTexManager()->AddTex(20,"./Image/����������1.png");
	GetTexManager()->AddTex(21, "./Image/����������2.png");
	GetTexManager()->AddTex(22, "./Image/����������3.png");
	GetTexManager()->AddTex(23, "./Image/����������4.png");
	GetTexManager()->AddTex(24, "./Image/����������5.png");
	GetTexManager()->AddTex(25, "./Image/���������1.png");
	GetTexManager()->AddTex(26, "./Image/���������2.png");
	GetTexManager()->AddTex(27, "./Image/���������3.png");

	GetTexManager()->AddTex(28,"./Image/�ú��̵�1.png");
	GetTexManager()->AddTex(29,"./Image/�ú��̵�2.png");
	GetTexManager()->AddTex(30,"./Image/�ú��̵�3.png");
	GetTexManager()->AddTex(31,"./Image/�ú��̵�4.png");
	GetTexManager()->AddTex(32,"./Image/�ú��̵�5.png");
	GetTexManager()->AddTex(33,"./Image/�ú�����1.png");
	GetTexManager()->AddTex(34,"./Image/�ú�����2.png");
	GetTexManager()->AddTex(35,"./Image/�ú�����3.png");
	GetTexManager()->AddTex(36,"./Image/�ú�����4.png");
	GetTexManager()->AddTex(37,"./Image/�ú����1.png");
	GetTexManager()->AddTex(38,"./Image/�ú����2.png");
	GetTexManager()->AddTex(39,"./Image/�ú����3.png");

	GetTexManager()->AddTex(40,"./Image/���ú��̵�1.png");
	GetTexManager()->AddTex(41,"./Image/���ú��̵�2.png");
	GetTexManager()->AddTex(42,"./Image/���ú��̵�3.png");
	GetTexManager()->AddTex(43,"./Image/���ú��̵�4.png");
	GetTexManager()->AddTex(44,"./Image/���ú��̵�5.png");
	GetTexManager()->AddTex(45,"./Image/���ú�����1.png");
	GetTexManager()->AddTex(46,"./Image/���ú�����2.png");
	GetTexManager()->AddTex(47,"./Image/���ú�����3.png");
	GetTexManager()->AddTex(48,"./Image/���ú�����4.png");
	GetTexManager()->AddTex(49,"./Image/���ú����1.png");
	GetTexManager()->AddTex(50,"./Image/���ú����2.png");
	GetTexManager()->AddTex(51,"./Image/���ú����3.png");

	GetTexManager()->AddTex(52,"./Image/������ȱ�1.png");
	GetTexManager()->AddTex(53,"./Image/������ȱ�2.png");
	GetTexManager()->AddTex(54,"./Image/������ȱ�3.png");
	GetTexManager()->AddTex(55,"./Image/������ȱ�4.png");
	GetTexManager()->AddTex(56,"./Image/���������1.png");
	GetTexManager()->AddTex(57,"./Image/���������2.png");
	GetTexManager()->AddTex(58,"./Image/���������3.png");
	GetTexManager()->AddTex(59,"./Image/����������1.png");
	GetTexManager()->AddTex(60,"./Image/����������2.png");
	GetTexManager()->AddTex(61,"./Image/����������3.png");

	GetTexManager()->AddTex(62,"./Image/��������ȱ�1.png");
	GetTexManager()->AddTex(63,"./Image/��������ȱ�2.png");
	GetTexManager()->AddTex(64,"./Image/��������ȱ�3.png");
	GetTexManager()->AddTex(65,"./Image/��������ȱ�4.png");
	GetTexManager()->AddTex(66,"./Image/�����������1.png");
	GetTexManager()->AddTex(67,"./Image/�����������2.png");
	GetTexManager()->AddTex(68,"./Image/�����������3.png");
	GetTexManager()->AddTex(69,"./Image/������������1.png");
	GetTexManager()->AddTex(70,"./Image/������������2.png");
	GetTexManager()->AddTex(71,"./Image/������������3.png");

	GetTexManager()->AddTex(72,"./Image/������Ʈ�ȱ�1.png");
	GetTexManager()->AddTex(73,"./Image/������Ʈ�ȱ�2.png");
	GetTexManager()->AddTex(74,"./Image/������Ʈ�ȱ�3.png");
	GetTexManager()->AddTex(75,"./Image/������Ʈ�ȱ�4.png");
	GetTexManager()->AddTex(76,"./Image/������Ʈ����1.png");
	GetTexManager()->AddTex(77,"./Image/������Ʈ����2.png");
	GetTexManager()->AddTex(78,"./Image/������Ʈ����3.png");
	GetTexManager()->AddTex(79,"./Image/������Ʈ����1.png");
	GetTexManager()->AddTex(80,"./Image/������Ʈ����2.png");
	GetTexManager()->AddTex(81,"./Image/������Ʈ����3.png");

	GetTexManager()->AddTex(82,"./Image/��������Ʈ�ȱ�1.png");
	GetTexManager()->AddTex(83,"./Image/��������Ʈ�ȱ�2.png");
	GetTexManager()->AddTex(84,"./Image/��������Ʈ�ȱ�3.png");
	GetTexManager()->AddTex(85,"./Image/��������Ʈ�ȱ�4.png");
	GetTexManager()->AddTex(86,"./Image/��������Ʈ����1.png");
	GetTexManager()->AddTex(87,"./Image/��������Ʈ����2.png");
	GetTexManager()->AddTex(88,"./Image/��������Ʈ����3.png");
	GetTexManager()->AddTex(89,"./Image/��������Ʈ����1.png");
	GetTexManager()->AddTex(90,"./Image/��������Ʈ����2.png");
	GetTexManager()->AddTex(91,"./Image/��������Ʈ����3.png");

	GetTexManager()->AddTex(92,"./Image/�ҵ帶���Ͱȱ�1.png");
	GetTexManager()->AddTex(93,"./Image/�ҵ帶���Ͱȱ�2.png");
	GetTexManager()->AddTex(94,"./Image/�ҵ帶���Ͱȱ�3.png");
	GetTexManager()->AddTex(95,"./Image/�ҵ帶���Ͱȱ�4.png");
	GetTexManager()->AddTex(96,"./Image/�ҵ帶���Ͱȱ�5.png");
	GetTexManager()->AddTex(97,"./Image/�ҵ帶���Ͱȱ�6.png");
	GetTexManager()->AddTex(98,"./Image/�ҵ帶���Ͱ���1.png");
	GetTexManager()->AddTex(99,"./Image/�ҵ帶���Ͱ���2.png");
	GetTexManager()->AddTex(100,"./Image/�ҵ帶���Ͱ���3.png");
	GetTexManager()->AddTex(101,"./Image/�ҵ帶���Ͱ���4.png");
	GetTexManager()->AddTex(102,"./Image/�ҵ帶���Ͱ���5.png");
	GetTexManager()->AddTex(103,"./Image/�ҵ帶���ͻ��1.png");
	GetTexManager()->AddTex(104,"./Image/�ҵ帶���ͻ��2.png");
	GetTexManager()->AddTex(105,"./Image/�ҵ帶���ͻ��3.png");

	GetTexManager()->AddTex(106,"./Image/���ҵ帶���Ͱȱ�1.png");
	GetTexManager()->AddTex(107,"./Image/���ҵ帶���Ͱȱ�2.png");
	GetTexManager()->AddTex(108,"./Image/���ҵ帶���Ͱȱ�3.png");
	GetTexManager()->AddTex(109,"./Image/���ҵ帶���Ͱȱ�4.png");
	GetTexManager()->AddTex(110,"./Image/���ҵ帶���Ͱȱ�5.png");
	GetTexManager()->AddTex(111,"./Image/���ҵ帶���Ͱȱ�6.png");
	GetTexManager()->AddTex(112,"./Image/���ҵ帶���Ͱ���1.png");
	GetTexManager()->AddTex(113,"./Image/���ҵ帶���Ͱ���2.png");
	GetTexManager()->AddTex(114,"./Image/���ҵ帶���Ͱ���3.png");
	GetTexManager()->AddTex(115,"./Image/���ҵ帶���Ͱ���4.png");
	GetTexManager()->AddTex(116,"./Image/���ҵ帶���Ͱ���5.png");
	GetTexManager()->AddTex(117,"./Image/���ҵ帶���ͻ��1.png");
	GetTexManager()->AddTex(118,"./Image/���ҵ帶���ͻ��2.png");
	GetTexManager()->AddTex(119,"./Image/���ҵ帶���ͻ��3.png");

	GetTexManager()->AddTex(120,"./Image/������ȱ�1.png");
	GetTexManager()->AddTex(121,"./Image/������ȱ�2.png");
	GetTexManager()->AddTex(122,"./Image/������ȱ�3.png");
	GetTexManager()->AddTex(123,"./Image/������ȱ�4.png");
	GetTexManager()->AddTex(124,"./Image/������ȱ�5.png");
	GetTexManager()->AddTex(125,"./Image/������ȱ�6.png");
	GetTexManager()->AddTex(126,"./Image/���������1.png");
	GetTexManager()->AddTex(127,"./Image/���������2.png");
	GetTexManager()->AddTex(128,"./Image/���������3.png");
	GetTexManager()->AddTex(129,"./Image/���������4.png");
	GetTexManager()->AddTex(130,"./Image/���������5.png");
	GetTexManager()->AddTex(131,"./Image/��������1.png");
	GetTexManager()->AddTex(132,"./Image/��������2.png");
	GetTexManager()->AddTex(133,"./Image/��������3.png");

	GetTexManager()->AddTex(134,"./Image/��������ȱ�1.png");
	GetTexManager()->AddTex(135,"./Image/��������ȱ�2.png");
	GetTexManager()->AddTex(136,"./Image/��������ȱ�3.png");
	GetTexManager()->AddTex(137,"./Image/��������ȱ�4.png");
	GetTexManager()->AddTex(138,"./Image/��������ȱ�5.png");
	GetTexManager()->AddTex(139,"./Image/��������ȱ�6.png");
	GetTexManager()->AddTex(140,"./Image/�����������1.png");
	GetTexManager()->AddTex(141,"./Image/�����������2.png");
	GetTexManager()->AddTex(142,"./Image/�����������3.png");
	GetTexManager()->AddTex(143,"./Image/�����������4.png");
	GetTexManager()->AddTex(144,"./Image/�����������5.png");
	GetTexManager()->AddTex(145,"./Image/����������1.png");
	GetTexManager()->AddTex(146,"./Image/����������2.png");
	GetTexManager()->AddTex(147,"./Image/����������3.png");

	GetTexManager()->AddTex(148,"./Image/����Ʈ��ó�ȱ�1.png");
	GetTexManager()->AddTex(149,"./Image/����Ʈ��ó�ȱ�2.png");
	GetTexManager()->AddTex(150,"./Image/����Ʈ��ó�ȱ�3.png");
	GetTexManager()->AddTex(151,"./Image/����Ʈ��ó�ȱ�4.png");
	GetTexManager()->AddTex(152,"./Image/����Ʈ��ó�ȱ�5.png");
	GetTexManager()->AddTex(153,"./Image/����Ʈ��ó�ȱ�6.png");
	GetTexManager()->AddTex(154,"./Image/����Ʈ��ó����1.png");
	GetTexManager()->AddTex(155,"./Image/����Ʈ��ó����2.png");
	GetTexManager()->AddTex(156,"./Image/����Ʈ��ó����3.png");
	GetTexManager()->AddTex(157,"./Image/����Ʈ��ó����4.png");
	GetTexManager()->AddTex(158,"./Image/����Ʈ��ó���1.png");
	GetTexManager()->AddTex(159,"./Image/����Ʈ��ó���2.png");
	GetTexManager()->AddTex(160,"./Image/����Ʈ��ó���3.png");

	GetTexManager()->AddTex(161,"./Image/������Ʈ��ó�ȱ�1.png");
	GetTexManager()->AddTex(162,"./Image/������Ʈ��ó�ȱ�2.png");
	GetTexManager()->AddTex(163,"./Image/������Ʈ��ó�ȱ�3.png");
	GetTexManager()->AddTex(164,"./Image/������Ʈ��ó�ȱ�4.png");
	GetTexManager()->AddTex(165,"./Image/������Ʈ��ó�ȱ�5.png");
	GetTexManager()->AddTex(166,"./Image/������Ʈ��ó�ȱ�6.png");
	GetTexManager()->AddTex(167,"./Image/������Ʈ��ó����1.png");
	GetTexManager()->AddTex(168,"./Image/������Ʈ��ó����2.png");
	GetTexManager()->AddTex(169,"./Image/������Ʈ��ó����3.png");
	GetTexManager()->AddTex(170,"./Image/������Ʈ��ó����4.png");
	GetTexManager()->AddTex(171,"./Image/������Ʈ��ó���1.png");
	GetTexManager()->AddTex(172,"./Image/������Ʈ��ó���2.png");
	GetTexManager()->AddTex(173,"./Image/������Ʈ��ó���3.png");

	GetTexManager()->AddTex(174,"./Image/�������۰ȱ�1.png");
	GetTexManager()->AddTex(175,"./Image/�������۰ȱ�2.png");
	GetTexManager()->AddTex(176,"./Image/�������۰ȱ�3.png");
	GetTexManager()->AddTex(177,"./Image/�������۰ȱ�4.png");
	GetTexManager()->AddTex(178,"./Image/�������۰ȱ�5.png");
	GetTexManager()->AddTex(179,"./Image/�������۰ȱ�6.png");
	GetTexManager()->AddTex(180,"./Image/�������۰���1.png");
	GetTexManager()->AddTex(181,"./Image/�������۰���2.png");
	GetTexManager()->AddTex(182,"./Image/�������۰���3.png");
	GetTexManager()->AddTex(183,"./Image/�������۰���4.png");
	GetTexManager()->AddTex(184,"./Image/�������۰���5.png");
	GetTexManager()->AddTex(185,"./Image/�������۰���6.png");
	GetTexManager()->AddTex(186,"./Image/�������ۻ��1.png");
	GetTexManager()->AddTex(187,"./Image/�������ۻ��2.png");
	GetTexManager()->AddTex(188,"./Image/�������ۻ��3.png");

	GetTexManager()->AddTex(189,"./Image/���������۰ȱ�1.png");
	GetTexManager()->AddTex(190,"./Image/���������۰ȱ�2.png");
	GetTexManager()->AddTex(191,"./Image/���������۰ȱ�3.png");
	GetTexManager()->AddTex(192,"./Image/���������۰ȱ�4.png");
	GetTexManager()->AddTex(193,"./Image/���������۰ȱ�5.png");
	GetTexManager()->AddTex(194,"./Image/���������۰ȱ�6.png");
	GetTexManager()->AddTex(195,"./Image/���������۰���1.png");
	GetTexManager()->AddTex(196,"./Image/���������۰���2.png");
	GetTexManager()->AddTex(197,"./Image/���������۰���3.png");
	GetTexManager()->AddTex(198,"./Image/���������۰���4.png");
	GetTexManager()->AddTex(199,"./Image/���������۰���5.png");
	GetTexManager()->AddTex(200,"./Image/���������۰���6.png");
	GetTexManager()->AddTex(201,"./Image/���������ۻ��1.png");
	GetTexManager()->AddTex(202,"./Image/���������ۻ��2.png");
	GetTexManager()->AddTex(203,"./Image/���������ۻ��3.png");

	GetTexManager()->AddTex(204,"./Image/�ݵ�������ȱ�1.png");
	GetTexManager()->AddTex(205,"./Image/�ݵ�������ȱ�2.png");
	GetTexManager()->AddTex(206,"./Image/�ݵ�������ȱ�3.png");
	GetTexManager()->AddTex(207,"./Image/�ݵ�������ȱ�4.png");
	GetTexManager()->AddTex(208,"./Image/�ݵ����������1.png");
	GetTexManager()->AddTex(209,"./Image/�ݵ����������2.png");
	GetTexManager()->AddTex(210,"./Image/�ݵ����������3.png");
	GetTexManager()->AddTex(211,"./Image/�ݵ�����������1.png");
	GetTexManager()->AddTex(212,"./Image/�ݵ�����������2.png");
	GetTexManager()->AddTex(213,"./Image/�ݵ�����������3.png");

	GetTexManager()->AddTex(214,"./Image/���ݵ�������ȱ�1.png");
	GetTexManager()->AddTex(215,"./Image/���ݵ�������ȱ�2.png");
	GetTexManager()->AddTex(216,"./Image/���ݵ�������ȱ�3.png");
	GetTexManager()->AddTex(217,"./Image/���ݵ�������ȱ�4.png");
	GetTexManager()->AddTex(218,"./Image/���ݵ����������1.png");
	GetTexManager()->AddTex(219,"./Image/���ݵ����������2.png");
	GetTexManager()->AddTex(220,"./Image/���ݵ����������3.png");
	GetTexManager()->AddTex(221,"./Image/���ݵ�����������1.png");
	GetTexManager()->AddTex(222,"./Image/���ݵ�����������2.png");
	GetTexManager()->AddTex(223,"./Image/���ݵ�����������3.png");

	GetTexManager()->AddTex(224,"./Image/���̾�����ǰȱ�1.png");
	GetTexManager()->AddTex(225,"./Image/���̾�����ǰȱ�2.png");
	GetTexManager()->AddTex(226,"./Image/���̾�����ǰȱ�3.png");
	GetTexManager()->AddTex(227,"./Image/���̾�����ǰȱ�4.png");
	GetTexManager()->AddTex(228,"./Image/���̾�����ǰ���1.png");
	GetTexManager()->AddTex(229,"./Image/���̾�����ǰ���2.png");
	GetTexManager()->AddTex(230,"./Image/���̾�����ǰ���3.png");
	GetTexManager()->AddTex(231,"./Image/���̾����������1.png");
	GetTexManager()->AddTex(232,"./Image/���̾����������2.png");
	GetTexManager()->AddTex(233,"./Image/���̾����������3.png");

	GetTexManager()->AddTex(234,"./Image/�����̾�����ǰȱ�1.png");
	GetTexManager()->AddTex(235,"./Image/�����̾�����ǰȱ�2.png");
	GetTexManager()->AddTex(236,"./Image/�����̾�����ǰȱ�3.png");
	GetTexManager()->AddTex(237,"./Image/�����̾�����ǰȱ�4.png");
	GetTexManager()->AddTex(238,"./Image/�����̾�����ǰ���1.png");
	GetTexManager()->AddTex(239,"./Image/�����̾�����ǰ���2.png");
	GetTexManager()->AddTex(240,"./Image/�����̾�����ǰ���3.png");
	GetTexManager()->AddTex(241,"./Image/�����̾����������1.png");
	GetTexManager()->AddTex(242,"./Image/�����̾����������2.png");
	GetTexManager()->AddTex(243,"./Image/�����̾����������3.png");

	GetTexManager()->AddTex(250,"./Image/���̽�1.png");
	GetTexManager()->AddTex(251,"./Image/���̽�2.png");
	GetTexManager()->AddTex(252,"./Image/���̽�3.png");
	GetTexManager()->AddTex(253,"./Image/���̽�4.png");
	GetTexManager()->AddTex(254,"./Image/���̽�5.png");
	GetTexManager()->AddTex(255,"./Image/�����̽�1.png");
	GetTexManager()->AddTex(256,"./Image/�����̽�2.png");
	GetTexManager()->AddTex(257,"./Image/�����̽�3.png");
	GetTexManager()->AddTex(258,"./Image/�����̽�4.png");
	GetTexManager()->AddTex(259,"./Image/�����̽�5.png");

	GetTexManager()->AddTex(260,"./Image/���̾�1.png");
	GetTexManager()->AddTex(261,"./Image/���̾�2.png");
	GetTexManager()->AddTex(262,"./Image/���̾�3.png");
	GetTexManager()->AddTex(263,"./Image/���̾�4.png");
	GetTexManager()->AddTex(264,"./Image/���̾�5.png");
	GetTexManager()->AddTex(265,"./Image/���̾�6.png");


	GetTexManager()->AddTex(480,"./Image/������Ÿ��1 (2).png");
	GetTexManager()->AddTex(481,"./Image/������Ÿ��2 (2).png");
	GetTexManager()->AddTex(482,"./Image/�ú���Ÿ��1 (2).png");
	GetTexManager()->AddTex(483,"./Image/�ú���Ÿ��2 (2).png");
	GetTexManager()->AddTex(484,"./Image/��������Ÿ��1.png");
	GetTexManager()->AddTex(485,"./Image/��������Ÿ��3.png");
	GetTexManager()->AddTex(486,"./Image/��������Ÿ��1.png");
	GetTexManager()->AddTex(487,"./Image/��������Ÿ��3.png");
	GetTexManager()->AddTex(488,"./Image/�������콺.png");
	GetTexManager()->AddTex(489,"./Image/�ú����콺.png");
	GetTexManager()->AddTex(490,"./Image/�����縶�콺.png");
	GetTexManager()->AddTex(491,"./Image/������Ʈ��Ÿ��1.png");
	GetTexManager()->AddTex(492,"./Image/������Ʈ��Ÿ��3.png");
	GetTexManager()->AddTex(493,"./Image/������Ʈ���콺.png");

	GetTexManager()->AddTex(501,"./Image/������/��������콺.png");
	GetTexManager()->AddTex(502,"./Image/������/�������Ÿ��.png");
	GetTexManager()->AddTex(503,"./image/������/�������Ÿ��2.png");
	GetTexManager()->AddTex(504,"./image/������/�ҵ帶���͸��콺.png");
	GetTexManager()->AddTex(505,"./image/������/�ҵ帶������Ÿ��.png");
	GetTexManager()->AddTex(506,"./image/������/�ҵ帶������Ÿ��2.png");
	GetTexManager()->AddTex(507,"./image/������/�������۸��콺.png");
	GetTexManager()->AddTex(508,"./image/������/����������Ÿ��.png");
	GetTexManager()->AddTex(509,"./image/������/����������Ÿ��2.png");
	GetTexManager()->AddTex(510,"./image/������/����Ʈ��ó���콺.png");
	GetTexManager()->AddTex(511,"./image/������/����Ʈ��ó��Ÿ��.png");
	GetTexManager()->AddTex(512,"./image/������/����Ʈ��ó��Ÿ��2.png");
	GetTexManager()->AddTex(513,"./image/������/�ݵ������帶�콺.png");
	GetTexManager()->AddTex(514,"./image/������/�ݵ���������Ÿ��.png");
	GetTexManager()->AddTex(515,"./image/������/�ݵ���������Ÿ��2.png");
	GetTexManager()->AddTex(516,"./image/������/���̾�����Ǹ��콺.png");
	GetTexManager()->AddTex(517,"./image/������/���̾��������Ÿ��.png");
	GetTexManager()->AddTex(518,"./image/������/���̾��������Ÿ��2.png");

	GetTexManager()->AddTex(666,"./image/��������.png");

	GetTexManager()->AddTex(700,"./image/����1.png");
	GetTexManager()->AddTex(701,"./image/����2.png");
	RectWarriorCool.bottom=0;
	RectWarriorCool.left=0;
	RectWarriorCool.right=0;
	RectWarriorCool.top=0;
	RectArcherCool.bottom=0;
	RectArcherCool.left=0;
	RectArcherCool.right=0;
	RectArcherCool.top=0;
	RectMagicianCool.bottom=0;
	RectMagicianCool.left=0;
	RectMagicianCool.right=0;
	RectMagicianCool.top=0;

	MapX=1100;
	MapY=384;
	first_fX=110;
	EndofMove_X=2120;
	Enemyfirst_fX=2120;
	EnemyEndofMove_X=50;
	BeforemyUnit_fX=EndofMove_X;
	BeforeEnemyUnit_fX=EnemyEndofMove_X;
	Warriorcool=0; 
	WarriorCoolX=100;
	Archercool=0;
	ArcherCoolX=100;
	Magiciancool=0;
	MagicianCoolX=100;
	a=1;
	b=1;

	UpgradeScene=0;

	
	Warrior=0;
	Archer=0;
	Magician=0;
	Priest=0;

	MoneyUp=0;
	AttackUp=0;
	EnemyAttackUp=0;
	ShieldUp=0;
	EnemyShieldUp=0;
	CastleUp=0;
	SpeedUp=0;
	EnemyWarrior=0;
	EnemyArcher=0;
	EnemyMagician=0;

	gold=100;
	Enemygold=100;
	golddel=59;
	check=60;
	EnemyWarriorcool=0;
	EnemyArchercool=0;
	EnemyMagiciancool=0;
	srand(GetTickCount());

	EnemyUnitIt=false;
	EnemyUnitCount=0;
	MyUnitIt=false;
	MyUnitCount=0;


	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	for(int i=0; i<=15; i++)
	{
		people[i]=NULL;
	}
	for(int i=0; i<=15; i++)
	{
		enemypeople[i]=NULL;
	}
}

cMain::~cMain(void)
{
	GetTexManager()->Clear();
	GetSoundManager()->Clear();
}

void cMain::RenderFrame()
{

	//////////////////////////////////////////////////////////////////////////////////////////////////////////

	GetTexManager()->DrawTex(999,MapX ,MapY );
	GetTexManager()->DrawTex(998,220 ,100 );
	GetTexManager()->DrawTex(450,810 ,100 );
	GetTexManager()->DrawTex(380,790,30);
	GetTexManager()->DrawTex(381,940,30);

	if((GetMouseXPos()>=648 && GetMouseXPos()<=710 && GetMouseYPos()>=23 && GetMouseYPos()<=56))
	{
		GetTexManager()->DrawTex(420,680,40);
	}
	else
		GetTexManager()->DrawTex(421,680,40);


	////////////////////////////////////////////////������
	if(Warrior==0)
	{
		if((GetMouseXPos()>=27 && GetMouseXPos()<=92 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Warriorcool==0)
		{
			GetTexManager()->DrawTex(488,60,50);
			GetTexManager()->DrawTex(340,210,146);
		}
		else
			GetTexManager()->DrawTex(480,60,50);
		GetTexManager()->DrawTex(481, 60, WarriorCoolX, &RectWarriorCool);
	}
	else if(Warrior==1)
	{
		if((GetMouseXPos()>=27 && GetMouseXPos()<=92 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Warriorcool==0)
		{
			GetTexManager()->DrawTex(501,60,50); 
			GetTexManager()->DrawTex(341,210,146);
		}
		else
			GetTexManager()->DrawTex(502,60,50);
		GetTexManager()->DrawTex(503, 60, WarriorCoolX, &RectWarriorCool);
	}
	else if(Warrior==2)
	{
		if((GetMouseXPos()>=27 && GetMouseXPos()<=92 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Warriorcool==0)
		{
			GetTexManager()->DrawTex(504,60,50); 
			GetTexManager()->DrawTex(342,210,146);
		}
		else
			GetTexManager()->DrawTex(505,60,50);
		GetTexManager()->DrawTex(506, 61, WarriorCoolX, &RectWarriorCool);
	}
	///////////////////////����
	if(Archer==0)
	{
		if((GetMouseXPos()>=125 && GetMouseXPos()<=190 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Archercool==0)
		{
			GetTexManager()->DrawTex(489,158,50);
			GetTexManager()->DrawTex(343,210,146);
		}
		else
			GetTexManager()->DrawTex(482,158,50);
		GetTexManager()->DrawTex(483, 158, ArcherCoolX, &RectArcherCool);
	}
	//��ó
	else if(Archer==1)
	{
		if((GetMouseXPos()>=125 && GetMouseXPos()<=190 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Archercool==0)
		{
			GetTexManager()->DrawTex(510,158,50);
			GetTexManager()->DrawTex(344,210,146);
		}
		else
			GetTexManager()->DrawTex(511,158,50);
		GetTexManager()->DrawTex(512, 158, ArcherCoolX, &RectArcherCool);
	}
	//����Ʈ����
	else if(Archer==2)
	{
		if((GetMouseXPos()>=125 && GetMouseXPos()<=190 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Archercool==0)
		{
			GetTexManager()->DrawTex(507,158,50);
			GetTexManager()->DrawTex(345,210,146);
		}
		else
			GetTexManager()->DrawTex(508,158,50);
		GetTexManager()->DrawTex(509, 159, ArcherCoolX, &RectArcherCool);
	}
	///////////////////////�ü�
	if(Magician==0)
	{
		if((GetMouseXPos()>=223 && GetMouseXPos()<=288 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Magiciancool==0)
		{
			GetTexManager()->DrawTex(490,258,50);
			GetTexManager()->DrawTex(346,210,146);
		}
		else
			GetTexManager()->DrawTex(484,258,50);
		GetTexManager()->DrawTex(485, 258, MagicianCoolX, &RectMagicianCool);
	}
	//������
	else if(Magician==1)
	{
		if((GetMouseXPos()>=223 && GetMouseXPos()<=288 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Magiciancool==0)
		{
			GetTexManager()->DrawTex(513,258,50);
			GetTexManager()->DrawTex(347,210,146);
		}
		else
			GetTexManager()->DrawTex(514,258,50);
		GetTexManager()->DrawTex(515, 258,MagicianCoolX, &RectMagicianCool);
	}
	//�ݵ�������
	else if(Magician==2)
	{
		if((GetMouseXPos()>=223 && GetMouseXPos()<=288 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Magiciancool==0)
		{
			GetTexManager()->DrawTex(516,258,50);
			GetTexManager()->DrawTex(348,210,146);
		}
		else
			GetTexManager()->DrawTex(517,258,50);
		GetTexManager()->DrawTex(518,259, MagicianCoolX, &RectMagicianCool);
	}
	//���̾������
	///////////////////////������
	/*if(Priest==0)
	{
	if((GetMouseXPos()>=321 && GetMouseXPos()<=386 && GetMouseYPos()>=20 && GetMouseYPos()<=82) && Magiciancool==0)
	GetTexManager()->DrawTex(493,358,50);
	else
	GetTexManager()->DrawTex(491,358,50);
	GetTexManager()->DrawTex(492, 358, PriestCoolX, &RectPriestCool);
	}*/
	///////////////////////������Ʈ

	if(UpgradeScene==0)
	{
		if((GetMouseXPos()>=637 && GetMouseXPos()<=702 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(399,670,130);
			GetTexManager()->DrawTex(666,985,132);
		}
		else
			GetTexManager()->DrawTex(400,670,130);
		//����
		if((GetMouseXPos()>=737 && GetMouseXPos()<=802 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(391,770,130);
			GetTexManager()->DrawTex(377,985,132);
		}
		else
			GetTexManager()->DrawTex(390,770,130);
		//���־���
		if((GetMouseXPos()>=837 && GetMouseXPos()<=902 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(433,870,130);
			if(MoneyUp==0)
				GetTexManager()->DrawTex(363,985,132);
				
			else if(MoneyUp==1)
				GetTexManager()->DrawTex(364,985,132);
			else if(MoneyUp==2)
				GetTexManager()->DrawTex(365,985,132);
		}
		else
			GetTexManager()->DrawTex(432,870,130);
		//������*/
	}

	if(UpgradeScene==1)
	{
		if((GetMouseXPos()>=637 && GetMouseXPos()<=702 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(402,670,130);
			GetTexManager()->DrawTex(350,985,132);
		}
		else
			GetTexManager()->DrawTex(401,670,130);

		if((GetMouseXPos()>=737 && GetMouseXPos()<=802 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(408,770,130);
			GetTexManager()->DrawTex(353,985,132);
		}
		else
			GetTexManager()->DrawTex(407,770,130);


		if((GetMouseXPos()>=837 && GetMouseXPos()<=902 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(414,870,130);
			GetTexManager()->DrawTex(356,985,132);
		}
		else
			GetTexManager()->DrawTex(413,870,130);
	}
	/////������ ��������

	if(UpgradeScene==2)
	{
		if((GetMouseXPos()>=632 && GetMouseXPos()<=698 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(323,665,130);
			if(AttackUp==0)
				GetTexManager()->DrawTex(370,985,132);
			else if(AttackUp==1)
				GetTexManager()->DrawTex(371,985,132);
			else if(AttackUp==2)
				GetTexManager()->DrawTex(372,985,132);
		}
		else
			GetTexManager()->DrawTex(322,665,130);

		if((GetMouseXPos()>=707 && GetMouseXPos()<=773 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(325,740,130);
			if(ShieldUp==0)
				GetTexManager()->DrawTex(373,985,132);
			else if(ShieldUp==1)
				GetTexManager()->DrawTex(374,985,132);
			else if(ShieldUp==2)
				GetTexManager()->DrawTex(375,985,132);
		}
		else
			GetTexManager()->DrawTex(324,740,130);


		if((GetMouseXPos()>=782 && GetMouseXPos()<=848 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(327,815,130);
			if(SpeedUp!=1)
			GetTexManager()->DrawTex(376,985,132);
		}
		else
			GetTexManager()->DrawTex(326,815,130);

		if((GetMouseXPos()>=857 && GetMouseXPos()<=923 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(329,890,130);
			if(CastleUp==0)
				GetTexManager()->DrawTex(360,985,132);
			else if(CastleUp==1)
				GetTexManager()->DrawTex(361,985,132);
			else if(CastleUp==2)
				GetTexManager()->DrawTex(362,985,132);
		}
		else
			GetTexManager()->DrawTex(328,890,130);
	}
	/////������ ��������


	if(UpgradeScene==4)
	{
		if((GetMouseXPos()>=670 && GetMouseXPos()<=733 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(404,700,130);
			GetTexManager()->DrawTex(351,985,132);
		}
		else
			GetTexManager()->DrawTex(403,700,130);


		if((GetMouseXPos()>=817 && GetMouseXPos()<=884 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(406,850,130);
			GetTexManager()->DrawTex(352,985,132);
		}
		else
			GetTexManager()->DrawTex(405,850,130);
	}
	////���� ����


	if(UpgradeScene==5)
	{
		if((GetMouseXPos()>=670 && GetMouseXPos()<=733 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(410,700,130);
			GetTexManager()->DrawTex(354,985,132);
		}
		else
			GetTexManager()->DrawTex(409,700,130);


		if((GetMouseXPos()>=817 && GetMouseXPos()<=884 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(412,850,130);
			GetTexManager()->DrawTex(355,985,132);
		}
		else
			GetTexManager()->DrawTex(411,850,130);

	}
	////��ó ����


	if(UpgradeScene==6)
	{
		if((GetMouseXPos()>=670 && GetMouseXPos()<=733 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(416,700,130);
			GetTexManager()->DrawTex(357,985,132);
		}
		else
			GetTexManager()->DrawTex(415,700,130);


		if((GetMouseXPos()>=817 && GetMouseXPos()<=884 && GetMouseYPos()>=99 && GetMouseYPos()<=163))
		{
			GetTexManager()->DrawTex(418,850,130);
			GetTexManager()->DrawTex(358,985,132);
		}
		else
			GetTexManager()->DrawTex(417,850,130);

	}
	////������ ����
	//////////////////////////////////////////////////////////////////////////////////////////////////////////

	for(int i=0;i<16;i++)
	{
		if(people[i]==NULL)
			continue;
		people[i]->Render();
	}
	for(int i=0;i<16;i++)
	{
		if(enemypeople[i]==NULL)
			continue;
		enemypeople[i]->Render();
	}
	M->Draw(820,25,money,D3DCOLOR_XRGB(255, 255, 255));
	S->Draw(974,25,supply,D3DCOLOR_XRGB(255, 255, 255));
	C->Draw(300,25,casstle,D3DCOLOR_XRGB(255, 255, 255));
	EC->Draw(300,45,enemycasstle,D3DCOLOR_XRGB(255, 255, 255));
}

bool cMain::MoveFrame()
{
	/*POINT pStart = {-10, -10};
	POINT pEnd = {1004, 750	};
	ClientToScreen(HGGetHWnd(), &pStart);
	ClientToScreen(HGGetHWnd(), &pEnd);

	RECT rect = {pStart.x, pStart.y, pEnd.x, pEnd.y};

	ClipCursor(&rect);*/
	
	if(EnemyUnitCount)
		EnemyUnitIt=true;
	else
		EnemyUnitIt=false;

	if(MyUnitCount)
		MyUnitIt=true;
	else
		MyUnitIt=false;

	for(int i=0;i<15;i++)
	{
		if(people[i]==NULL)
		{
			for(int j=i;j<15;j++)
			{
				if(people[j]!=NULL)
				{
					people[i]=people[j];
					people[j]=NULL;
					break;
				}
			}
		}
	}
	for(int i=0;i<15;i++)
	{
		if(enemypeople[i]==NULL)
		{
			for(int j=i;j<15;j++)
			{
				if(enemypeople[j]!=NULL)
				{
					enemypeople[i]=enemypeople[j];
					enemypeople[j]=NULL;
					break;
				}
			}
		}
	}
	if(a){
		for(int i=15;i>=0;i++)
		{
			if(people[i]==NULL)
			{
				people[i]=new cCastle(55);
				MyUnitCount++;
				a--;
				break;
			}
		}
	}
	if(b){
		for(int i=15;i>=0;i++)
		{
			if(enemypeople[i]==NULL)
			{
				enemypeople[i]=new cEnemyCastle(2120);
				EnemyUnitCount++;
				b--;
				break;
			}
		}
	}
	sprintf_s(casstle,"���� : %d",people[15]->Return_HP());
	sprintf_s(enemycasstle,"���� : %d",enemypeople[15]->Return_HP());
	sprintf_s(money,"%d",gold);
	sprintf_s(supply,"%d/15",MyUnitCount-1);
	
	
	if(people[15]->Return_HP()<=0)
	{
		GetSceneManager()->DeleteFrontScene();
		GetSceneManager()->AddSceneToFront( new cLose() );

		return SCENE_CHANGE;

	}
	if(enemypeople[15]->Return_HP()<=0)
	{
		GetSceneManager()->DeleteFrontScene();
		GetSceneManager()->AddSceneToFront( new cWin() );

		return SCENE_CHANGE;

	}
	
	if(UpgradeScene==0)
	{
		if((GetMouseXPos()>=637 && GetMouseXPos()<=702 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			UpgradeScene=1;
		}
		if((GetMouseXPos()>=737 && GetMouseXPos()<=802 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			UpgradeScene=2;
		}
		if((GetMouseXPos()>=837 && GetMouseXPos()<=902 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			
			if(MoneyUp<=3){
				
				MoneyUp++;
			

			}
			if(MoneyUp==1)
				gold-=150;
			if(MoneyUp==2)
				gold-=200;
			if(MoneyUp==3)
				gold-=250;



		}
	}

	//////////
	///�� 1�� ����
	///�� 2�� ����
	///�� 3�� ��

	else if(UpgradeScene==1)
	{
		if((GetMouseXPos()>=637 && GetMouseXPos()<=702 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			UpgradeScene=4;
		}
		if((GetMouseXPos()>=737 && GetMouseXPos()<=802 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			UpgradeScene=5;
		}
		if((GetMouseXPos()>=837 && GetMouseXPos()<=902 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			UpgradeScene=6;
		}
	}

	else if(UpgradeScene==2)
	{
		if((GetMouseXPos()>=632 && GetMouseXPos()<=698 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			if(AttackUp<=3)
				AttackUp++;
			if(AttackUp==1)
				gold-=150;
			if(AttackUp==2)
				gold-=200;
			if(AttackUp==3)
				gold-=300;
		}
		if((GetMouseXPos()>=707 && GetMouseXPos()<=773 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			if(ShieldUp<=3)
				ShieldUp++;
			if(ShieldUp==1)
				gold-=150;
			if(ShieldUp==2)
				gold-=200;
			if(ShieldUp==3)
				gold-=300;
		}
		if((GetMouseXPos()>=782 && GetMouseXPos()<=848 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			SpeedUp=1;
			gold-=200;
		}
		if((GetMouseXPos()>=857 && GetMouseXPos()<=923 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)))
		{
			if(CastleUp<=6)
				CastleUp++;
			if(CastleUp==1)
				gold-=150;
			if(CastleUp==3)
				gold-=250;
		}
	}

	else if(UpgradeScene==4)
	{
		if((GetMouseXPos()>=670 && GetMouseXPos()<=733 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)) && gold>=200)
		{
			Warrior=1;
			gold-=200;
		}
		//�����
		else if((GetMouseXPos()>=817 && GetMouseXPos()<=884 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0)) && gold>=200)
		{
			Warrior=2;
			gold-=200;
		}
		//�Ҹ�
	}
	else if(UpgradeScene==5)
	{
		if((GetMouseXPos()>=670 && GetMouseXPos()<=733 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0))&& gold>=200)
		{
			Archer=1;
			gold-=200;
		}
		//����
		else if((GetMouseXPos()>=817 && GetMouseXPos()<=884 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0))&& gold>=200)
		{
			Archer=2;
			gold-=200;
		}
		//����
	}
	else if(UpgradeScene==6)
	{
		if((GetMouseXPos()>=670 && GetMouseXPos()<=733 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0))&& gold>=200)
		{
			Magician=1;
			gold-=200;
		}
		//����
		else if((GetMouseXPos()>=817 && GetMouseXPos()<=884 && GetMouseYPos()>=99 && GetMouseYPos()<=163 && IsButtonDown(0))&& gold>=200)
		{
			Magician=2;
			gold-=200;
		}
		//�ĸ�
	}



	if((GetMouseXPos()>=648 && GetMouseXPos()<=710 && GetMouseYPos()>=23 && GetMouseYPos()<=56 && IsButtonDown(0)))
	{
		UpgradeScene=0;
	}
//////////////////////////////����
	switch(Warrior)
	{
	case 0:
		{
			if((GetMouseXPos()>=27 && GetMouseXPos()<=92 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Warriorcool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cWarrior(first_fX);
						Warriorcool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
		}
	case 1:
		{
			if((GetMouseXPos()>=27 && GetMouseXPos()<=92 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Warriorcool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cDefender(first_fX);
						Warriorcool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
		}
	case 2:
		{
			if((GetMouseXPos()>=27 && GetMouseXPos()<=92 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Warriorcool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cSwordmaster(first_fX);
						Warriorcool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
			break;
		}
	}
	switch(Archer)
	{
	case 0:
		{
			if((GetMouseXPos()>=108 && GetMouseXPos()<=172 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Archercool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cArcher(first_fX);
						Archercool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
		}
	case 1:
		{
			if((GetMouseXPos()>=125 && GetMouseXPos()<=190 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Archercool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cEliteArcher(first_fX);
						Archercool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
		}
	case 2:
		{
			if((GetMouseXPos()>=125 && GetMouseXPos()<=190 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Archercool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cSniper(first_fX);
						Archercool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
			break;
		}
	}
	switch(Magician)
	{
	case 0:
		{
			if((GetMouseXPos()>=223 && GetMouseXPos()<=288 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Magiciancool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cMagician(first_fX);
						Magiciancool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
		}
	case 1:
		{
			if((GetMouseXPos()>=223 && GetMouseXPos()<=288 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Magiciancool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cColdWizard(first_fX);
						Magiciancool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
		}
	case 2:
		{
			if((GetMouseXPos()>=223 && GetMouseXPos()<=288 && GetMouseYPos()>=28 && GetMouseYPos()<=92 && IsButtonDown(0)) && Magiciancool==0 )
			{
				for(int i=0;i<16;i++)
				{
					if(people[i]==NULL&&gold>=20)
					{
						people[i]=new cFireMagician(first_fX);
						Magiciancool=650;
						gold-=20;
						MyUnitCount++;
						break;
					}
				}
			}break;
			break;
		}
	}
	
///////////////////////////////////////////����
	for(int i=0;i<15;i++)
	{
		if(people[i]!=NULL&&AttackUp==1){
			people[i]->AttackUp(AttackUp);
			
		}
		else if(people[i]!=NULL&&AttackUp==2){
			people[i]->AttackUp(AttackUp);
		
		}
		else if(people[i]!=NULL&&AttackUp==3){
			people[i]->AttackUp(AttackUp);
	
		}
	}
	for(int i=0;i<15;i++)
	{
		if(people[i]!=NULL&&ShieldUp==1){
			people[i]->ShieldUp(ShieldUp);
			
		}
		else if(people[i]!=NULL&&ShieldUp==2){
			people[i]->ShieldUp(ShieldUp);
		
		}
		else if(people[i]!=NULL&&ShieldUp==3){
			people[i]->ShieldUp(ShieldUp);
		
		}
	}
	////////////////////////////////////

	if(MoneyUp==1){
		if(golddel==0){	
			gold+=2;
		}
	}
	else if(MoneyUp==2){
		if(golddel==0){	
			gold+=4;
		}
	}
	else if(MoneyUp>=3){
		if(golddel==0){	
			gold+=6;
		}
	}

	for(int i=0;i<15;i++)
	{
		if(people[i]==NULL)
			continue;
		if(SpeedUp==1){
			people[i]->Speed(SpeedUp);
		}
	
	}
	if(CastleUp==1){
		people[15]->Maxhp(500);
		
		CastleUp=2;
	}
	else if(CastleUp==3){
		people[15]->Maxhp(1000);
		
		CastleUp=4;
	}



	


	if(golddel==0){
		Enemygold+=2;
		gold+=2;
		golddel=60;
	}

	for(int i=0;i<15;i++)
	{
		if(people[i]!=NULL&&AttackUp==1){
			people[i]->AttackUp(AttackUp);
			
		}
		else if(people[i]!=NULL&&AttackUp==2){
			people[i]->AttackUp(AttackUp);
		
		}
		else if(people[i]!=NULL&&AttackUp==3){
			people[i]->AttackUp(AttackUp);
	
		}
	}
	for(int i=0;i<15;i++)
	{
		if(enemypeople[i]!=NULL&&EnemyAttackUp==1){
			enemypeople[i]->AttackUp(EnemyAttackUp);
			
		}
		else if(enemypeople[i]!=NULL&&EnemyAttackUp==2){
			enemypeople[i]->AttackUp(EnemyAttackUp);
		
		}
		else if(enemypeople[i]!=NULL&&EnemyAttackUp==3){
			enemypeople[i]->AttackUp(EnemyAttackUp);
	
		}
	}
	for(int i=0;i<15;i++)
	{
		if(people[i]!=NULL&&ShieldUp==1){
			people[i]->ShieldUp(ShieldUp);
			
		}
		else if(people[i]!=NULL&&ShieldUp==2){
			people[i]->ShieldUp(ShieldUp);
		
		}
		else if(people[i]!=NULL&&ShieldUp==3){
			people[i]->ShieldUp(ShieldUp);
		
		}
	}
	for(int i=0;i<15;i++)
	{
		if(enemypeople[i]!=NULL&&EnemyShieldUp==1){
			enemypeople[i]->ShieldUp(EnemyShieldUp);
			
		}
		else if(enemypeople[i]!=NULL&&EnemyShieldUp==2){
			enemypeople[i]->ShieldUp(EnemyShieldUp);
		
		}
		else if(enemypeople[i]!=NULL&&EnemyShieldUp==3){
			enemypeople[i]->ShieldUp(EnemyShieldUp);
		
		}
	}
	////////////////////////////////////

	if(MoneyUp==1){
		if(golddel==0){	
			gold+=2;
		}
	}
	else if(MoneyUp==2){
		if(golddel==0){	
			gold+=4;
		}
	}
	else if(MoneyUp>=3){
		if(golddel==0){	
			gold+=6;
		}
	}



	/*
	if(rand()%check==0){
		if(EnemyWarriorcool<=0){
			for(int i=0;i<16;i++)
			{
				if(EnemyUnitCount>=1)
					check=60*EnemyUnitCount;
				if(enemypeople[i]==NULL&&Enemygold>=20)
				{
					enemypeople[i]=new cEnemyWarrior(Enemyfirst_fX);
					EnemyUnitCount++;
					Enemygold-=20;
					EnemyWarriorcool=1000;
					break;
				}
			}
		}
	}*/
/////////////////////////////�ΰ�����
	switch(EnemyWarrior)
	{
	case 0:
		{
			if(rand()%check==0){
				if(EnemyWarriorcool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=20)
						{
							enemypeople[i]=new cEnemyWarrior(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=20;
							EnemyWarriorcool=1000;
							break;
						}
					}
				}
			}break;
		}
	case 1:
		{
			if(rand()%check==0){
				if(EnemyWarriorcool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=40)
						{
							enemypeople[i]=new cEnemyDefender(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=40;
							EnemyWarriorcool=1000;
							break;
						}
					}
				}
			}break;
		}
	case 2:
		{
			if(rand()%check==0){
				if(EnemyWarriorcool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=40)
						{
							enemypeople[i]=new cEnemySwordmaster(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=40;
							EnemyWarriorcool=1000;
							break;
						}
					}
				}
			}break;
		}
	}
	switch(EnemyArcher)
	{
	case 0:
		{
			if(rand()%check==0){
				if(EnemyArchercool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=30)
						{
							enemypeople[i]=new cEnemyArcher(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=30;
							EnemyArchercool=1000;
							break;
						}
					}
				}
			}break;
		}
	case 1:
		{
			if(rand()%check==0){
				if(EnemyArchercool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=50)
						{
							enemypeople[i]=new cEnemyEliteArcher(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=50;
							EnemyArchercool=1000;
							break;
						}
					}
				}
			}break;
		}
	case 2:
		{
			if(rand()%check==0){
				if(EnemyArchercool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=45)
						{
							enemypeople[i]=new cEnemySniper(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=45;
							EnemyArchercool=1000;
							break;
						}
					}
				}
			}break;
		}
	}

	/*
	if(rand()%check==0){
		if(EnemyArchercool<=0){
			for(int i=0;i<16;i++)
			{
				if(EnemyUnitCount>=1)
					check=60*EnemyUnitCount;
				if(enemypeople[i]==NULL&&Enemygold>=30)
				{
					enemypeople[i]=new cEnemyArcher(Enemyfirst_fX);
					EnemyUnitCount++;
					Enemygold-=30;
					EnemyArchercool=1000;				
					break;

				}
			}
		}
	}*/
	switch(EnemyMagician)
	{
	case 0:
		{
			if(rand()%check==0){
				if(EnemyMagiciancool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=40)
						{
							enemypeople[i]=new cEnemyMagician(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=40;
							EnemyMagiciancool=1000;
							break;
						}
					}
				}
			}break;
		}
	case 1:
		{
			if(rand()%check==0){
				if(EnemyMagiciancool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=50)
						{
							enemypeople[i]=new cEnemyColdWizard(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=50;
							EnemyMagiciancool=1000;
							break;
						}
					}
				}
			}break;
		}
	case 2:
		{
			if(rand()%check==0){
				if(EnemyMagiciancool<=0){
					for(int i=0;i<16;i++)
					{
						if(EnemyUnitCount>=1)
							check=60*EnemyUnitCount;
						if(enemypeople[i]==NULL&&Enemygold>=60)
						{
							enemypeople[i]=new cEnemyFireMagician(Enemyfirst_fX);
							EnemyUnitCount++;
							Enemygold-=60;
							EnemyMagiciancool=1000;
							break;
						}
					}
				}
			}break;
		}
	}

	if(rand()%1500==0){
		if(Enemygold>=150){
			if(rand()%3==0){
				if(EnemyAttackUp<=3)
					EnemyAttackUp++;
			}
			if(rand()%4==0){
				if(EnemyShieldUp<=3)
					EnemyShieldUp++;
			
			}
						
		}

	}


	if(rand()%300==0){
		if(Enemygold>=200){
			if(EnemyWarrior==0&&rand()%3==0){
				if(rand()%2){
					EnemyWarrior=1;
					Enemygold-=200;

				}

				else{
					EnemyWarrior=2;
					Enemygold-=200;
				}
			}
			else if(EnemyArcher==0&&rand()%3==0){
				if(rand()%2){
					EnemyArcher=1;
					Enemygold-=200;
				}
				else{
					EnemyArcher=2;
					Enemygold-=200;
				}
			}
			else if(EnemyMagician==0&&rand()%3==0){
				if(rand()%2){
					EnemyMagician=1;
					Enemygold-=200;
				}
				else{
					EnemyMagician=2;
					Enemygold-=200;
				}
			}
		}
	}


	/*
	if(rand()%check==0){
		if(EnemyMagiciancool<=0){
			for(int i=0;i<16;i++)
			{
				if(EnemyUnitCount>=1)
					check=60*EnemyUnitCount;
				if(enemypeople[i]==NULL&&Enemygold>=40)
				{
					enemypeople[i]=new cEnemyMagician(Enemyfirst_fX);
					EnemyUnitCount++;
					Enemygold-=40;
					EnemyMagiciancool=1000;
					break;
				}
			}
		}
	}*/


	


	for(int i=0;i<16;i++)
	{
		if(people[i]!=NULL)
		{
			if(people[i]->Return_HP()<=0 && people[i]->GetDead()==false)
			{
				people[i]->Dead();
			}
			if(EnemyUnitIt)
			{
				for(int j=0;j<16;j++)
				{
					if(enemypeople[j]==NULL)
						continue;
					if(enemypeople[j]->GetX()-people[i]->GetX()<=people[i]->Return_AttackRange() && people[i]->Return_CanAttack())
					{						
						people[i]->Attack(enemypeople[j]);
					}
					else if(enemypeople[j]->GetX()-people[i]->GetX()>=people[i]->Return_AttackRange() && people[i]->GetX()<=EndofMove_X && enemypeople[j]->GetX()-people[i]->GetX()>=50 && BeforemyUnit_fX-people[i]->GetX()>=50) 
					{
						people[i]->Move();
					}
					BeforemyUnit_fX=people[i]->GetX();

				}
			}
			else
			{
				if(people[i]->GetX()<=EndofMove_X && BeforemyUnit_fX-people[i]->GetX()>=50) 
				{
					people[i]->Move();
				}
				BeforemyUnit_fX=people[i]->GetX();
			}
			people[i]->AttackCheck();
		}
	}
	BeforemyUnit_fX=EndofMove_X;


	for(int i=0;i<16;i++)
	{
		if(enemypeople[i]!=NULL)
		{
			if(enemypeople[i]->Return_HP()<=0)
			{
				enemypeople[i]->Dead();
			}
			else if(MyUnitIt)
			{
				for(int j=0;j<16;j++)
				{
					if(people[j]==NULL)
						continue;
					if(enemypeople[i]->GetX()-people[j]->GetX()<=enemypeople[i]->Return_AttackRange() && enemypeople[i]->Return_CanAttack())
					{
						enemypeople[i]->Attack(people[j]);
					}
					else if(enemypeople[i]->GetX()-people[j]->GetX()>=enemypeople[i]->Return_AttackRange() && enemypeople[i]->GetX()>=EnemyEndofMove_X && enemypeople[i]->GetX()-people[j]->GetX()>=50 && enemypeople[i]->GetX()-BeforeEnemyUnit_fX>=50) 
					{
						enemypeople[i]->Move();
					}
					BeforeEnemyUnit_fX=enemypeople[i]->GetX();
				}
			}
			else
			{
				if(enemypeople[i]->GetX()>=EnemyEndofMove_X && enemypeople[i]->GetX()-BeforeEnemyUnit_fX>=50) 
					enemypeople[i]->Move();
				BeforeEnemyUnit_fX=enemypeople[i]->GetX();
			}
			enemypeople[i]->AttackCheck();
		}
	}
	BeforeEnemyUnit_fX=EnemyEndofMove_X;

	if((MapX>=-60 && IsKeyPressed(DIK_RIGHT))||(MapX>=-60 && GetMouseXPos()>=1004 && GetMouseXPos()<=1024))
	{
		MapX-=10;
		for(int i=0;i<16;i++)
		{
			if(people[i]==NULL)
				continue;
			else
				people[i]->MouseRightMove();
		}
		for(int i=0;i<16;i++)
		{
			if(enemypeople[i]==NULL)
				continue;
			else
				enemypeople[i]->MouseRightMove();
		}

		first_fX-=10;
		EndofMove_X-=10;
		Enemyfirst_fX-=10;
		EnemyEndofMove_X-=10;
	}

	if((MapX<=1090 && IsKeyPressed(DIK_LEFT) )|| (MapX<=1090 && GetMouseXPos()>=0 && GetMouseXPos()<=20))
	{
		MapX+=10;
		for(int i=0;i<16;i++)
		{
			if(people[i]==NULL)
				continue;
			else
				people[i]->MouseLeftMove();
		}
		for(int i=0;i<16;i++)
		{
			if(enemypeople[i]==NULL)
				continue;
			else
				enemypeople[i]->MouseLeftMove();
		}

		first_fX+=10;
		EndofMove_X+=10;
		Enemyfirst_fX+=10;
		EnemyEndofMove_X+=10;
	}




	for(int i=0;i<16;i++)
	{
		if(people[i]!=NULL && people[i]->GetAllTheEnd())
		{
			MyUnitCount--;
			if(people[i]->Return_Job()==0)
					Enemygold+=16;
				if(people[i]->Return_Job()==1)
					Enemygold+=24;
				if(people[i]->Return_Job()==2)
					Enemygold+=32;
				if(people[i]->Return_Job()==3)
					Enemygold+=32;
				if(people[i]->Return_Job()==4)
					Enemygold+=32;
				if(people[i]->Return_Job()==5)
					Enemygold+=40;
				if(people[i]->Return_Job()==6)
					Enemygold+=36;
				if(people[i]->Return_Job()==7)
					Enemygold+=40;
				if(people[i]->Return_Job()==8)
					Enemygold+=48;
			people[i]=NULL;
		}
	}
	for(int i=0;i<16;i++)
	{
		if(enemypeople[i]!=NULL && enemypeople[i]->GetAllTheEnd())
		{			
			EnemyUnitCount--;
			if(enemypeople[i]->Return_Job()==0)
					gold+=16;
				if(enemypeople[i]->Return_Job()==1)
					gold+=24;
				if(enemypeople[i]->Return_Job()==2)
					gold+=32;
				if(enemypeople[i]->Return_Job()==3)
					gold+=32;
				if(enemypeople[i]->Return_Job()==4)
					gold+=32;
				if(enemypeople[i]->Return_Job()==5)
					gold+=40;
				if(enemypeople[i]->Return_Job()==6)
					gold+=36;
				if(enemypeople[i]->Return_Job()==7)
					gold+=40;
				if(enemypeople[i]->Return_Job()==8)
					gold+=48;
			enemypeople[i]=NULL;
		}
	}













	if(EnemyWarriorcool!=0)
		EnemyWarriorcool--;
	if(EnemyArchercool!=0)
		EnemyArchercool--;
	if(EnemyMagiciancool!=0)
		EnemyMagiciancool--;
	if(golddel!=0)
		golddel--;


	if(Warriorcool!=0)
		Warriorcool--;
	switch(Warriorcool/10)
	{
	case 0:RectWarriorCool.right=65; RectWarriorCool.top=0;  WarriorCoolX=27.5-10;break;
	case 1:RectWarriorCool.right=65; RectWarriorCool.top=1; WarriorCoolX=28-10;break;
	case 2:RectWarriorCool.right=65; RectWarriorCool.top=2; WarriorCoolX=28.5-10;break;
	case 3:RectWarriorCool.right=65; RectWarriorCool.top=3; WarriorCoolX=29-10;break;
	case 4:RectWarriorCool.right=65; RectWarriorCool.top=4; WarriorCoolX=29.5-10;break;
	case 5:RectWarriorCool.right=65; RectWarriorCool.top=5; WarriorCoolX=30-10;break;
	case 6:RectWarriorCool.right=65; RectWarriorCool.top=6; WarriorCoolX=30.5-10;break;
	case 7:RectWarriorCool.right=65; RectWarriorCool.top=7; WarriorCoolX=31-10;break;
	case 8:RectWarriorCool.right=65; RectWarriorCool.top=8; WarriorCoolX=31.5-10;break;
	case 9:RectWarriorCool.right=65; RectWarriorCool.top=9; WarriorCoolX=32-10;break;
	case 10:RectWarriorCool.right=65; RectWarriorCool.top=10; WarriorCoolX=32.5-10;break;
	case 11:RectWarriorCool.right=65; RectWarriorCool.top=11; WarriorCoolX=33-10;break;
	case 12:RectWarriorCool.right=65; RectWarriorCool.top=12; WarriorCoolX=33.5-10;break;
	case 13:RectWarriorCool.right=65; RectWarriorCool.top=13; WarriorCoolX=34-10;break;
	case 14:RectWarriorCool.right=65; RectWarriorCool.top=14; WarriorCoolX=34.5-10;break;
	case 15:RectWarriorCool.right=65; RectWarriorCool.top=15; WarriorCoolX=35-10;break;
	case 16:RectWarriorCool.right=65; RectWarriorCool.top=16; WarriorCoolX=35.5-10;break;
	case 17:RectWarriorCool.right=65; RectWarriorCool.top=17; WarriorCoolX=36-10;break;
	case 18:RectWarriorCool.right=65; RectWarriorCool.top=18; WarriorCoolX=36.5-10;break;
	case 19:RectWarriorCool.right=65; RectWarriorCool.top=19; WarriorCoolX=37-10;break;
	case 20:RectWarriorCool.right=65; RectWarriorCool.top=20; WarriorCoolX=37.5-10;break;
	case 21:RectWarriorCool.right=65; RectWarriorCool.top=21; WarriorCoolX=38-10;break;
	case 22:RectWarriorCool.right=65; RectWarriorCool.top=22; WarriorCoolX=38.5-10;break;
	case 23:RectWarriorCool.right=65; RectWarriorCool.top=23; WarriorCoolX=39-10;break;
	case 24:RectWarriorCool.right=65; RectWarriorCool.top=24; WarriorCoolX=39.5-10;break;
	case 25:RectWarriorCool.right=65; RectWarriorCool.top=25; WarriorCoolX=40-10;break;
	case 26:RectWarriorCool.right=65; RectWarriorCool.top=26; WarriorCoolX=40.5-10;break;
	case 27:RectWarriorCool.right=65; RectWarriorCool.top=27; WarriorCoolX=41-10;break;
	case 28:RectWarriorCool.right=65; RectWarriorCool.top=28; WarriorCoolX=41.5-10;break;
	case 29:RectWarriorCool.right=65; RectWarriorCool.top=29; WarriorCoolX=42-10;break;
	case 30:RectWarriorCool.right=65; RectWarriorCool.top=30; WarriorCoolX=42.5-10;break;
	case 31:RectWarriorCool.right=65; RectWarriorCool.top=31; WarriorCoolX=43-10;break;
	case 32:RectWarriorCool.right=65; RectWarriorCool.top=32; WarriorCoolX=43.5-10;break;
	case 33:RectWarriorCool.right=65; RectWarriorCool.top=33; WarriorCoolX=44-10;break;
	case 34:RectWarriorCool.right=65; RectWarriorCool.top=34; WarriorCoolX=44.5-10;break;
	case 35:RectWarriorCool.right=65; RectWarriorCool.top=35; WarriorCoolX=45-10;break;
	case 36:RectWarriorCool.right=65; RectWarriorCool.top=36; WarriorCoolX=45.5-10;break;
	case 37:RectWarriorCool.right=65; RectWarriorCool.top=37; WarriorCoolX=46-10;break;
	case 38:RectWarriorCool.right=65; RectWarriorCool.top=38; WarriorCoolX=46.5-10;break;
	case 39:RectWarriorCool.right=65; RectWarriorCool.top=39; WarriorCoolX=47-10;break;
	case 40:RectWarriorCool.right=65; RectWarriorCool.top=40; WarriorCoolX=47.5-10;break;
	case 41:RectWarriorCool.right=65; RectWarriorCool.top=41; WarriorCoolX=48-10;break;
	case 42:RectWarriorCool.right=65; RectWarriorCool.top=42; WarriorCoolX=48.5-10;break;
	case 43:RectWarriorCool.right=65; RectWarriorCool.top=43; WarriorCoolX=49-10;break;
	case 44:RectWarriorCool.right=65; RectWarriorCool.top=44; WarriorCoolX=49.5-10;break;
	case 45:RectWarriorCool.right=65; RectWarriorCool.top=45; WarriorCoolX=50-10;break;
	case 46:RectWarriorCool.right=65; RectWarriorCool.top=46; WarriorCoolX=50.5-10;break;
	case 47:RectWarriorCool.right=65; RectWarriorCool.top=47; WarriorCoolX=51-10;break;
	case 48:RectWarriorCool.right=65; RectWarriorCool.top=48; WarriorCoolX=51.5-10;break;
	case 49:RectWarriorCool.right=65; RectWarriorCool.top=49; WarriorCoolX=52-10;break;
	case 50:RectWarriorCool.right=65; RectWarriorCool.top=50; WarriorCoolX=52.5-10;break;
	case 51:RectWarriorCool.right=65; RectWarriorCool.top=51; WarriorCoolX=53-10;break;
	case 52:RectWarriorCool.right=65; RectWarriorCool.top=52; WarriorCoolX=53.5-10;break;
	case 53:RectWarriorCool.right=65; RectWarriorCool.top=53; WarriorCoolX=54-10;break;
	case 54:RectWarriorCool.right=65; RectWarriorCool.top=54; WarriorCoolX=54.5-10;break;
	case 55:RectWarriorCool.right=65; RectWarriorCool.top=55; WarriorCoolX=55-10;break;
	case 56:RectWarriorCool.right=65; RectWarriorCool.top=56; WarriorCoolX=55.5-10;break;
	case 57:RectWarriorCool.right=65; RectWarriorCool.top=57; WarriorCoolX=56-10;break;
	case 58:RectWarriorCool.right=65; RectWarriorCool.top=58; WarriorCoolX=56.5-10;break;
	case 59:RectWarriorCool.right=65; RectWarriorCool.top=59; WarriorCoolX=57-10;break;
	case 60:RectWarriorCool.right=65; RectWarriorCool.top=60; WarriorCoolX=57.5-10;break;
	case 61:RectWarriorCool.right=65; RectWarriorCool.top=61; WarriorCoolX=58-10;break;
	case 62:RectWarriorCool.right=65; RectWarriorCool.top=62; WarriorCoolX=58.5-10;break;
	case 63:RectWarriorCool.right=65; RectWarriorCool.top=63; WarriorCoolX=59-10;break;
	case 64:RectWarriorCool.right=65; RectWarriorCool.top=64; WarriorCoolX=59.5-10;break;
	case 65:RectWarriorCool.right=65; RectWarriorCool.top=65; WarriorCoolX=60-10;break;
	}




	if(Archercool!=0)
		Archercool--;
	switch(Archercool/10)
	{
	case 0:RectArcherCool.right=65; RectArcherCool.top=0;  ArcherCoolX=27.5-10;break;
	case 1:RectArcherCool.right=65; RectArcherCool.top=1; ArcherCoolX=28-10;break;
	case 2:RectArcherCool.right=65; RectArcherCool.top=2; ArcherCoolX=28.5-10;break;
	case 3:RectArcherCool.right=65; RectArcherCool.top=3; ArcherCoolX=29-10;break;
	case 4:RectArcherCool.right=65; RectArcherCool.top=4; ArcherCoolX=29.5-10;break;
	case 5:RectArcherCool.right=65; RectArcherCool.top=5; ArcherCoolX=30-10;break;
	case 6:RectArcherCool.right=65; RectArcherCool.top=6; ArcherCoolX=30.5-10;break;
	case 7:RectArcherCool.right=65; RectArcherCool.top=7; ArcherCoolX=31-10;break;
	case 8:RectArcherCool.right=65; RectArcherCool.top=8; ArcherCoolX=31.5-10;break;
	case 9:RectArcherCool.right=65; RectArcherCool.top=9; ArcherCoolX=32-10;break;
	case 10:RectArcherCool.right=65; RectArcherCool.top=10; ArcherCoolX=32.5-10;break;
	case 11:RectArcherCool.right=65; RectArcherCool.top=11; ArcherCoolX=33-10;break;
	case 12:RectArcherCool.right=65; RectArcherCool.top=12; ArcherCoolX=33.5-10;break;
	case 13:RectArcherCool.right=65; RectArcherCool.top=13; ArcherCoolX=34-10;break;
	case 14:RectArcherCool.right=65; RectArcherCool.top=14; ArcherCoolX=34.5-10;break;
	case 15:RectArcherCool.right=65; RectArcherCool.top=15; ArcherCoolX=35-10;break;
	case 16:RectArcherCool.right=65; RectArcherCool.top=16; ArcherCoolX=35.5-10;break;
	case 17:RectArcherCool.right=65; RectArcherCool.top=17; ArcherCoolX=36-10;break;
	case 18:RectArcherCool.right=65; RectArcherCool.top=18; ArcherCoolX=36.5-10;break;
	case 19:RectArcherCool.right=65; RectArcherCool.top=19; ArcherCoolX=37-10;break;
	case 20:RectArcherCool.right=65; RectArcherCool.top=20; ArcherCoolX=37.5-10;break;
	case 21:RectArcherCool.right=65; RectArcherCool.top=21; ArcherCoolX=38-10;break;
	case 22:RectArcherCool.right=65; RectArcherCool.top=22; ArcherCoolX=38.5-10;break;
	case 23:RectArcherCool.right=65; RectArcherCool.top=23; ArcherCoolX=39-10;break;
	case 24:RectArcherCool.right=65; RectArcherCool.top=24; ArcherCoolX=39.5-10;break;
	case 25:RectArcherCool.right=65; RectArcherCool.top=25; ArcherCoolX=40-10;break;
	case 26:RectArcherCool.right=65; RectArcherCool.top=26; ArcherCoolX=40.5-10;break;
	case 27:RectArcherCool.right=65; RectArcherCool.top=27; ArcherCoolX=41-10;break;
	case 28:RectArcherCool.right=65; RectArcherCool.top=28; ArcherCoolX=41.5-10;break;
	case 29:RectArcherCool.right=65; RectArcherCool.top=29; ArcherCoolX=42-10;break;
	case 30:RectArcherCool.right=65; RectArcherCool.top=30; ArcherCoolX=42.5-10;break;
	case 31:RectArcherCool.right=65; RectArcherCool.top=31; ArcherCoolX=43-10;break;
	case 32:RectArcherCool.right=65; RectArcherCool.top=32; ArcherCoolX=43.5-10;break;
	case 33:RectArcherCool.right=65; RectArcherCool.top=33; ArcherCoolX=44-10;break;
	case 34:RectArcherCool.right=65; RectArcherCool.top=34; ArcherCoolX=44.5-10;break;
	case 35:RectArcherCool.right=65; RectArcherCool.top=35; ArcherCoolX=45-10;break;
	case 36:RectArcherCool.right=65; RectArcherCool.top=36; ArcherCoolX=45.5-10;break;
	case 37:RectArcherCool.right=65; RectArcherCool.top=37; ArcherCoolX=46-10;break;
	case 38:RectArcherCool.right=65; RectArcherCool.top=38; ArcherCoolX=46.5-10;break;
	case 39:RectArcherCool.right=65; RectArcherCool.top=39; ArcherCoolX=47-10;break;
	case 40:RectArcherCool.right=65; RectArcherCool.top=40; ArcherCoolX=47.5-10;break;
	case 41:RectArcherCool.right=65; RectArcherCool.top=41; ArcherCoolX=48-10;break;
	case 42:RectArcherCool.right=65; RectArcherCool.top=42; ArcherCoolX=48.5-10;break;
	case 43:RectArcherCool.right=65; RectArcherCool.top=43; ArcherCoolX=49-10;break;
	case 44:RectArcherCool.right=65; RectArcherCool.top=44; ArcherCoolX=49.5-10;break;
	case 45:RectArcherCool.right=65; RectArcherCool.top=45; ArcherCoolX=50-10;break;
	case 46:RectArcherCool.right=65; RectArcherCool.top=46; ArcherCoolX=50.5-10;break;
	case 47:RectArcherCool.right=65; RectArcherCool.top=47; ArcherCoolX=51-10;break;
	case 48:RectArcherCool.right=65; RectArcherCool.top=48; ArcherCoolX=51.5-10;break;
	case 49:RectArcherCool.right=65; RectArcherCool.top=49; ArcherCoolX=52-10;break;
	case 50:RectArcherCool.right=65; RectArcherCool.top=50; ArcherCoolX=52.5-10;break;
	case 51:RectArcherCool.right=65; RectArcherCool.top=51; ArcherCoolX=53-10;break;
	case 52:RectArcherCool.right=65; RectArcherCool.top=52; ArcherCoolX=53.5-10;break;
	case 53:RectArcherCool.right=65; RectArcherCool.top=53; ArcherCoolX=54-10;break;
	case 54:RectArcherCool.right=65; RectArcherCool.top=54; ArcherCoolX=54.5-10;break;
	case 55:RectArcherCool.right=65; RectArcherCool.top=55; ArcherCoolX=55-10;break;
	case 56:RectArcherCool.right=65; RectArcherCool.top=56; ArcherCoolX=55.5-10;break;
	case 57:RectArcherCool.right=65; RectArcherCool.top=57; ArcherCoolX=56-10;break;
	case 58:RectArcherCool.right=65; RectArcherCool.top=58; ArcherCoolX=56.5-10;break;
	case 59:RectArcherCool.right=65; RectArcherCool.top=59; ArcherCoolX=57-10;break;
	case 60:RectArcherCool.right=65; RectArcherCool.top=60; ArcherCoolX=57.5-10;break;
	case 61:RectArcherCool.right=65; RectArcherCool.top=61; ArcherCoolX=58-10;break;
	case 62:RectArcherCool.right=65; RectArcherCool.top=62; ArcherCoolX=58.5-10;break;
	case 63:RectArcherCool.right=65; RectArcherCool.top=63; ArcherCoolX=59-10;break;
	case 64:RectArcherCool.right=65; RectArcherCool.top=64; ArcherCoolX=59.5-10;break;
	case 65:RectArcherCool.right=65; RectArcherCool.top=65; ArcherCoolX=60-10;break;
	}




	if(Magiciancool!=0)
		Magiciancool--;
	switch(Magiciancool/10)
	{
	case 0:RectMagicianCool.right=65; RectMagicianCool.top=0;  MagicianCoolX=27.5-10;break;
	case 1:RectMagicianCool.right=65; RectMagicianCool.top=1; MagicianCoolX=28-10;break;
	case 2:RectMagicianCool.right=65; RectMagicianCool.top=2; MagicianCoolX=28.5-10;break;
	case 3:RectMagicianCool.right=65; RectMagicianCool.top=3; MagicianCoolX=29-10;break;
	case 4:RectMagicianCool.right=65; RectMagicianCool.top=4; MagicianCoolX=29.5-10;break;
	case 5:RectMagicianCool.right=65; RectMagicianCool.top=5; MagicianCoolX=30-10;break;
	case 6:RectMagicianCool.right=65; RectMagicianCool.top=6; MagicianCoolX=30.5-10;break;
	case 7:RectMagicianCool.right=65; RectMagicianCool.top=7; MagicianCoolX=31-10;break;
	case 8:RectMagicianCool.right=65; RectMagicianCool.top=8; MagicianCoolX=31.5-10;break;
	case 9:RectMagicianCool.right=65; RectMagicianCool.top=9; MagicianCoolX=32-10;break;
	case 10:RectMagicianCool.right=65; RectMagicianCool.top=10; MagicianCoolX=32.5-10;break;
	case 11:RectMagicianCool.right=65; RectMagicianCool.top=11; MagicianCoolX=33-10;break;
	case 12:RectMagicianCool.right=65; RectMagicianCool.top=12; MagicianCoolX=33.5-10;break;
	case 13:RectMagicianCool.right=65; RectMagicianCool.top=13; MagicianCoolX=34-10;break;
	case 14:RectMagicianCool.right=65; RectMagicianCool.top=14; MagicianCoolX=34.5-10;break;
	case 15:RectMagicianCool.right=65; RectMagicianCool.top=15; MagicianCoolX=35-10;break;
	case 16:RectMagicianCool.right=65; RectMagicianCool.top=16; MagicianCoolX=35.5-10;break;
	case 17:RectMagicianCool.right=65; RectMagicianCool.top=17; MagicianCoolX=36-10;break;
	case 18:RectMagicianCool.right=65; RectMagicianCool.top=18; MagicianCoolX=36.5-10;break;
	case 19:RectMagicianCool.right=65; RectMagicianCool.top=19; MagicianCoolX=37-10;break;
	case 20:RectMagicianCool.right=65; RectMagicianCool.top=20; MagicianCoolX=37.5-10;break;
	case 21:RectMagicianCool.right=65; RectMagicianCool.top=21; MagicianCoolX=38-10;break;
	case 22:RectMagicianCool.right=65; RectMagicianCool.top=22; MagicianCoolX=38.5-10;break;
	case 23:RectMagicianCool.right=65; RectMagicianCool.top=23; MagicianCoolX=39-10;break;
	case 24:RectMagicianCool.right=65; RectMagicianCool.top=24; MagicianCoolX=39.5-10;break;
	case 25:RectMagicianCool.right=65; RectMagicianCool.top=25; MagicianCoolX=40-10;break;
	case 26:RectMagicianCool.right=65; RectMagicianCool.top=26; MagicianCoolX=40.5-10;break;
	case 27:RectMagicianCool.right=65; RectMagicianCool.top=27; MagicianCoolX=41-10;break;
	case 28:RectMagicianCool.right=65; RectMagicianCool.top=28; MagicianCoolX=41.5-10;break;
	case 29:RectMagicianCool.right=65; RectMagicianCool.top=29; MagicianCoolX=42-10;break;
	case 30:RectMagicianCool.right=65; RectMagicianCool.top=30; MagicianCoolX=42.5-10;break;
	case 31:RectMagicianCool.right=65; RectMagicianCool.top=31; MagicianCoolX=43-10;break;
	case 32:RectMagicianCool.right=65; RectMagicianCool.top=32; MagicianCoolX=43.5-10;break;
	case 33:RectMagicianCool.right=65; RectMagicianCool.top=33; MagicianCoolX=44-10;break;
	case 34:RectMagicianCool.right=65; RectMagicianCool.top=34; MagicianCoolX=44.5-10; break;
	case 35:RectMagicianCool.right=65; RectMagicianCool.top=35; MagicianCoolX=45-10;break;
	case 36:RectMagicianCool.right=65; RectMagicianCool.top=36; MagicianCoolX=45.5-10;break;
	case 37:RectMagicianCool.right=65; RectMagicianCool.top=37; MagicianCoolX=46-10; break;
	case 38:RectMagicianCool.right=65; RectMagicianCool.top=38; MagicianCoolX=46.5-10;break;
	case 39:RectMagicianCool.right=65; RectMagicianCool.top=39; MagicianCoolX=47-10;break;
	case 40:RectMagicianCool.right=65; RectMagicianCool.top=40; MagicianCoolX=47.5-10;break;
	case 41:RectMagicianCool.right=65; RectMagicianCool.top=41; MagicianCoolX=48-10;break;
	case 42:RectMagicianCool.right=65; RectMagicianCool.top=42; MagicianCoolX=48.5-10;break;
	case 43:RectMagicianCool.right=65; RectMagicianCool.top=43; MagicianCoolX=49-10;break;
	case 44:RectMagicianCool.right=65; RectMagicianCool.top=44; MagicianCoolX=49.5-10; break;
	case 45:RectMagicianCool.right=65; RectMagicianCool.top=45; MagicianCoolX=50-10;break;
	case 46:RectMagicianCool.right=65; RectMagicianCool.top=46; MagicianCoolX=50.5-10;break;
	case 47:RectMagicianCool.right=65; RectMagicianCool.top=47; MagicianCoolX=51-10;break;
	case 48:RectMagicianCool.right=65; RectMagicianCool.top=48; MagicianCoolX=51.5-10;break;
	case 49:RectMagicianCool.right=65; RectMagicianCool.top=49; MagicianCoolX=52-10;break;
	case 50:RectMagicianCool.right=65; RectMagicianCool.top=50; MagicianCoolX=52.5-10;break;
	case 51:RectMagicianCool.right=65; RectMagicianCool.top=51; MagicianCoolX=53-10;break;
	case 52:RectMagicianCool.right=65; RectMagicianCool.top=52; MagicianCoolX=53.5-10;break;
	case 53:RectMagicianCool.right=65; RectMagicianCool.top=53; MagicianCoolX=54-10;break;
	case 54:RectMagicianCool.right=65; RectMagicianCool.top=54; MagicianCoolX=54.5-10;break;
	case 55:RectMagicianCool.right=65; RectMagicianCool.top=55; MagicianCoolX=55-10;break;
	case 56:RectMagicianCool.right=65; RectMagicianCool.top=56; MagicianCoolX=55.5-10;break;
	case 57:RectMagicianCool.right=65; RectMagicianCool.top=57; MagicianCoolX=56-10;break;
	case 58:RectMagicianCool.right=65; RectMagicianCool.top=58; MagicianCoolX=56.5-10;break;
	case 59:RectMagicianCool.right=65; RectMagicianCool.top=59; MagicianCoolX=57-10;break;
	case 60:RectMagicianCool.right=65; RectMagicianCool.top=60; MagicianCoolX=57.5-10;break;
	case 61:RectMagicianCool.right=65; RectMagicianCool.top=61; MagicianCoolX=58-10;break;
	case 62:RectMagicianCool.right=65; RectMagicianCool.top=62; MagicianCoolX=58.5-10;break;
	case 63:RectMagicianCool.right=65; RectMagicianCool.top=63; MagicianCoolX=59-10;break;
	case 64:RectMagicianCool.right=65; RectMagicianCool.top=64; MagicianCoolX=59.5-10;break;
	case 65:RectMagicianCool.right=65; RectMagicianCool.top=65; WarriorCoolX=60-10;break;
	}




	if(Priestcool!=0)
		Priestcool--;
	switch(Priestcool/10)
	{
	case 0:RectPriestCool.right=65; RectPriestCool.top=0;  PriestCoolX=27.5-10;break;
	case 1:RectPriestCool.right=65; RectPriestCool.top=1; PriestCoolX=28-10;break;
	case 2:RectPriestCool.right=65; RectPriestCool.top=2; PriestCoolX=28.5-10;break;
	case 3:RectPriestCool.right=65; RectPriestCool.top=3; PriestCoolX=29-10;break;
	case 4:RectPriestCool.right=65; RectPriestCool.top=4; PriestCoolX=29.5-10;break;
	case 5:RectPriestCool.right=65; RectPriestCool.top=5; PriestCoolX=30-10;break;
	case 6:RectPriestCool.right=65; RectPriestCool.top=6; PriestCoolX=30.5-10;break;
	case 7:RectPriestCool.right=65; RectPriestCool.top=7; PriestCoolX=31-10;break;
	case 8:RectPriestCool.right=65; RectPriestCool.top=8; PriestCoolX=31.5-10;break;
	case 9:RectPriestCool.right=65; RectPriestCool.top=9; PriestCoolX=32-10;break;
	case 10:RectPriestCool.right=65; RectPriestCool.top=10; PriestCoolX=32.5-10;break;
	case 11:RectPriestCool.right=65; RectPriestCool.top=11; PriestCoolX=33-10;break;
	case 12:RectPriestCool.right=65; RectPriestCool.top=12; PriestCoolX=33.5-10;break;
	case 13:RectPriestCool.right=65; RectPriestCool.top=13; PriestCoolX=34-10;break;
	case 14:RectPriestCool.right=65; RectPriestCool.top=14; PriestCoolX=34.5-10;break;
	case 15:RectPriestCool.right=65; RectPriestCool.top=15; PriestCoolX=35-10;break;
	case 16:RectPriestCool.right=65; RectPriestCool.top=16; PriestCoolX=35.5-10;break;
	case 17:RectPriestCool.right=65; RectPriestCool.top=17; PriestCoolX=36-10;break;
	case 18:RectPriestCool.right=65; RectPriestCool.top=18; PriestCoolX=36.5-10;break;
	case 19:RectPriestCool.right=65; RectPriestCool.top=19; PriestCoolX=37-10;break;
	case 20:RectPriestCool.right=65; RectPriestCool.top=20; PriestCoolX=37.5-10;break;
	case 21:RectPriestCool.right=65; RectPriestCool.top=21; PriestCoolX=38-10;break;
	case 22:RectPriestCool.right=65; RectPriestCool.top=22; PriestCoolX=38.5-10;break;
	case 23:RectPriestCool.right=65; RectPriestCool.top=23; PriestCoolX=39-10;break;
	case 24:RectPriestCool.right=65; RectPriestCool.top=24; PriestCoolX=39.5-10;break;
	case 25:RectPriestCool.right=65; RectPriestCool.top=25; PriestCoolX=40-10;break;
	case 26:RectPriestCool.right=65; RectPriestCool.top=26; PriestCoolX=40.5-10;break;
	case 27:RectPriestCool.right=65; RectPriestCool.top=27; PriestCoolX=41-10;break;
	case 28:RectPriestCool.right=65; RectPriestCool.top=28; PriestCoolX=41.5-10;break;
	case 29:RectPriestCool.right=65; RectPriestCool.top=29; PriestCoolX=42-10;break;
	case 30:RectPriestCool.right=65; RectPriestCool.top=30; PriestCoolX=42.5-10;break;
	case 31:RectPriestCool.right=65; RectPriestCool.top=31; PriestCoolX=43-10;break;
	case 32:RectPriestCool.right=65; RectPriestCool.top=32; PriestCoolX=43.5-10;break;
	case 33:RectPriestCool.right=65; RectPriestCool.top=33; PriestCoolX=44-10;break;
	case 34:RectPriestCool.right=65; RectPriestCool.top=34; PriestCoolX=44.5-10;break;
	case 35:RectPriestCool.right=65; RectPriestCool.top=35; PriestCoolX=45-10;break;
	case 36:RectPriestCool.right=65; RectPriestCool.top=36; PriestCoolX=45.5-10;break;
	case 37:RectPriestCool.right=65; RectPriestCool.top=37; PriestCoolX=46-10;break;
	case 38:RectPriestCool.right=65; RectPriestCool.top=38; PriestCoolX=46.5-10;break;
	case 39:RectPriestCool.right=65; RectPriestCool.top=39; PriestCoolX=47-10;break;
	case 40:RectPriestCool.right=65; RectPriestCool.top=40; PriestCoolX=47.5-10;break;
	case 41:RectPriestCool.right=65; RectPriestCool.top=41; PriestCoolX=48-10;break;
	case 42:RectPriestCool.right=65; RectPriestCool.top=42; PriestCoolX=48.5-10;break;
	case 43:RectPriestCool.right=65; RectPriestCool.top=43; PriestCoolX=49-10;break;
	case 44:RectPriestCool.right=65; RectPriestCool.top=44; PriestCoolX=49.5-10;break;
	case 45:RectPriestCool.right=65; RectPriestCool.top=45; PriestCoolX=50-10;break;
	case 46:RectPriestCool.right=65; RectPriestCool.top=46; PriestCoolX=50.5-10;break;
	case 47:RectPriestCool.right=65; RectPriestCool.top=47; PriestCoolX=51-10;break;
	case 48:RectPriestCool.right=65; RectPriestCool.top=48; PriestCoolX=51.5-10;break;
	case 49:RectPriestCool.right=65; RectPriestCool.top=49; PriestCoolX=52-10;break;
	case 50:RectPriestCool.right=65; RectPriestCool.top=50; PriestCoolX=52.5-10;break;
	case 51:RectPriestCool.right=65; RectPriestCool.top=51; PriestCoolX=53-10;break;
	case 52:RectPriestCool.right=65; RectPriestCool.top=52; PriestCoolX=53.5-10;break;
	case 53:RectPriestCool.right=65; RectPriestCool.top=53; PriestCoolX=54-10;break;
	case 54:RectPriestCool.right=65; RectPriestCool.top=54; PriestCoolX=54.5-10;break;
	case 55:RectPriestCool.right=65; RectPriestCool.top=55; PriestCoolX=55-10;break;
	case 56:RectPriestCool.right=65; RectPriestCool.top=56; PriestCoolX=55.5-10;break;
	case 57:RectPriestCool.right=65; RectPriestCool.top=57; PriestCoolX=56-10;break;
	case 58:RectPriestCool.right=65; RectPriestCool.top=58; PriestCoolX=56.5-10;break;
	case 59:RectPriestCool.right=65; RectPriestCool.top=59; PriestCoolX=57-10;break;
	case 60:RectPriestCool.right=65; RectPriestCool.top=60; PriestCoolX=57.5-10;break;
	case 61:RectPriestCool.right=65; RectPriestCool.top=61; PriestCoolX=58-10;break;
	case 62:RectPriestCool.right=65; RectPriestCool.top=62; PriestCoolX=58.5-10;break;
	case 63:RectPriestCool.right=65; RectPriestCool.top=63; PriestCoolX=59-10;break;
	case 64:RectPriestCool.right=65; RectPriestCool.top=64; PriestCoolX=59.5-10;break;
	case 65:RectPriestCool.right=65; RectPriestCool.top=65; PriestCoolX=60-10;break;
	}


	return 0;
}
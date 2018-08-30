/*
* Dice! QQ Dice Robot for TRPG
* Copyright (C) 2018 w4123���
*
* This program is free software: you can redistribute it and/or modify it under the terms
* of the GNU Affero General Public License as published by the Free Software Foundation,
* either version 3 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU Affero General Public License for more details.
*
* You should have received a copy of the GNU Affero General Public License along with this
* program. If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once
#ifndef _RDCONSTANT_
#define _RDCONSTANT_
#include <string>

#if !defined WIN32
#error ��ʹ��Win32(x86)ģʽ���б���
#endif
//Version
static const std::string Dice_Ver = "2.3.2(488)";
static const std::string Dice_Short_Ver = "Dice! by ��� Version " + Dice_Ver;
static const std::string Dice_Full_Ver = Dice_Short_Ver + " [MSVC " + std::to_string(_MSC_FULL_VER) + " " + __DATE__ + " " + __TIME__ + "]";
//Error Handle
#define Value_Err (-1)
#define Input_Err (-2)
#define ZeroDice_Err (-3)
#define ZeroType_Err (-4)
#define DiceTooBig_Err (-5)
#define TypeTooBig_Err (-6)
#define AddDiceVal_Err (-7)
//Dice Type
#define Normal_Dice 0
#define B_Dice 1
#define P_Dice 2
#define Fudge_Dice 3
#define WW_Dice 4
//Message Type
#define PrivateMsg 0
#define GroupMsg 1
#define DiscussMsg 2
//Source type
#define PrivateT 0
#define GroupT 1
#define DiscussT 2
static std::string format(std::string str, std::initializer_list<std::string> replace_str)
{
	auto counter = 0;
	for (const auto element : replace_str)
	{
		auto replace = "{" + std::to_string(counter) + "}";
		while (str.find(replace) != std::string::npos)
		{
			str.replace(str.find(replace), replace.length(), element);
		}
		counter++;
	}
	return str;
}
typedef int int_errno;
struct RP {
	int RPVal;
	std::string Date;
};
static std::map<std::string, std::string> SkillNameReplace = { 
	std::make_pair("str","����"),
	std::make_pair("dex","����"),
	std::make_pair("pow","��־"),
	std::make_pair("siz","����"),
	std::make_pair("app","��ò"),
	std::make_pair("luck","����"),
	std::make_pair("luk","����"),
	std::make_pair("con","����"),
	std::make_pair("int","����/���"),
	std::make_pair("����","����/���"),
	std::make_pair("���","����/���"),
	std::make_pair("idea","����/���"),
	std::make_pair("edu","����"),
	std::make_pair("mov","�ƶ���"),
	std::make_pair("san","����"),
	std::make_pair("hp","����"),
	std::make_pair("mp","ħ��"),
	std::make_pair("���","���"),
	std::make_pair("�����","�����ʹ��"),
	std::make_pair("����","�����ʹ��"),
	std::make_pair("����ʹ��","�����ʹ��"),
	std::make_pair("����","��������"),
	std::make_pair("������","��������"),
	std::make_pair("���ö�","��������"),
	std::make_pair("����","��������"),
	std::make_pair("��ʻ","������ʻ"),
	std::make_pair("��ʻ����","������ʻ"),
	std::make_pair("��ʻ(����)","������ʻ"),
	std::make_pair("��ʻ:����","������ʻ"),
	std::make_pair("���ٽ�̸","����"),
	std::make_pair("��ǹ","��ǹ/����ǹ"),
	std::make_pair("����ǹ","��ǹ/����ǹ"),
	std::make_pair("ɢ��ǹ","��ǹ/����ǹ"),
	std::make_pair("����","��ǹ/����ǹ"),
	std::make_pair("��/��","��ǹ/����ǹ"),
	std::make_pair("��ɢ","��ǹ/����ǹ"),
	std::make_pair("��/ɢ","��ǹ/����ǹ"),
	std::make_pair("ͼ���","ͼ���ʹ��"),
	std::make_pair("����","��еά��"),
	std::make_pair("����ά��","����ά��"),
	std::make_pair("cm","����³��"),
	std::make_pair("����³","����³��"),
	std::make_pair("����","�質"),
	std::make_pair("����","����"),
	std::make_pair("����","����"),
	std::make_pair("��ǹ","����ǹ"),
	std::make_pair("����","�캽"),
	std::make_pair("��","����ʻ"),
	std::make_pair("��ʻ��","����ʻ"),
	std::make_pair("��ʻ(��)","����ʻ"),
	std::make_pair("��ʻ:��","����ʻ"),
	std::make_pair("������","��������ʻ"),
	std::make_pair("��ʻ������","��������ʻ"),
	std::make_pair("��ʻ:������","��������ʻ"),
	std::make_pair("��ʻ(������)","��������ʻ")
};

static std::map<std::string, int> SkillDefaultVal = {
	std::make_pair("���", 5),
	std::make_pair("����ѧ", 1),
	std::make_pair("����", 5),
	std::make_pair("����ѧ", 1),
	std::make_pair("����", 5),
	std::make_pair("��Ӱ", 5),
	std::make_pair("����", 5),
	std::make_pair("α��", 5),
	std::make_pair("��ѧ", 5),
	std::make_pair("�鷨", 5),
	std::make_pair("����", 5),
	std::make_pair("����", 5),
	std::make_pair("�÷�", 5),
	std::make_pair("��", 5),
	std::make_pair("����", 5),
	std::make_pair("�赸", 5),
	std::make_pair("���", 5),
	std::make_pair("����", 5),
	std::make_pair("�質", 5),
	std::make_pair("����", 5),
	std::make_pair("����", 5),
	std::make_pair("�Ӽ�", 5),
	std::make_pair("��ˮ", 5),
	std::make_pair("������ͼ", 5),
	std::make_pair("����", 5),
	std::make_pair("����", 5),
	std::make_pair("�ټ�", 5),
	std::make_pair("�Ȼ�", 15),
	std::make_pair("����", 20),
	std::make_pair("�����ʹ��", 5),
	std::make_pair("����³��", 0),
	std::make_pair("��װ", 5),
	std::make_pair("������ʻ", 20),
	std::make_pair("����ά��", 10),
	std::make_pair("����ѧ", 1),
	std::make_pair("����", 5),
	std::make_pair("����", 5),
	std::make_pair("���", 10),
	std::make_pair("��", 15),
	std::make_pair("��", 20),
	std::make_pair("�ʾ�", 25),
	std::make_pair("����", 25),
	std::make_pair("ì", 25),
	std::make_pair("��ǹ", 20),
	std::make_pair("��ǹ/����ǹ", 25),
	std::make_pair("���ǹ", 15),
	std::make_pair("����", 15),
	std::make_pair("����������", 10),
	std::make_pair("����ǹ", 10),
	std::make_pair("������", 10),
	std::make_pair("����", 30),
	std::make_pair("��ʷ", 5),
	std::make_pair("����", 15),
	std::make_pair("��Ծ", 20),
	std::make_pair("����", 5),
	std::make_pair("ͼ���ʹ��", 20),
	std::make_pair("����", 20),
	std::make_pair("����", 1),
	std::make_pair("��еά��", 10),
	std::make_pair("ҽѧ", 1),
	std::make_pair("��Ȼѧ", 10),
	std::make_pair("�캽", 10),
	std::make_pair("����ѧ", 5),
	std::make_pair("�������ͻ�е", 1),
	std::make_pair("˵��", 10),
	std::make_pair("��������ʻ", 1),
	std::make_pair("����ʻ", 1),
	std::make_pair("�������", 1),
	std::make_pair("����ѧ", 10),
	std::make_pair("���", 5),
	std::make_pair("����ѧ", 1),
	std::make_pair("��ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("��ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("ҩѧ", 1),
	std::make_pair("ֲ��ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("����ѧ", 1),
	std::make_pair("˾����ѧ", 1),
	std::make_pair("����", 10),
	std::make_pair("���", 25),
	std::make_pair("Ǳ��", 20),
	std::make_pair("��Ӿ", 20),
	std::make_pair("Ͷ��", 20),
	std::make_pair("׷��", 10),
	std::make_pair("ѱ��", 5),
	std::make_pair("Ǳˮ", 1),
	std::make_pair("����", 1),
	std::make_pair("����", 1),
	std::make_pair("����", 1),
	std::make_pair("����", 1),
	std::make_pair("��Ź", 25)
};

static std::string TempInsanity[11]{ "",
"ʧ�䣺��{0}��֮�ڣ�����Ա�ᷢ���Լ�ֻ�ǵ�������İ�ȫ�ص㣬ȴû���κ���������ļ��䡣",
"���Բм�������Ա�����������Ե�ʧ����ʧ���Լ�����ȱʧ���У�����{0}�֡�",
"�������򣺵���Ա���������ײ��ϵı�����Ϊ�У�����Χ�ĵ������ѷ��������޲��Ĺ���������{0}�֡�",
"ƫִ������Ա���������ص�ƫִ����֮�С������ڰ��п��������ǣ�ͬ�������˱��������ǣ�û���˿������Σ����½��顣����{0}�֡�",
"�˼�����������Ա��ΪһЩԭ�������������Ϊ������Ҫ���˲���Ŭ���Ļ����Ǹ��˱������ֹ�ϵ������{0}�֡�",
"���ʣ�����Ա�����赹������״̬����{0}�֡�",
"�ӱ���Ϊ������Ա�����κε��ֶ���ͼ��������������λ�ã�״̬����{0}�֡�",
"��˻�������Ա���ֳ���Ц��������˻�𣬺��µȵļ����������֣�����{0}�֡�",
"�־壺����Ա�����ĳһ����Ŀ־�֮�У�������һ�־�������ǲ������ڵģ�����{0}�֡�\n{1}\n����־�֢: {2}(������Ҳ�������дӿ־�֢״����ѡ������֢״)",
"���꣺����Ա����ĳ������������״̬��֢״����{0}�֡�\n{1}\n�������֢: {2}(������Ҳ�������дӿ���֢״����ѡ������֢״)" };

static std::string LongInsanity[11]{ "",
"ʧ�䣺��{0}Сʱ�󣬵���Ա�ع������������Լ���һ��İ���ĵط������������Լ���˭���������ʱ��ָ���",
"���ԣ�����Ա��{0}Сʱ��ָ����ѣ������Լ������������������",
"�������ˣ�����Ա��{0}Сʱ��ָ����ѣ������Լ���������ȭ�ۺ����ˡ�����ֵ���ٵ����ǰ��һ�룬���ⲻ��������ˡ�����Աû�б��ԡ������˺���γ����������������˾�����",
"�������򣺵���Ա����ǿ�ҵı������ƻ���֮�У�����{0}Сʱ��",
"���������{0}Сʱ֮�ڣ�����Ա���ȡ���˺ͷ��ı����ֶ�չʾ���ǵ�˼������֮һ",
"��Ҫ֮�ˣ���{0}Сʱ�У�����Ա������һ�еؽӽ���Ҫ���Ǹ��ˣ���Ϊ����֮��Ĺ�ϵ�����ж���",
"�����ݣ�{0}Сʱ�󣬵���Ա�ھ���Ժ�����򾯲���η��лع�����",
"�ӱ���Ϊ��{0}Сʱ�󣬵���Ա�ָ�����ʱ�����Լ��ں�Զ�ĵط�",
"�־壺����Ա����һ���µĿ־�֢������Ա����{0}Сʱ��ָ�����������ʼΪ�ܿ��־�Դ����ȡ�κδ�ʩ��\n{1}\n����־�֢: {2}(������Ҳ�������дӿ־�֢״����ѡ������֢״)",
"���꣺����Ա����һ���µĿ���֢����{0}Сʱ��ָ����ǡ�����η�����У�����Ա����ȫ���������µĿ���֢״�����Ƿ�ᱻ��������⣨apparent to other people����ȡ���������˺ʹ˵���Ա��\n{1}\n�������֢: {2}(������Ҳ�������дӿ���֢״����ѡ������֢״)"
};
static std::string strSetInvalid = "��Ч��Ĭ����!������1-99999֮�������!";
static std::string strSetTooBig = "Ĭ��������!������1-99999֮�������!";
static std::string strSetCannotBeZero = "Ĭ��������Ϊ��!������1-99999֮�������!";
static std::string strCharacterCannotBeZero = "�������ɴ�������Ϊ��!������1-10֮�������!";
static std::string strCharacterTooBig = "�������ɴ�������!������1-10֮�������!";
static std::string strCharacterInvalid = "�������ɴ�����Ч!������1-10֮�������!";
static std::string strSCInvalid = "SC���ʽ���벻��ȷ,��ʽΪ�ɹ���San/ʧ�ܿ�San,��1/1d6!";
static std::string strSanInvalid = "Sanֵ���벻��ȷ,������1-99��Χ�ڵ�����!";
static std::string strEnValInvalid = "����ֵ���������벻��ȷ,������1-99��Χ�ڵ�����!";
static std::string strGroupIDInvalid = "��Ч��Ⱥ��!";
static std::string strSendErr = "��Ϣ����ʧ��!"; 
static std::string strDisabledErr = "�����޷�ִ��: ���������ڴ�Ⱥ�б��ر�!";
static std::string strMEDisabledErr = "����Ա���ڴ�Ⱥ�н���.me����!";
static std::string strHELPDisabledErr = "����Ա���ڴ�Ⱥ�н���.help����!";
static std::string strNameDelErr = "û����������,�޷�ɾ��!";
static std::string strValueErr = "�������ʽ�������!";
static std::string strInputErr = "������������ʽ�������!";
static std::string strUnknownErr = "������δ֪����!";
static std::string strDiceTooBigErr = "���ﱻ���ӳ���������û��";
static std::string strTypeTooBigErr = "��!�������������ж�������~1...2...";
static std::string strZeroTypeErr = "����...! ! ʱ����(���ﱻ���Ӳ�����ʱ���ѷ������)";
static std::string strAddDiceValErr = "������Ҫ�����������ӵ�ʲôʱ����~(��������ȷ�ļ�������:5-10֮�ڵ�����)";
static std::string strZeroDiceErr = "��? �ҵ�������? ";
static std::string strRollTimeExceeded = "�������������������������!";
static std::string strRollTimeErr = "�쳣����������";
static std::string strWelcomeMsgClearNotice = "�������Ⱥ����Ⱥ��ӭ��";
static std::string strWelcomeMsgClearErr = "����: û��������Ⱥ��ӭ�ʣ����ʧ��";
static std::string strWelcomeMsgUpdateNotice = "�Ѹ��±�Ⱥ����Ⱥ��ӭ��";
static std::string strPermissionDeniedErr = "����: �˲�����ҪȺ�������ԱȨ��";
static std::string strNameTooLongErr = "����: ���ƹ���(���Ϊ50Ӣ���ַ�)";
static std::string strUnknownPropErr = "����: ���Բ�����";
static std::string strEmptyWWDiceErr = "��ʽ����:��ȷ��ʽΪ.w(w) XaY! ����X��1, 5��Y��10";
static std::string strPropErr = "������������������Ŷ~";
static std::string strSetPropSuccess = "�������óɹ�";
static std::string strPropCleared = "�������������";
static std::string strRuleErr = "�������ݻ�ȡʧ��, ������Ϣ:\n";
static std::string strRulesFailedErr = "����ʧ��, �޷��������ݿ�";
static std::string strPropDeleted = "����ɾ���ɹ�";
static std::string strPropNotFound = "����:���Բ�����";
static std::string strRuleNotFound = "δ�ҵ���Ӧ�Ĺ�����Ϣ";
static std::string strProp = "{0}��{1}����ֵΪ{2}";
static std::string strStErr = "��ʽ����:��ο������ĵ���ȡ.st�����ʹ�÷���";
static std::string strRulesFormatErr = "��ʽ����:��ȷ��ʽΪ .rules [��������:]������Ŀ ��.rules COC7:����";
static std::string strHlpMsg = Dice_Short_Ver + R"(
��ʹ��!dismiss [������QQ��]�����û������Զ���Ⱥ�������飡
<ͨ������>
.r [�������ʽ*] [ԭ��]			��ͨ����
.rs	[�������ʽ*] [ԭ��]			�����
.w/ww XaY						����
.set [1-99999֮�������]			����Ĭ����
.sc SC���ʽ** [Sanֵ]			�Զ�Sancheck
.en [������] [����ֵ]			��ǿ�춨/Ļ��ɳ�
.coc7/6 [����]					COC7/6��������
.dnd [����]					DND��������
.coc7/6d					��ϸ��COC7/6��������
.ti/li					�����-��ʱ/�ܽ�֢״
.st [del/clr/show] [������] [����ֵ]		���￨����
.rc/ra [������] [����ֵ]		���ܼ춨(������/����)
.jrrp [on/off]				������Ʒ�춨
.rules [��������:]������Ŀ		�����ѯ
.help						��ʾ����
<����Ⱥ/��������>
.ri [��ֵ] [�ǳ�]			DnD�ȹ�����
.init [clr]					DnD�ȹ��鿴/���
.nn [����]					����/ɾ���ǳ�
.rh [�������ʽ*] [ԭ��]			����,���˽�ķ���
.bot [on/off] [������QQ��]		�����˿�����ر�
.ob [exit/list/clr/on/off]			�Թ�ģʽ
.me on/off/����				�Ե������ӽ���������
.welcome ��ӭ��Ϣ				Ⱥ��ӭ��ʾ
<����˽��>
.me Ⱥ�� ����				�Ե������ӽ���������
*COC7�ͷ���ΪP+����,������ΪB+����
 ֧��ʹ��K��ȡ�ϴ�ļ�������
 ֧��ʹ�� ����#���ʽ ���ж�������
**SC���ʽΪ �ɹ���San/ʧ�ܿ�San,��:1/1d6
�������/bug����/�鿴Դ�������QQȺ624807593)";

static std::string strFear[101] = { "",
"ϴ��־�֢��Ablutophobia��������ϴ�ӻ�ϴ��Ŀ־塣",
"�ָ�֢��Acrophobia�����������ߴ��Ŀ־塣",
"���п־�֢��Aerophobia�����Է��еĿ־塣",
"�㳡�־�֢��Agoraphobia�������ڿ��ŵģ�ӵ�������������Ŀ־塣",
"�ּ�֢��Alektorophobia�����Լ��Ŀ־塣",
"����־�֢��Alliumphobia�����Դ���Ŀ־塣",
"�˳��־�֢��Amaxophobia�������ڳ��������ؾߵĿ־塣",
"�ַ�֢��Ancraophobia�����Է�Ŀ־塣",
"���Կ־�֢��Androphobia�������ڳ������ԵĿ־塣",
"��Ӣ֢��Anglophobia������Ӣ������Ӣ�����Ļ��Ŀ־塣",
"�ֻ�֢��Anthophobia�����Ի��Ŀ־塣",
"��֫�߿־�֢��Apotemnophobia�����Խ�֫�ߵĿ־塣",
"֩��־�֢��Arachnophobia������֩��Ŀ־塣",
"����־�֢��Astraphobia����������Ŀ־塣",
"����־�֢��Atephobia�������ż����ַ�Ŀ־塣",
"���ѿ־�֢��Aulophobia�����Գ��ѵĿ־塣",
"ϸ���־�֢��Bacteriophobia������ϸ���Ŀ־塣",
"����/�ӵ��־�֢��Ballistophobia�����Ե������ӵ��Ŀ־塣",
"����־�֢��Basophobia�������ڵ�����ˤ��Ŀ־塣",
"�鼮�־�֢��Bibliophobia�������鼮�Ŀ־塣",
"ֲ��־�֢��Botanophobia������ֲ��Ŀ־塣",
"��Ů�־�֢��Caligynephobia��������òŮ�ԵĿ־塣",
"����־�֢��Cheimaphobia�����Ժ���Ŀ־塣",
"���ӱ�֢��Chronomentrophobia���������ӱ�Ŀ־塣",
"�ıտ־�֢��Claustrophobia�������ڴ��ڷ�յĿռ��еĿ־塣",
"С��־�֢��Coulrophobia������С��Ŀ־塣",
"��Ȯ֢��Cynophobia�����Թ��Ŀ־塣",
"��ħ�־�֢��Demonophobia������а����ħ�Ŀ־塣",
"��Ⱥ�־�֢��Demophobia��������Ⱥ�Ŀ־塣",
"���ƿ־�֢��Dentophobia��������ҽ�Ŀ־塣",
"�����־�֢��Disposophobia�������ڶ�������Ŀ־壨����񱣩��",
"Ƥë�־�֢��Doraphobia�����Զ���Ƥë�Ŀ־塣",
"����·�־�֢��Dromophobia�������ڹ���·�Ŀ־塣",
"���ÿ־�֢��Ecclesiophobia�����Խ��õĿ־塣",
"���ӿ־�֢��Eisoptrophobia�����Ծ��ӵĿ־塣",
"���־�֢��Enetophobia����������ͷ��Ŀ־塣",
"����־�֢��Entomophobia����������Ŀ־塣",
"��è֢��Felinophobia������è�Ŀ־塣",
"���ſ־�֢��Gephyrophobia�������ڹ��ŵĿ־塣",
"����֢��Gerontophobia�������������˻���ϵĿ־塣",
"��Ů֢��Gynophobia������Ů�ԵĿ־塣",
"��Ѫ֢��Haemaphobia������Ѫ�Ŀ־塣",
"�ڽ����п־�֢��Hamartophobia�������ڽ����еĿ־塣",
"�����־�֢��Haphophobia�������ڱ������Ŀ־塣",
"����־�֢��Herpetophobia���������ж���Ŀ־塣",
"����־�֢��Homichlophobia��������Ŀ־塣",
"�����־�֢��Hoplophobia�����Ի����Ŀ־塣",
"��ˮ֢��Hydrophobia������ˮ�Ŀ־塣",
"���߿־�֢��Hypnophobia��������˯�߻򱻴��ߵĿ־塣",
"���ۿ־�֢��Iatrophobia������ҽ���Ŀ־塣",
"����־�֢��Ichthyophobia��������Ŀ־塣",
"���־�֢��Katsaridaphobia���������Ŀ־塣",
"�����־�֢��Keraunophobia�����������Ŀ־塣",
"�߲˿־�֢��Lachanophobia�������߲˵Ŀ־塣",
"�����־�֢��Ligyrophobia�����Դ̶������Ŀ־塣",
"�ֺ�֢��Limnophobia�����Ժ����Ŀ־塣",
"��е�־�֢��Mechanophobia�����Ի������е�Ŀ־塣",
"����־�֢��Megalophobia���������Ӵ�����Ŀ־塣",
"����־�֢��Merinthophobia�������ڱ����������Ŀ־塣",
"���ǿ־�֢��Meteorophobia���������ǻ���ʯ�Ŀ־塣",
"�¶��־�֢��Monophobia��������һ�˶����Ŀ־塣",
"����־�֢��Mysophobia�������۹�����Ⱦ�Ŀ־塣",
"�Һ�־�֢��Myxophobia�������Һ��ʷ��ķ���Ŀ־塣",
"ʬ��־�֢��Necrophobia������ʬ��Ŀ־塣",
"����8�־�֢��Octophobia����������8�Ŀ־塣",
"����֢��Odontophobia���������ݵĿ־塣",
"����֢��Oneirophobia�������ξ��Ŀ־塣",
"�ƺ��־�֢��Onomatophobia���������ض�����Ŀ־塣",
"����֢��Ophidiophobia�������ߵĿ־塣",
"����֢��Ornithophobia��������Ŀ־塣",
"������־�֢��Parasitophobia�����Լ�����Ŀ־塣",
"��ż�־�֢��Pediophobia��������ż�Ŀ־塣",
"���ʿ־�֢��Phagophobia�����������ʻ����ʵĿ־塣",
"ҩ��־�֢��Pharmacophobia������ҩ��Ŀ־塣",
"����־�֢��Phasmophobia�����Թ��Ŀ־塣",
"�չ�־�֢��Phenogophobia�������չ�Ŀ־塣",
"����־�֢��Pogonophobia�����Ժ���Ŀ־塣",
"�����־�֢��Potamophobia�����Ժ����Ŀ־塣",
"�ƾ��־�֢��Potophobia�����Ծƻ�ƾ��Ŀ־塣",
"�ֻ�֢��Pyrophobia�����Ի�Ŀ־塣",
"ħ���־�֢��Rhabdophobia������ħ���Ŀ־塣",
"�ڰ��־�֢��Scotophobia�����Ժڰ���ҹ��Ŀ־塣",
"����֢��Selenophobia�����������Ŀ־塣",
"�𳵿־�֢��Siderodromophobia�������ڳ����𳵳��еĿ־塣",
"����֢��Siderophobia���������ǵĿ־塣",
"���ҿ־�֢��Stenophobia��������С�����ص�Ŀ־塣",
"�Գƿ־�֢��Symmetrophobia�����ԶԳƵĿ־塣",
"����־�֢��Taphephobia�������ڱ������Ĺ�صĿ־塣",
"��ţ�־�֢��Taurophobia�����Թ�ţ�Ŀ־塣",
"�绰�־�֢��Telephonophobia�����Ե绰�Ŀ־塣",
"����־�֢�٣�Teratophobia�����Թ���Ŀ־塣",
"��־�֢��Thalassophobia�����Ժ���Ŀ־塣",
"�����־�֢��Tomophobia��������������Ŀ־塣",
"ʮ���־�֢��Triskadekaphobia����������13�Ŀ־�֢��",
"����־�֢��Vestiphobia����������Ŀ־塣",
"Ů�׿־�֢��Wiccaphobia������Ů���������Ŀ־塣",
"��ɫ�־�֢��Xanthophobia�����Ի�ɫ�򡰻ơ��ֵĿ־塣",
"����־�֢��Xenoglossophobia����������Ŀ־塣",
"����־�֢��Xenophobia������İ���˻�����˵Ŀ־塣",
"����־�֢��Zoophobia�����Զ���Ŀ־塣"
};
static std::string strPanic[101] = {"",
"��ԡ񱣨Ablutomania����ִ������ϴ�Լ���",
"��ԥ񱣨Aboulomania������̬����ԥ������",
"ϲ����Achluomania�����Ժڰ��Ĺ����Ȱ���",
"ϲ�߿�Acromaniaheights�������������ߴ���",
"����񱣨Agathomania������̬�ض������Ѻá�",
"ϲ��֢��Agromania����ǿ�ҵ������ڴ��ڿ����ռ��С�",
"ϲ���Aichmomania���������ڼ������������塣",
"��è��Ailuromania����������̬�ض�è���ơ�",
"��ʹ񱣨Algomania������������ʹ��",
"ϲ���Alliomania���������ڴ��⡣",
"�˳�񱣨Amaxomania���������ڳ���������",
"����񱣨Amenomania�����������ظе�ϲ�á�",
"ϲ����Anthomania���������ڻ��䡣",
"����񱣨Arithmomania�������ȵس��������֡�",
"����񱣨Asoticamania����³ç�嶯�����ѡ�",
"����񱣨Automania�������ȵ��Ȱ��������ӡ�",
"����񱣨Balletmania���������ڰ����衣",
"����񱣨Biliokleptomania�����޷�����͵���鼮�ĳ嶯��",
"�����Bibliomania�����������鼮��/���Ķ�",
"ĥ��񱣨Bruxomania�����޷�����ĥ���ĳ嶯��",
"����֢��Cacodemomania������̬�ؼ����Լ��ѱ�һ��а�������ռ�ݡ�",
"��ò��Callomania�����������������ò��",
"��ͼ��Cartacoethes�����ں�ʱ�δ����޷����Ʋ��ĵ�ͼ�ĳ嶯��",
"��Ծ��Catapedamania���������ڴӸߴ����¡�",
"ϲ��֢��Cheimatomania�����Ժ�����������ķ���ϲ����",
"�赸��Choreomania�����޷����Ƶ�����򷢲���",
"����񱣨Clinomania�������ȵ��Ȱ����ڴ��ϡ�",
"��Ĺ��Coimetormania����������Ĺ�ء�",
"ɫ�ʿ�Coloromania����������ĳ����ɫ��",
"С���Coulromania����������С��",
"�־��Countermania����ִ���ھ����ֲ��ĳ��档",
"ɱ¾񱣨Dacnomania����������ɱ¾��",
"ħ��֢��Demonomania������̬�ؼ����Լ��ѱ���ħ����",
"ץ��񱣨Dermatillomania����ִ����ץ���Լ���Ƥ����",
"�����Dikemania����������Ŀ�����屻���š�",
"�Ⱦƿ�Dipsomania���������ؿ���ƾ���",
"ëƤ��Doramania����������ӵ��ëƤ��",
"����񱣨Doromania�����������������",
"Ư��֢��Drapetomania����ִ�������롣",
"����񱣨Ecdemiomania����ִ�����Ĵ����Ρ�",
"������Egomania����������̬��������Ϊ���Ļ����ҳ�ݡ�",
"ְҵ��Empleomania�������ڹ������޾���̬����",
"����֢��Enosimania������̬�ؼ����Լ�����������",
"ѧʶ��Epistemomania���������ڻ�ȡѧʶ��",
"��ֹ񱣨Eremiomania����ִ���ڱ��ְ�����",
"������񫣨Etheromania�����������ѡ�",
"����Gamomania���������ڽ������ص���顣",
"��Ц񱣨Geliomania�����޷����Ƶأ�ǿ���ԵĴ�Ц��",
"������Goetomania����������Ů����������",
"д��񱣨Graphomania���������ڽ�ÿһ����д������",
"�����Gymnomania����ִ������¶���塣",
"�����Habromania����������̬�س����������루��������ʵ״����Σ���",
"����Helminthomania�������ȵ�ϲ����档",
"ǹе��Hoplomania���������ڻ�����",
"��ˮ��Hydromania���������ؿ���ˮ�֡�",
"ϲ��񱣨Ichthyomania�������������ࡣ",
"ͼ���Iconomania����������ͼ����Ф��",
"ż���Idolomania��������������Ը������ĳ��ż��",
"��Ϣ��Infomania���������ڻ��۸�����Ϣ����Ѷ��",
"�����Klazomania����������ִ���������",
"͵��񱣨Kleptomania����������ִ����͵�ԡ�",
"����񱣨Ligyromania�����޷����Ƶ�ִ��������������̶���������",
"ϲ��񱣨Linonomania����������������",
"��Ʊ��Lotterymania�������˵�ִ���ڹ����Ʊ��",
"����֢��Lypemania����������̬���ض���������",
"��ʯ��Megalithomania������վ��ʯ���л�����ľ�ʯ��ʱ���ͻ������̬��д��������ֵĴ��⡣",
"���ɿ�Melomania�������������ֻ�һ���ض������ɡ�",
"��ʫ񱣨Metromania�����޷����Ƶ���Ҫ��ͣ��ʫ��",
"����񱣨Misomania��������һ���������������ĳ����������塣",
"ƫִ��Monomania����������̬�س�����רעĳ���ض����뷨���⡣",
"���񱣨Mythomania������һ�ֽ�����̬�ĳ̶�˵�ѻ������",
"����֢��Nosomania���������Լ����ڱ�ĳ��������ļ�����ĥ��",
"��¼񱣨Notomania����ִ���ڼ�¼һ�����������Ӱ��",
"������Onomamania�������������֣�����ġ��ص�ġ�����ģ�",
"����񱣨Onomatomania�����޷����Ƶز����ظ�ĳ������ĳ嶯��",
"��ָ񱣨Onychotillomania����ִ������ָ�ס�",
"��ʳ񱣨Opsomania������ĳ��ʳ��Ĳ�̬�Ȱ���",
"��Թ񱣨Paramania����һ���ڱ�Թʱ�����Ľ�����̬�����øС�",
"��߿�Personamania����ִ���������ߡ�",
"�����Phasmomania�������������顣",
"ıɱ񱣨Phonomania������̬��ıɱ����",
"�ʹ�񱣨Photomania�����Թ�Ĳ�̬����",
"����񱣨Planomania������̬�ؿ���Υ��������",
"���񱣨Plutomania�����ԲƸ���ǿ���ԵĿ�����",
"��ƭ��Pseudomania�����޷����Ƶ�ִ�������ѡ�",
"�ݻ��Pyromania����ִ�����ݻ�",
"���ʿ�Question-asking Mania����ִ�������ʡ�",
"�ڱ�񱣨Rhinotillexomania����ִ�����ڱ��ӡ�",
"Ϳѻ񱣨Scribbleomania����������Ϳѻ��",
"�г���Siderodromomania������Ϊ�𳵻����Ƶ����������ͨ�����з�ʽ����������",
"����֢��Sophomania���������Լ�ӵ���������ŵ��ǻۡ�",
"�Ƽ���Technomania�����������µĿƼ���",
"�����Thanatomania���������Լ��ѱ�ĳ������ħ�������䡣",
"�����Theomania���������Լ���һλ���顣",
"ץ��񱣨Titillomaniac����ץ���Լ���ǿ������",
"������Tomomania�����Խ��������Ĳ��������á�",
"��ë񱣨Trichotillomania����ִ���ڰ����Լ���ͷ����",
"��ä֢��Typhlomania���������Ե�ʧ����",
"�����Xenomania������������������",
"ϲ��񱣨Zoomania�����Դ������̬�Ƚ��������Ѻá�"
};
#endif /*_RDCONSTANT_*/

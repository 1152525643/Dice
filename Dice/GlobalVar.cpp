/*
 *  _______     ________    ________    ________    __
 * |   __  \   |__    __|  |   _____|  |   _____|  |  |
 * |  |  |  |     |  |     |  |        |  |_____   |  |
 * |  |  |  |     |  |     |  |        |   _____|  |__|
 * |  |__|  |   __|  |__   |  |_____   |  |_____    __
 * |_______/   |________|  |________|  |________|  |__|
 *
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
#include "CQLogger.h"
#include "GlobalVar.h"
#include <map>
#include "RDConstant.h"

bool Enabled = false;

bool msgSendThreadRunning = false;

CQ::logger DiceLogger("Dice!");

std::map<std::string, std::string> GlobalMsg
{
	{"strSetInvalid", "��Ч��Ĭ����!������1-99999֮�������!"},
	{"strSetTooBig", "Ĭ��������!������1-99999֮�������!"},
	{"strSetCannotBeZero", "Ĭ��������Ϊ��!������1-99999֮�������!"},
	{"strCharacterCannotBeZero", "�������ɴ�������Ϊ��!������1-10֮�������!"},
	{"strSetInvalid", "��Ч��Ĭ����!������1-99999֮�������!"},
	{"strSetTooBig", "Ĭ��������!������1-99999֮�������!"},
	{"strSetCannotBeZero", "Ĭ��������Ϊ��!������1-99999֮�������!"},
	{"strCharacterCannotBeZero", "�������ɴ�������Ϊ��!������1-10֮�������!"},
	{"strCharacterTooBig", "�������ɴ�������!������1-10֮�������!"},
	{"strCharacterInvalid", "�������ɴ�����Ч!������1-10֮�������!"},
	{"strSCInvalid", "SC���ʽ���벻��ȷ,��ʽΪ�ɹ���San/ʧ�ܿ�San,��1/1d6!"},
	{"strSanInvalid", "Sanֵ���벻��ȷ,������1-99��Χ�ڵ�����!"},
	{"strEnValInvalid", "����ֵ���������벻��ȷ,������1-99��Χ�ڵ�����!"},
	{"strGroupIDInvalid", "��Ч��Ⱥ��!"},
	{"strSendErr", "��Ϣ����ʧ��!"},
	{"strDisabledErr", "�����޷�ִ��:���������ڴ�Ⱥ�б��ر�!"},
	{"strMEDisabledErr", "����Ա���ڴ�Ⱥ�н���.me����!"},
	{"strHELPDisabledErr", "����Ա���ڴ�Ⱥ�н���.help����!"},
	{"strNameDelErr", "�������������ɾ������ʧ���ˣ�"},
	{"strValueErr", "�������ʽ�������!"},
	{"strInputErr", "������������ʽ�������!"},
	{"strUnknownErr", "������δ֪����!"},
	{"strDiceTooBigErr", "���ﱻ���ӳ���������û��"},
	{"strTypeTooBigErr", "��!�������������ж�������~1...2..."},
	{"strZeroTypeErr", "����...!!ʱ����(���ﱻ���Ӳ�����ʱ���ѷ������)"},
	{"strAddDiceValErr", "������Ҫ�����������ӵ�ʲôʱ����~(��������ȷ�ļ�������:5-10֮�ڵ�����)"},
	{"strZeroDiceErr", "��?�ҵ�������?"},
	{"strRollTimeExceeded", "�������������������������!"},
	{"strRollTimeErr", "�쳣����������"},
	{"strWelcomeMsgClearNotice", "�������Ⱥ����Ⱥ��ӭ��"},
	{"strWelcomeMsgClearErr", "����:û��������Ⱥ��ӭ�ʣ����ʧ��"},
	{"strWelcomeMsgUpdateNotice", "�Ѹ��±�Ⱥ����Ⱥ��ӭ��"},
	{"strPermissionDeniedErr", "����:�˲�����ҪȺ�������ԱȨ��"},
	{"strNameTooLongErr", "����:���ƹ���(���Ϊ50Ӣ���ַ�)"},
	{"strUnknownPropErr", "����:���Բ�����"},
	{"strEmptyWWDiceErr", "��ʽ����:��ȷ��ʽΪ.w(w)XaY!����X��1, 5��Y��10"},
	{"strPropErr", "������������������Ŷ~"},
	{"strSetPropSuccess", "�������óɹ�"},
	{"strPropCleared", "�������������"},
	{"strRuleErr", "�������ݻ�ȡʧ��,������Ϣ:\n"},
	{"strRulesFailedErr", "����ʧ��,�޷��������ݿ�"},
	{"strPropDeleted", "����ɾ���ɹ�"},
	{"strPropNotFound", "����:���Բ�����"},
	{"strRuleNotFound", "δ�ҵ���Ӧ�Ĺ�����Ϣ"},
	{"strProp", "{0}��{1}����ֵΪ{2}"},
	{"strStErr", "��ʽ����:��ο������ĵ���ȡ.st�����ʹ�÷���"},
	{"strRulesFormatErr", "��ʽ����:��ȷ��ʽΪ.rules[��������:]������Ŀ ��.rules COC7:����"},
	{"strHlpMsg" , Dice_Short_Ver + "\n" +
	R"(��ʹ��!dismiss [������QQ��]�����û������Զ���Ⱥ�������飡
����ָ����鿴�ĵ�https://docs.qq.com/doc/DY0VXTUxIR1daa3Fa
*�����w�䣺������ôˬ���Ų����ڵ�)"}
};
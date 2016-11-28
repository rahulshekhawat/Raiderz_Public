#pragma once

// NPC ������ ����
// ������ �켱������ ���ĵȰ� �Ժη� ����x
/*
enum NPC_ICON_TYPE
{
	NIT_NONE = 0,			
	NIT_ITEM_UNUSABLE,		// �������� ��� ���ͷ��� �Ұ�
	NIT_ITEM_USABLE,		// �����ۻ���ؼ� ���ͷ���
	NIT_ONLYINTERACTION,	// ���ͷ��Ǹ� ����(������x)	

	NIT_TRIGGER,			// Ʈ����
	NIT_QUEST_INTERACT,		// ���ͷ������� ����Ʈ ���� ������Ʈ
	NIT_LOOT,				// ����
	NIT_TALK,				// ��ȭ
	NIT_HELPER,				// ���̵�
	NIT_SHOP,				// ����
	NIT_GUILD_CREATE,		// ��� ����
	NIT_CRAFT,				// ����	

	NIT_QUEST_NOT_BEGIN_ONLYICON,	// ����Ʈ ��� �Ұ�(���ͷ���x)
	NIT_QUEST_NOT_BEGIN,			// ����Ʈ ��� �Ұ�
	NIT_QUEST_CONTINUE_ONLYICON,	// ����Ʈ ������(���ͷ���x)
	NIT_QUEST_CONTINUE,				// ����Ʈ ������

	NIT_QUEST_BEGIN,		// ����Ʈ ����
	NIT_QUEST_END,			// ����Ʈ ����
	NIT_COMBAT,				// ���� ����	
};
*/
enum NPC_ICON_TYPE
{
	NIT_NONE = 0,			
	NIT_QUEST_NOT_BEGIN_ONLYICON,	// ����Ʈ ��� �Ұ�(���ͷ���x)
	NIT_QUEST_NOT_BEGIN,			// ����Ʈ ��� �Ұ�
	NIT_ITEM_UNUSABLE,				// �������� ��� ���ͷ��� �Ұ�
	NIT_ITEM_USABLE,				// �����ۻ���ؼ� ���ͷ���
	NIT_ONLYINTERACTION,			// ���ͷ��Ǹ� ����(������x)	
	NIT_TRIGGER,					// Ʈ����
	NIT_LOOT,						// ����
	NIT_LOOT_GATHER,				// TODO: not sure this is correct... check required.
	NIT_TALK,						// ��ȭ
	NIT_SKILL_SET,
	NIT_SHOP,						// ����
	NIT_GUILD_CREATE,				// ��� ����
	NIT_CRAFT,						// ����	
	NIT_ENCHANT,
	NIT_INN,
	NIT_TRADE_MARKET,
	NIT_HELLHOUND,
	NIT_SKILL_SET_UNLOCKED,			// TODO: not sure... check required.
	NIT_BEAUTY,
	NIT_ELEMENT_ENCHANT,			// Element Gemstone Enchanting
	NIT_QUEST_CONTINUE_ONLYICON,	// ����Ʈ ������(���ͷ���x)
	NIT_QUEST_CONTINUE,				// ����Ʈ ������
	NIT_DAILY_QUEST_BEGIN,		
	NIT_QUEST_BEGIN,				// ����Ʈ ����
	NIT_DAILY_QUEST_END,
	NIT_QUEST_END,					// ����Ʈ ����
	NIT_MAX,
};

enum INTERACTION_TYPE
{	
	IT_NONE		= 0,	

	IT_AUCTION,
	IT_MAILBOX,
	IT_STORAGE,	
	IT_SOLDTRADE,	
	IT_INN_SLEEP,	
	IT_INN_SAVE,

	IT_TRADE_MARKET,
	IT_TRIGGER,
	IT_GUILD_DESTROY,
	IT_GUILD_CREATE,
	IT_GUILD_STORAGE,

	IT_QUEST_INTERACT_MORTAL,
	IT_QUEST_INTERACT_IMMORTAL,

	// IT_SOULBINDING,
	IT_CHALLENGERQUEST,

	IT_GATHER_1,
	IT_GATHER_2,
	IT_GATHER_3,
	IT_GATHER_4,
	IT_GATHER_5,
	IT_GATHER_6,
	IT_GATHER_7,
	IT_GATHER_8,
	IT_GATHER_9,
	IT_GATHER_10,
	IT_LOOT_MORTAL,
	IT_LOOT_IMMORTAL,	

	IT_DIALOG,
	IT_DIALOG_FOR_HELP,
	IT_NPCSHOP,
	IT_CRAFT,
	IT_QUEST_BEGIN,
	IT_QUEST_END,	

	IT_ENCHANT,
	IT_PC_TALENT,
	IT_PC_TALENT_IMMORTAL,
	IT_PC_BUFF,
	IT_PC_BUFF_IMMORTAL,
	IT_SCRIPT,
	IT_SCRIPT_IMMORTAL,

	IT_HELLHOUND,
	IT_SKILL_SET,
	IT_BEAUTY_SHOP,
	IT_ELEMENT_ENCHANT,
	
	IT_MAX
};

// ���ͷ��� ���
enum ITRIGGER_TYPE
{
	ITRT_NONE = 0,
	ITRT_CLICK,
	ITRT_ITEM,

	ITRT_MAX
};

// ���ͷ��� ���
enum ITARGET_TYPE
{
	ITAT_NONE = 0,
	ITAT_NPC,
	ITAT_ITEM,

	ITAT_MAX
};

// ���ͷ��� ����� ���ͷ��� ������ ����
enum ITARGET_CONDITION_TYPE
{
	ITCT_NONE = 0,
	ITCT_LIVE,
	ITCT_DEAD,
	ITCT_ALL,

	ITCT_MAX
};

#define SLEEP_ANI_TIME				4

#define CLICK_INTERACTION_BEGIN_ID	1
#define ITEM_INTERACTION_BEGIN_ID	100
#define MAX_CLICK_INTERACTION_SIZE	20
#define MAX_ITEM_INTERACTION_SIZE	2
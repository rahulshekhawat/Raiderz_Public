#ifndef _GDBTASK_DATA_FACTION_H
#define _GDBTASK_DATA_FACTION_H


class GDBT_DATA_FACTION // �ڷᱸ�� �̸��� ��ó�� _DATA�߰�.
{
public :
	GDBT_DATA_FACTION() : m_nAID(0), m_uidPlayer(0), m_nCID(0), m_nFactID(0), m_nVal(0) {}
	GDBT_DATA_FACTION(const AID nAID, const MUID& uidPlayer, const CID nCID, const int nFactID, const int nVal)
		: m_nAID(nAID), m_uidPlayer(uidPlayer), m_nCID(nCID), m_nFactID(nFactID), m_nVal(nVal) {}
	
	AID		m_nAID;
	MUID	m_uidPlayer;
	CID		m_nCID;
	int		m_nFactID;
	int		m_nVal;
};


#endif
#pragma once

#include "GFieldGrid.h"

class GEntityPlayer;
struct TD_UPDATE_CACHE_PLAYER;
struct TD_UPDATE_CACHE_NPC;
struct TD_UPDATE_CACHE_PBART;
struct TD_UPDATE_CACHE_BUFFENTITY;
struct TD_TRIGGER_SENSOR_INFO;
struct TD_PLAYER_FEATURE_TATTOO;
struct TD_SIMPLE_UPDATE_CACHE_PLAYER;
struct TD_PLAYER_BUFF_LIST;

class GFieldGridEntityInfoMaker
{
	typedef const vector<GFieldGrid::Sector*> GFieldGridSectorVec;
public:
	void MakeSensorInfos(GEntityPlayer* pPlayer, vector<TD_TRIGGER_SENSOR_INFO>& outvecSensorList);
	void MakeBuffInfos(GEntityPlayer* pPlayer, GFieldGridSectorVec& vecCells, vector<TD_UPDATE_CACHE_BUFFENTITY>& outvecMagicArearInfoList);
	void MakeNPCInfos(GEntityPlayer* pPlayer, GFieldGridSectorVec& vecCells, vector<TD_UPDATE_CACHE_NPC>& outvecNPCInfoList, vector<TD_UPDATE_CACHE_PBART>& outvecEntityBPartInfoNode);
	// void MakePlayerInfos(GEntityPlayer* pPlayer, GFieldGridSectorVec& vecCells, vector<TD_UPDATE_CACHE_PLAYER>& outvecPlayerInfoList, vector<TD_PLAYER_FEATURE_TATTOO>& outvecPlayerFeatureTattoo);
	void MakePlayerInfos(GEntityPlayer* pPlayer, GFieldGridSectorVec& vecCells, 
		vector<TD_SIMPLE_UPDATE_CACHE_PLAYER>& outvecPlayerSimpleInfo, 
		vector<TD_UPDATE_CACHE_PLAYER>& outvecPlayerInfo, 
		vector<TD_PLAYER_FEATURE_TATTOO>& outvecPlayerFeatureTattoo,
		vector<TD_PLAYER_BUFF_LIST>& outvecPlayerBuffInfo);
	
};
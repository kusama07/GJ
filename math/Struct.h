﻿#pragma once
#include <vector>
#include <Vector2.h>
#include <Vector3.h>
#include <Matrix4x4.h>


// マップCSV
struct StageData {
	const char* stageCSV[4];
	uint32_t boxTexture[10];
};

// マップボックスのビット
struct MapBit {
	int GroundBox;
	int DamageBox;
	int StartBox;
	int GoalBox;
};

// シーン
enum Scene {
	TITLE,
	STAGESELECT,
	STAGE1,
	STAGE2,
	STAGE3,
	STAGE4,
	GAMECLEAR,
	GAMEOVER,
};

// 球
struct Sphere {
	Vector3 center;
	float radius;
};

// 直線
struct Line {
	Vector3 origin; // !< 始点
	Vector3 diff;   // !< 終点への差分ベクトル
};

// 半直線
struct Ray {
	Vector3 origin; // !< 始点
	Vector3 diff;   // !< 終点への差分ベクトル
};

// 線分
struct Segment {
	Vector3 origin; // !< 始点
	Vector3 diff;   // !< 終点への差分ベクトル
};

// 平面
struct Plane {
	Vector3 normal; // !< 法線
	float distance; // !< 距離
};

// 三角形
struct Triangle {
	Vector3 vertices[3]; // !< 頂点
};

struct AABB {
	Vector3 min; // !< 最少点
	Vector3 max; // !< 最大点
};


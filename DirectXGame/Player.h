#pragma once
#include "WorldTransform.h"
#include "Model.h"
///自キャラ 
class Player{
public:
    //初期化
	void Initialize(Model* model,uint32_t textureHandle,ViewProjection* viceProjecion);
	//更新
	void Update();
	//描画
	void Draw();
private:
    //ワールド変換
	WorldTransform worldTransform_;
	//モデル
	Model* model_ = nullptr;
	//テクスチャハンドル
	uint32_t textureHandle_ = 0;
	ViewProjection* viewProjection_=nullptr;
};
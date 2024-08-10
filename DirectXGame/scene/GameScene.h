#pragma once

#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include "DebugCamera.h"

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;
	
	Model* model_ = nullptr;
	uint32_t textureHandle_ = 0;
	uint32_t soundHandle_ = 0;
	uint32_t voiceHandle_ = 0;

	WorldTransform worldTransform_;
	ViewProjection viewProjection_;

	DebugCamera* debugcamera_ = nullptr;
	int kWindowWidth = 1280;
	int kWindowHeight = 720;

	/// <summary>
	/// ゲームシーン用
	/// </summary>
};
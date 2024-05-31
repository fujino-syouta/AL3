#include"GameScene.h"
#include"WorldTransform.h"
class Skydome{
public:
void Initialize();

void Update();

void Draw();

private:
	WorldTransform worldTransform_;
	Model*model_=nullptr;
};
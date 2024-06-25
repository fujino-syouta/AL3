#include "ViewProjection.h"
#include"Player.h"
class CameraController{
public:
void Initialize();
void Update();
private:
ViewProjection ;
Player *playre_=nullptr;
};
CameraController *CameraController_;

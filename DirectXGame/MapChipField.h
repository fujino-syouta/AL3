#include<stdint.h>
#include<vector>
#include"Vector3.h"
class MapChipField{
static inline const float KBlockWidth=1.0f;
static inline const float KBlockHigft=1.0f;
static inline const uint32_t KNumBlockVirtical=20;
static inline const uint32_t KNumBlockHorizontal=100;

MapChipData mapChipData_;
void ResetMapChipData();
};
enum class MapChipType{
KBlank,
KBlock,
};
struct MapChipData {
  std::vector<std::vector<MapChipType>>date;
};


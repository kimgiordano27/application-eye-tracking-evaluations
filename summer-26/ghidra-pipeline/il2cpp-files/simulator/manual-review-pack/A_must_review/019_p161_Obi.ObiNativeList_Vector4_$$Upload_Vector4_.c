/*
FUNCTION_NAME: Obi.ObiNativeList<Vector4>$$Upload<Vector4>
ENTRY_POINT: 019029a0
PROGRAM: simulator-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Obi_ObiNativeList<Vector4>__Upload<Vector4>(ulong param_1,undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long in_x10;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  lVar1 = 0;
  do {
    if (uVar2 < param_1) {
      *(undefined2 *)(param_3 + lVar1 + 0xabc) = 0;
    }
    if (uVar3 < param_1) {
      *(undefined2 *)(param_3 + lVar1 + 0xac0) = 0;
    }
    lVar1 = lVar1 + 8;
    uVar2 = uVar2 + in_x10;
    uVar3 = uVar3 + in_x10;
  } while (lVar1 != 0x50);
  *(undefined4 *)(param_3 + 0x170c) = 0;
  *(undefined2 *)(param_3 + 0x4d4) = 1;
  *(undefined8 *)(param_3 + 0x1720) = 0;
  *(undefined8 *)(param_3 + 0x1718) = 0;
  *(undefined4 *)(param_3 + 0x1728) = 0;
  return;
}



/*
FUNCTION_NAME: FUN_047292c0
ENTRY_POINT: 047292c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


undefined1  [16] FUN_047292c0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar6 = uVar5;
  do {
    uVar6 = uVar6 - 1;
    uVar5 = uVar5 - 1;
    if ((int)uVar5 < 0) {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_04729354;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto Unity_Collections_NativeArray<BoneWeight>___ctor;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_04729368;
    if (param_2 == 0) goto Unity_Collections_NativeArray<BoneWeight>___ctor;
    lVar4 = lVar4 + (ulong)uVar6 * 0x10;
    uVar1 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar4 + 0x20),
                       *(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(param_2 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
Unity_Collections_NativeArray<BoneWeight>___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_04729368:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  lVar4 = lVar4 + (ulong)uVar6 * 0x10;
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
LAB_04729354:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



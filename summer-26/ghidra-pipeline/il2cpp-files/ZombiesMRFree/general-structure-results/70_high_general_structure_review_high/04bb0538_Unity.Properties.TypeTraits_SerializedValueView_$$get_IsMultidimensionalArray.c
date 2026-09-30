/*
FUNCTION_NAME: Unity.Properties.TypeTraits<SerializedValueView>$$get_IsMultidimensionalArray
ENTRY_POINT: 04bb0538
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeTraits<SerializedValueView>__get_IsMultidimensionalArray
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uStack0000000000000000;
  
  lVar7 = *(long *)(param_4 + 0x20);
  uVar1 = *(uint *)(param_1 + 1);
                    /* try { // try from 04bb0550 to 04cb0593 has its CatchHandler @ 04bb05ec */
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar6 = lVar7;
  uStack0000000000000000 = param_2;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_02feb2c4(lVar7);
    uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar6 = *(long *)(param_4 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x68);
  if ((uVar2 & 1) == 0) {
    FUN_02feb2c4(lVar6);
  }
  uVar5 = (*pcVar9)();
  uVar4 = uStack0000000000000000;
  if (uVar5 < uVar1) {
    FUN_05b0f9f4(0);
  }
  else {
    lVar7 = *(long *)(param_4 + 0x20);
    uVar8 = *param_1;
    iVar3 = *(int *)(param_1 + 1);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02feb2c4(lVar7);
      uVar2 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar6 = *(long *)(param_4 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x78);
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    (*pcVar9)(uVar4,uVar8,(long)iVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x78));
  }
  return;
}



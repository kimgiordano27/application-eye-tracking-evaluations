/*
FUNCTION_NAME: FUN_0472e7ec
ENTRY_POINT: 0472e7ec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void FUN_0472e7ec(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) goto Unity_Collections_NativeArray<CPUSharedInstanceFlags>__CopyFrom;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_0472e8d0;
    if (param_3 == 0) goto Unity_Collections_NativeArray<CPUSharedInstanceFlags>__CopyFrom;
    lVar2 = lVar2 + (ulong)uVar4 * 0x40;
    uStack_78 = *(undefined8 *)(lVar2 + 0x28);
    local_80 = *(undefined8 *)(lVar2 + 0x20);
    uStack_68 = *(undefined8 *)(lVar2 + 0x38);
    uStack_70 = *(undefined8 *)(lVar2 + 0x30);
    uStack_58 = *(undefined8 *)(lVar2 + 0x48);
    local_60 = *(undefined8 *)(lVar2 + 0x40);
    uStack_48 = *(undefined8 *)(lVar2 + 0x58);
    uStack_50 = *(undefined8 *)(lVar2 + 0x50);
                    /* try { // try from 0472e85c to 0482e883 has its CatchHandler @ 0472ea30 */
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&local_80,*(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar4 * 0x40;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      param_1[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_1 = uVar5;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      uVar5 = *(undefined8 *)(lVar2 + 0x40);
      uVar7 = *(undefined8 *)(lVar2 + 0x58);
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      param_1[5] = *(undefined8 *)(lVar2 + 0x48);
      param_1[4] = uVar5;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      return;
    }
LAB_0472e8d0:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
Unity_Collections_NativeArray<CPUSharedInstanceFlags>__CopyFrom:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}



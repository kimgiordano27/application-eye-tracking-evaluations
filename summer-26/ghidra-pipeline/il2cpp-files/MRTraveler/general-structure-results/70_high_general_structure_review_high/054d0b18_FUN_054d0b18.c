/*
FUNCTION_NAME: FUN_054d0b18
ENTRY_POINT: 054d0b18
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_054d0b18(long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
                    /* try { // try from 054d0b34 to 055d0b47 has its CatchHandler @ 054d0b54 */
  if (param_3 == param_4) {
    return;
  }
  if (param_1 == 0) {
Unity_Collections_NativeArray<NativeUtilityPlugin_SerializedShapePose>__CopyTo:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    lVar4 = param_1 + (long)(int)param_3 * 0x18;
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    if (param_4 < *(uint *)(param_1 + 0x18)) {
      lVar5 = param_1 + (long)(int)param_4 * 0x18;
      uVar2 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      if (param_2 == 0)
      goto Unity_Collections_NativeArray<NativeUtilityPlugin_SerializedShapePose>__CopyTo;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      local_90 = uVar7;
      uStack_88 = uVar9;
      local_80 = uVar2;
      local_70 = uVar6;
      uStack_68 = uVar8;
      local_60 = uVar3;
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_70,&local_90,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar1 < 1) {
        return;
      }
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        local_60 = *(undefined8 *)(lVar4 + 0x30);
        uStack_68 = *(undefined8 *)(lVar4 + 0x28);
        local_70 = *(undefined8 *)(lVar4 + 0x20);
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          uVar3 = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          thunk_FUN_03d233cc(param_1 + (long)(int)param_3 * 0x18 + 0x28,0);
          if (param_4 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = local_60;
            *(undefined8 *)(lVar5 + 0x28) = uStack_68;
            *(undefined8 *)(lVar5 + 0x20) = local_70;
            thunk_FUN_03d233cc(param_1 + (long)(int)param_4 * 0x18 + 0x28,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}



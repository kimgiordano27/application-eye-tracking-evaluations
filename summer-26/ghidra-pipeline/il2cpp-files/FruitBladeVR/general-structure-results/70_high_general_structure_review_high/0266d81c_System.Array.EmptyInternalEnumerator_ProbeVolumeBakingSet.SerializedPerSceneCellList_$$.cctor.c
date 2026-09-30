/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.cctor
ENTRY_POINT: 0266d81c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___cctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0307f1b0(3);
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  if (uVar4 < param_3) {
    FUN_0308ce60(0);
    uVar4 = *(uint *)(param_2 + 0x18);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar4 - param_3) < (int)(uVar3 - *(int *)(param_1 + 0x28))) {
    FUN_0308c690(5,0);
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar3) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar6 = 0;
    puVar7 = (undefined8 *)(lVar5 + 0x30);
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_0266d930:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      if (-1 < *(int *)(puVar7 + -2)) {
        local_60 = 0;
        uStack_58 = 0;
        FUN_02aebad8(&local_60,puVar7[-1],*puVar7,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x138));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_0266d930;
        lVar1 = (long)(int)param_3;
        lVar2 = param_2 + (long)(int)param_3 * 0x10;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar2 + 0x28) = uStack_58;
        *(undefined8 *)(lVar2 + 0x20) = local_60;
        thunk_FUN_01cc8040(param_2 + lVar1 * 0x10 + 0x28,0);
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (uVar3 != uVar6);
  }
  return;
}



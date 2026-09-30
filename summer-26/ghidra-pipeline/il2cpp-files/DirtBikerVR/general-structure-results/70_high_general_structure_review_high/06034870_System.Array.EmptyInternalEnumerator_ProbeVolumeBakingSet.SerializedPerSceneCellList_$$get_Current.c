/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 06034870
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(3);
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  if (uVar4 < param_3) {
    FUN_067721c4(0);
    uVar4 = *(uint *)(param_2 + 0x18);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar4 - param_3) < (int)(uVar3 - *(int *)(param_1 + 0x28))) {
    FUN_0677195c(5,0);
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar3) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = 0;
    lVar7 = lVar5 + 0x30;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_06034970:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (-1 < *(int *)(lVar7 + -0x10)) {
        FUN_04bdc780();
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_06034970;
        lVar1 = (long)(int)param_3;
        lVar2 = param_2 + (long)(int)param_3 * 0x10;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        thunk_FUN_03afed3c(param_2 + lVar1 * 0x10 + 0x28,0);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar3 != uVar6);
  }
  return;
}



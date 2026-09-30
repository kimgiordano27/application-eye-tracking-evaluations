/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 060348b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_0677195c(param_1,0);
  uVar3 = *(uint *)(unaff_x22 + 0x20);
  if (0 < (int)uVar3) {
    lVar4 = *(long *)(unaff_x22 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = 0;
    lVar6 = lVar4 + 0x30;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_06034970:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (-1 < *(int *)(lVar6 + -0x10)) {
        FUN_04bdc780();
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_06034970;
        lVar1 = (long)(int)unaff_w21;
        lVar2 = unaff_x20 + (long)(int)unaff_w21 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        thunk_FUN_03afed3c(unaff_x20 + lVar1 * 0x10 + 0x28,0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar3 != uVar5);
  }
  return;
}



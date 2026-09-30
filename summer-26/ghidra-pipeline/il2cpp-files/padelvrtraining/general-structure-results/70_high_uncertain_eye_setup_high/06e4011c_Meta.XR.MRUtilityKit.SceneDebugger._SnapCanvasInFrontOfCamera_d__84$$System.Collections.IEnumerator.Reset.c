/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__84$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06e4011c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__84__System_Collections_IEnumerator_Reset
               (long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_07199bdc(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_06e401d4;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar2;
      if (uVar1 <= uVar5) {
        param_1[3] = 0;
        param_1[4] = 0;
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        goto LAB_06e401c4;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_06e401d4;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      uVar2 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x24 + 0x20) < 0);
    lVar4 = lVar4 + (long)(int)uVar5 * 0x24;
    lVar6 = *(long *)(lVar4 + 0x34);
    lVar3 = *(long *)(lVar4 + 0x2c);
    param_1[4] = *(long *)(lVar4 + 0x3c);
    param_1[3] = lVar6;
    param_1[2] = lVar3;
LAB_06e401c4:
    return uVar5 < uVar1;
  }
LAB_06e401d4:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



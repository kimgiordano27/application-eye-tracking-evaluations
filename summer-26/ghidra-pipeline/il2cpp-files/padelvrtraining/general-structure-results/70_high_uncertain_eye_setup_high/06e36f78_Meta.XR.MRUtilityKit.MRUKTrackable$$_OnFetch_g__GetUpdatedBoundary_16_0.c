/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$<OnFetch>g__GetUpdatedBoundary|16_0
ENTRY_POINT: 06e36f78
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKTrackable__<OnFetch>g__GetUpdatedBoundary_16_0
               (long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int in_w9;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if (in_w9 != *(int *)(param_1 + 0x2c)) {
    FUN_07199bdc(0);
    param_1 = *param_2;
    if (param_1 == 0) {
LAB_06e37014:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_2 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(param_2 + 1) = uVar1 + 1;
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_06e37004;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(param_2 + 1) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_06e37014;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x30 + 0x20) < 0);
  lVar3 = lVar3 + (long)(int)uVar4 * 0x30;
  lVar5 = *(long *)(lVar3 + 0x28);
  param_2[3] = *(long *)(lVar3 + 0x30);
  param_2[2] = lVar5;
LAB_06e37004:
  return uVar4 < uVar1;
}



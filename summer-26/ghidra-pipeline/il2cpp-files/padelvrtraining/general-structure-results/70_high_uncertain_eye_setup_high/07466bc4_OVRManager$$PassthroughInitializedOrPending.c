/*
FUNCTION_NAME: OVRManager$$PassthroughInitializedOrPending
ENTRY_POINT: 07466bc4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRManager__PassthroughInitializedOrPending(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 uVar4;
  
  do {
    uVar2 = FUN_08abed98(param_1,0);
    if ((uVar2 & 1) != 0) {
      if ((unaff_x19 == 0) || (lVar3 = FUN_08a4d98c(), lVar3 == 0)) break;
      uVar4 = FUN_08a5d3f4(lVar3,0);
      lVar3 = FUN_08a4d98c();
      if (lVar3 == 0) break;
      FUN_08a5bb30(lVar3,0);
      lVar3 = FUN_08a4d98c(unaff_x20,0);
      if (lVar3 == 0) break;
      FUN_08a5d3f4(lVar3,0);
      lVar3 = FUN_08a4d98c(unaff_x20,0);
      if (lVar3 == 0) break;
      FUN_08a5bb30(lVar3,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar2 = FUN_08abc61c(uVar4);
      if ((uVar2 & 1) != 0) goto LAB_07466ce0;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    unaff_w22 = (int)unaff_w23 < (int)uVar1;
    if ((int)uVar1 <= (int)unaff_w23) {
LAB_07466ce0:
      return unaff_w22 & 1;
    }
    if (uVar1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    param_1 = *(long *)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
    unaff_x20 = param_1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



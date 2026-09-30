/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 07466c24
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRManager__IsInsightPassthroughSupported(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 unaff_d13;
  
  while( true ) {
    lVar2 = FUN_08a4d98c(param_1,param_2);
    if (lVar2 == 0) break;
    FUN_08a5d3f4(lVar2,0);
    lVar2 = FUN_08a4d98c(unaff_x20,0);
    if (lVar2 == 0) break;
    FUN_08a5bb30(lVar2,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar3 = FUN_08abc61c(unaff_d13);
    if ((uVar3 & 1) != 0) {
LAB_07466ce0:
      return unaff_w22 & 1;
    }
    do {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      unaff_w22 = (int)unaff_w23 < (int)uVar1;
      if ((int)uVar1 <= (int)unaff_w23) goto LAB_07466ce0;
      if (uVar1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      param_1 = *(long *)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
      if (param_1 == 0) goto LAB_07466d0c;
      uVar3 = FUN_08abed98(param_1,0);
    } while ((uVar3 & 1) == 0);
    if ((unaff_x19 == 0) || (lVar2 = FUN_08a4d98c(), lVar2 == 0)) break;
    unaff_d13 = FUN_08a5d3f4(lVar2,0);
    lVar2 = FUN_08a4d98c();
    if (lVar2 == 0) break;
    FUN_08a5bb30(lVar2,0);
    param_2 = 0;
    unaff_x20 = param_1;
  }
LAB_07466d0c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}



/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 02c319d4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c3195c) */

void OVRPlugin__TryLocateSpace(long *param_1)

{
  long unaff_x20;
  long lVar1;
  ulong unaff_x21;
  long lVar2;
  undefined8 in_stack_00000008;
  
  lVar2 = *param_1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0184c01c();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + 0x18);
  thunk_FUN_0181f594();
  if ((lVar2 != 0) && ((unaff_x21 & 1) == 0)) {
    in_stack_00000008._4_1_ = '\0';
    FUN_02c317e4(lVar2,(long)&stack0x00000008 + 4);
    lVar1 = *(long *)(unaff_x20 + 0x18);
    thunk_FUN_0181f594();
    if (lVar1 != 0) {
      lVar1 = *(long *)(unaff_x20 + 0x18);
      thunk_FUN_0181f594();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c31804(lVar1);
    }
    if (in_stack_00000008._4_1_ != '\0') {
      FUN_0184c01c(lVar2);
    }
  }
  return;
}



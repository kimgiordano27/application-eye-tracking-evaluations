/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 02c318d4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c3195c) */

void OVRPlugin__ShareSpaces(void)

{
  int in_w8;
  long lVar1;
  long unaff_x20;
  ulong unaff_x21;
  long lVar2;
  long unaff_x22;
  char cStack000000000000000c;
  
  if (in_w8 != 0) {
    FUN_0184c01c();
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0();
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  thunk_FUN_0181f594();
  if ((lVar1 != 0) && ((unaff_x21 & 1) == 0)) {
    cStack000000000000000c = '\0';
    FUN_02c317e4(lVar1,&stack0x0000000c);
    lVar2 = *(long *)(unaff_x20 + 0x18);
    thunk_FUN_0181f594();
    if (lVar2 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x18);
      thunk_FUN_0181f594();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c31804(lVar2);
    }
    if (cStack000000000000000c != '\0') {
      FUN_0184c01c(lVar1);
    }
  }
  return;
}



/*
FUNCTION_NAME: OVRPlugin$$set_gpuLevel
ENTRY_POINT: 0337fc20
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_gpuLevel(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  ulong unaff_x24;
  
  bVar1 = false;
  bVar2 = false;
  do {
    sVar3 = FUN_0314e438();
    if (sVar3 == 0x2c) {
      if ((unaff_x24 & 1) == 0) {
        if (bVar2) {
          bVar1 = true;
        }
        else {
          if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
          FUN_0315aa9c();
        }
        unaff_x24 = 0;
        bVar2 = true;
      }
      else {
        if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
        FUN_0315aa9c();
LAB_0337fc8c:
        unaff_x24 = 1;
      }
    }
    else if (sVar3 == 0x5d) {
      if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
      FUN_0315aa9c();
      unaff_x24 = 0;
      bVar1 = false;
      bVar2 = false;
    }
    else {
      if (sVar3 == 0x5b) {
        if (unaff_x20 != (long *)0x0) {
          FUN_0315aa9c();
          bVar1 = false;
          bVar2 = false;
          goto LAB_0337fc8c;
        }
        goto LAB_0337fd48;
      }
      if (bVar1) {
        unaff_x24 = 0;
        bVar1 = true;
      }
      else {
        if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
        FUN_0315aa9c();
        unaff_x24 = 0;
        bVar1 = false;
      }
    }
    unaff_w21 = unaff_w21 + 1;
  } while (unaff_w21 < *(int *)(unaff_x19 + 0x10));
  if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0337fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x168))();
    return;
  }
LAB_0337fd48:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



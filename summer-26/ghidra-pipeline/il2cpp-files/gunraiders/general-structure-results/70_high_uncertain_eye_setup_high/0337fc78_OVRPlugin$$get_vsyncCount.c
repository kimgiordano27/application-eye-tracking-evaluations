/*
FUNCTION_NAME: OVRPlugin$$get_vsyncCount
ENTRY_POINT: 0337fc78
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


void OVRPlugin__get_vsyncCount(void)

{
  short sVar1;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  bool bVar2;
  
code_r0x0337fc78:
  if (unaff_x20 != (long *)0x0) {
    FUN_0315aa9c();
    while( true ) {
      bVar2 = true;
      while( true ) {
        while( true ) {
          while( true ) {
            unaff_w21 = unaff_w21 + 1;
            if (*(int *)(unaff_x19 + 0x10) <= unaff_w21) {
              if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0337fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*unaff_x20 + 0x168))();
                return;
              }
              goto LAB_0337fd48;
            }
            sVar1 = FUN_0314e438();
            if (sVar1 != 0x2c) break;
            if (bVar2) goto code_r0x0337fc78;
            if ((unaff_w23 & 1) == 0) {
              if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
              FUN_0315aa9c();
            }
            else {
              unaff_w22 = 1;
            }
            bVar2 = false;
            unaff_w23 = 1;
          }
          if (sVar1 != 0x5d) break;
          if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
          FUN_0315aa9c();
          bVar2 = false;
          unaff_w22 = 0;
          unaff_w23 = 0;
        }
        if (sVar1 == 0x5b) break;
        if ((unaff_w22 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_0337fd48;
          FUN_0315aa9c();
          bVar2 = false;
          unaff_w22 = 0;
        }
        else {
          bVar2 = false;
          unaff_w22 = 1;
        }
      }
      if (unaff_x20 == (long *)0x0) break;
      FUN_0315aa9c();
      unaff_w22 = 0;
      unaff_w23 = 0;
    }
  }
LAB_0337fd48:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}



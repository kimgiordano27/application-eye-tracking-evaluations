/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 027e7e58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027e7e9c) */

void OVRPlugin__get_nativeXrApi(void)

{
  bool in_ZR;
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 in_stack_00000028;
  
  if (in_ZR) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar3 = *plVar2;
    __cxa_end_catch();
    if (in_stack_00000028._4_1_ != '\0') {
      if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar1 = FUN_027e6178(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_026706bc(lVar1,0);
    }
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar3);
    }
    return;
  }
  if (in_stack_00000028._4_1_ != '\0') {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_027e6178();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_026706bc(lVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b3fef0();
}



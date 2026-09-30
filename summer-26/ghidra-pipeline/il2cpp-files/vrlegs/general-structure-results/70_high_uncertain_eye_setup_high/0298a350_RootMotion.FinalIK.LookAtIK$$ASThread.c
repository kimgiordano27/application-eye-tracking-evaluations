/*
FUNCTION_NAME: RootMotion.FinalIK.LookAtIK$$ASThread
ENTRY_POINT: 0298a350
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0298a3b4) */

undefined4 RootMotion_FinalIK_LookAtIK__ASThread(void)

{
  long *plVar1;
  undefined4 unaff_w19;
  long lVar2;
  int unaff_w23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
  OVRManager_<>c__<InitOVRManager>b__424_0();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w23 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return unaff_w19;
}



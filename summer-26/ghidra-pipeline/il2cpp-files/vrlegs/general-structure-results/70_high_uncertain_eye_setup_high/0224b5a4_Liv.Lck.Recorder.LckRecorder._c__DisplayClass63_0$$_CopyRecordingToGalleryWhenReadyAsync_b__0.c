/*
FUNCTION_NAME: Liv.Lck.Recorder.LckRecorder.<>c__DisplayClass63_0$$<CopyRecordingToGalleryWhenReadyAsync>b__0
ENTRY_POINT: 0224b5a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0224b608) */

void Liv_Lck_Recorder_LckRecorder_<>c__DisplayClass63_0__<CopyRecordingToGalleryWhenReadyAsync>b__0
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x24;
  long unaff_x29;
  
  if (param_2 != 1) {
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



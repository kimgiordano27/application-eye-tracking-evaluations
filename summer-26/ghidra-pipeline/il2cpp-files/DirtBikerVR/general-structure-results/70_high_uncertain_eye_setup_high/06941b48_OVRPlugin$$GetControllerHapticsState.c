/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 06941b48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsState(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  if ((*(int *)(param_1 + 0x80) == 0) &&
     (*(float *)(unaff_x20 + 0x70) <= *(float *)(param_1 + 0x94))) {
    uVar1 = thunk_FUN_07ca227c();
    FUN_065cddf0(*(undefined8 *)PTR_DAT_084b62b0,uVar1,*(undefined8 *)PTR_DAT_084b62c0,0);
    FUN_06941d00();
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    lVar2 = FUN_07c420b4(*(long *)(unaff_x20 + 0x80),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (1 < *(int *)(lVar2 + 0x18)) {
      return;
    }
  }
  FUN_06941d00();
  return;
}



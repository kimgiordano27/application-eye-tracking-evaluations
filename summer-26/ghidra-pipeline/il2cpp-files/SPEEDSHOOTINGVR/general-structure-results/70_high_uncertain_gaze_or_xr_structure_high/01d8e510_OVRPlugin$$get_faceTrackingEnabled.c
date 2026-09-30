/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 01d8e510
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar1 = FUN_01d8c60c();
  if ((uVar1 & 1) == 0) {
    uVar2 = thunk_FUN_01d8c440(*(undefined8 *)PTR_DAT_02359778,0);
    uVar1 = thunk_FUN_01c50bfc(uVar2,*(undefined8 *)PTR_DAT_02359780,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_01d8e620(uVar2);
    }
    else {
      *(undefined1 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = 0;
      uVar2 = FUN_01d8e590();
    }
  }
  else {
    uVar2 = FUN_01d8e5d0();
  }
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar2;
  thunk_FUN_0106e12c(*(undefined8 *)(*unaff_x20 + 0xb8),uVar2);
  return;
}



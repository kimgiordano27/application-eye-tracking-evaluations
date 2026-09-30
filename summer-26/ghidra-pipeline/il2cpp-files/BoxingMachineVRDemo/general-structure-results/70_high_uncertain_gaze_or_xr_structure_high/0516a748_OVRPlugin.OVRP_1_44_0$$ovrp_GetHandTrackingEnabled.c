/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 0516a748
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xe7c) = 1;
  uVar1 = FUN_050f20d8();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0516a7b8();
    return uVar2;
  }
  uVar1 = FUN_050f20d8();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_0516a838();
    return uVar2;
  }
  return 0;
}



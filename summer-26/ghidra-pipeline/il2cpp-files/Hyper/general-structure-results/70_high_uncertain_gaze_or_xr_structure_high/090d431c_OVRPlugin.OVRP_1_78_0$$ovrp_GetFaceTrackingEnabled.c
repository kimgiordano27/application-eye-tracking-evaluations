/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 090d431c
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  thunk_FUN_049ee3d8();
  uVar1 = FUN_04947fd0(*unaff_x21,*(undefined4 *)(unaff_x19 + 0xcc));
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x48),uVar1);
  return;
}



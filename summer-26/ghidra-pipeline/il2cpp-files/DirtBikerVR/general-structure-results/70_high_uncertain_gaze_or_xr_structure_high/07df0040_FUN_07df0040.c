/*
FUNCTION_NAME: FUN_07df0040
ENTRY_POINT: 07df0040
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_07df0040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = OVRPlugin_TrackingConfidence_TypeInfo;
  puVar1 = OVRPlugin_PoseStatef_TypeInfo;
  if ((DAT_0899a1ef & 1) == 0) {
    FUN_03a8a718(OVRPlugin_PoseStatef_TypeInfo);
    FUN_03a8a718(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_0899a1ef = 1;
  }
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_07eb3694(uVar3,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
  thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
  return;
}



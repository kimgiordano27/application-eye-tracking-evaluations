/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$get_VRToken
ENTRY_POINT: 0431534c
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__get_VRToken(long param_1)

{
  undefined8 uVar1;
  undefined8 *in_x9;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x788);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = thunk_FUN_0406deb8(*in_x9);
  FUN_0534e280();
  FUN_04aec9fc(uVar2,uVar1,*puVar3);
  return;
}



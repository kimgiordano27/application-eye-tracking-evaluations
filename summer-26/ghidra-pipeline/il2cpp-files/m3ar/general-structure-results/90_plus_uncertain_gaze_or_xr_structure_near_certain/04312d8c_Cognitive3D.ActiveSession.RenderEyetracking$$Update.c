/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$Update
ENTRY_POINT: 04312d8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__Update(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  long unaff_x20;
  int iStack0000000000000030;
  undefined4 *in_stack_00000068;
  
  uVar1 = *unaff_x19;
  *(undefined8 *)(&stack0x00000028 + unaff_x20 * 8) = uVar1;
  iStack0000000000000030 = (int)unaff_x20 + 1;
  __cxa_end_catch();
  *in_stack_00000068 = 0xfffffffe;
  FUN_0417482c(in_stack_00000068 + 2,uVar1,0);
  return;
}



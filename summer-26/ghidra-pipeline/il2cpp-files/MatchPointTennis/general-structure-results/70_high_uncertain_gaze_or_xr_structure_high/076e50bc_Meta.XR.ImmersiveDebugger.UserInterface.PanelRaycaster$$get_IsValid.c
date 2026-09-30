/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 076e50bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  uStack0000000000000018 = 0;
  uVar1 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f25360,&stack0x00000010);
  *unaff_x19 = uVar1;
  thunk_FUN_044bb4b4();
  return 1;
}



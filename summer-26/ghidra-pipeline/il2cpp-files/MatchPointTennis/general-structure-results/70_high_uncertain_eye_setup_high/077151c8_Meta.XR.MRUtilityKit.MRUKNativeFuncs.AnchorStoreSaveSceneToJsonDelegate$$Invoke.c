/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$Invoke
ENTRY_POINT: 077151c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__Invoke(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x22 + 0x121) = 1;
  *(undefined4 *)(unaff_x19 + 0x20) = 3;
  uVar1 = FUN_04447c90(*unaff_x21,0);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x30) = *unaff_x20;
  thunk_FUN_044bb4b4();
  FUN_0952dd08();
  return;
}



/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$EndInvoke
ENTRY_POINT: 04a6ee58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__EndInvoke(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = FUN_04a70e74();
  if (((uVar1 & 1) != 0) && (*(int *)(unaff_x21 + 0x20) < *(int *)(unaff_x20 + 0x20))) {
    return 0;
  }
  uVar2 = FUN_04a70188();
  return uVar2;
}



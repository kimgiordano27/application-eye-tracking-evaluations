/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$Invoke
ENTRY_POINT: 05adfc18
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__Invoke
               (long param_1,void *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  memcpy(param_2,&stack0x00000000,0x70);
  FUN_045dbf24(&stack0x00000070,unaff_w21,&stack0x000000f0,uVar1);
  memcpy((void *)(unaff_x19 + 0x10),&stack0x00000070,0x74);
  return unaff_w23 < unaff_w22;
}



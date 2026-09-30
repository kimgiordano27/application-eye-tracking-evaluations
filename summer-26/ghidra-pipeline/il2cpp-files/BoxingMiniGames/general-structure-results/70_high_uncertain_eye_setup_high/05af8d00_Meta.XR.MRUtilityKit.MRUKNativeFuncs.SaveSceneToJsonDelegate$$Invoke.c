/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.SaveSceneToJsonDelegate$$Invoke
ENTRY_POINT: 05af8d00
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_SaveSceneToJsonDelegate__Invoke(void)

{
  uint uVar1;
  void *__src;
  long *unaff_x19;
  code *pcVar2;
  
  __src = (void *)thunk_FUN_0367ff68();
  memcpy(&stack0x00000000,__src,0x60);
  pcVar2 = *(code **)(*unaff_x19 + 0x1b8);
  memcpy(&stack0x00000120,&stack0x00000060,0x60);
  memcpy(&stack0x000000c0,&stack0x00000000,0x60);
  uVar1 = (*pcVar2)();
  return uVar1 & 1;
}



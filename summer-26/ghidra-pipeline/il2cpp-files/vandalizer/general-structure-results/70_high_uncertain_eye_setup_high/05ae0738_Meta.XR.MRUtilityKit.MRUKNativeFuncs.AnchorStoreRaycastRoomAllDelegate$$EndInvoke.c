/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$EndInvoke
ENTRY_POINT: 05ae0738
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__EndInvoke
               (undefined8 param_1)

{
  long lVar1;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  lVar1 = FUN_0322bef4(param_1);
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x30),&stack0x00000028);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_05da3e28(&stack0x00000018);
  thunk_FUN_0322ed78(*(undefined8 *)PTR_DAT_075a9098);
  return;
}



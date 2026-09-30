/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomAllDelegate$$Invoke
ENTRY_POINT: 05af98c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomAllDelegate__Invoke(long param_1)

{
  uint uVar1;
  long in_x9;
  long *unaff_x19;
  
  if (param_1 == in_x9) {
    thunk_FUN_0367ff68();
    uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}



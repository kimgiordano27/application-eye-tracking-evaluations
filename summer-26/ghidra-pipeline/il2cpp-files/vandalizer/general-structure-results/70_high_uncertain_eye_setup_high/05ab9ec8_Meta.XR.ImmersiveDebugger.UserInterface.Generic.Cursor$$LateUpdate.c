/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 05ab9ec8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (param_1 != 0) {
    if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_05ab9964();
  }
  auVar1._8_8_ = uStack0000000000000008;
  auVar1._0_8_ = uStack0000000000000000;
  return auVar1;
}



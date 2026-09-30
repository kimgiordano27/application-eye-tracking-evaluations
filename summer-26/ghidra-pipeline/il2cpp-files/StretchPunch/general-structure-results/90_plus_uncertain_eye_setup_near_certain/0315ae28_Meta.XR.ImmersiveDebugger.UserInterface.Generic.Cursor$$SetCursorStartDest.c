/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorStartDest
ENTRY_POINT: 0315ae28
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorStartDest
               (long param_1,int param_2,int param_3,undefined8 *param_4,undefined8 param_5,
               long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  local_50 = param_4[2];
  uStack_58 = param_4[1];
  local_60 = *param_4;
  FUN_02039d10(*(undefined8 *)(param_1 + 0x10),param_2,param_3,&local_60,param_5,
               *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb8),param_7,param_8,
               local_60,uStack_58,local_50);
  return;
}



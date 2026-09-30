/*
FUNCTION_NAME: FUN_089a6fa4
ENTRY_POINT: 089a6fa4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_permission_setup;functionality_foveated_rendering
*/


void FUN_089a6fa4(uint param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0985d9d0 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "OculusFoveation_SetHasEyeTrackingPermissions";
    uStack_38 = 0x2c;
    local_28 = 4;
    local_30 = DAT_019112b8;
    local_24 = 0;
    DAT_0985d9d0 = (code *)thunk_FUN_03d2f1fc(&local_50);
  }
  (*DAT_0985d9d0)(param_1 & 1);
  return;
}



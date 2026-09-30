/*
FUNCTION_NAME: FUN_068887e8
ENTRY_POINT: 068887e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_068887e8(uint param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_073a1f58 == (code *)0x0) {
    local_50 = "OculusXRPlugin";
    uStack_48 = 0xe;
    local_40 = "SetEyeTrackedFoveatedRenderingEnabled";
    uStack_38 = 0x25;
    local_28 = 4;
    local_30 = DAT_0136ae60;
    local_24 = 0;
    DAT_073a1f58 = (code *)thunk_FUN_03010ac8(&local_50);
  }
  (*DAT_073a1f58)(param_1 & 1);
  return;
}



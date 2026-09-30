/*
FUNCTION_NAME: FUN_02a0e810
ENTRY_POINT: 02a0e810
PROGRAM: vrfs-libil2cpp.so
SCORE: 116
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_02a0e810(undefined4 param_1)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000007234cc0 == (code *)0x0) {
    pcStack_50 = "OVRPlugin";
    uStack_48 = 9;
    pcStack_40 = "ovrp_SetFoveationEyeTracked";
    uStack_38 = 0x1b;
    uStack_28 = 4;
    uStack_30 = DAT_0533f8a8;
    uStack_24 = 0;
    pcRam0000000007234cc0 = (code *)thunk_FUN_015d07f0(&pcStack_50);
  }
  (*pcRam0000000007234cc0)(param_1);
  return;
}



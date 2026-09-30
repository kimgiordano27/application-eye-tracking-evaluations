/*
FUNCTION_NAME: FUN_0209f3e0
ENTRY_POINT: 0209f3e0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 116
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_0209f3e0(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 0209f3e4 to 0219f3eb has its CatchHandler @ 0209f3ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0209f3cc with catch @ 0209f3ec
                       catch(type#2 @ 00000000) { ... } // from try @ 0209f3e4 with catch @ 0209f3ec
                        */
  if (DAT_029401b0 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetFoveationEyeTracked";
    uStack_38 = 0x1b;
    local_28 = 8;
    local_30 = DAT_007455b0;
    local_24 = 0;
    DAT_029401b0 = (code *)thunk_FUN_0124be64(&local_50);
  }
  (*DAT_029401b0)(param_1);
  return;
}



/*
FUNCTION_NAME: FUN_074c55d8
ENTRY_POINT: 074c55d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 116
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool FUN_074c55d8(undefined8 param_1)

{
  int iVar1;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0826a458 == (code *)0x0) {
                    /* try { // try from 074c55f8 to 075c5693 has its CatchHandler @ 074c5308 */
    local_50 = "openxr_pico";
    uStack_48 = 0xb;
    local_40 = "PICO_isSupportsFoveationEyeTracked";
    uStack_38 = 0x22;
    local_28 = 8;
    local_30 = DAT_0158abc0;
    local_24 = 0;
    DAT_0826a458 = (code *)thunk_FUN_03778b88(&local_50);
  }
  iVar1 = (*DAT_0826a458)(param_1);
  return iVar1 != 0;
}



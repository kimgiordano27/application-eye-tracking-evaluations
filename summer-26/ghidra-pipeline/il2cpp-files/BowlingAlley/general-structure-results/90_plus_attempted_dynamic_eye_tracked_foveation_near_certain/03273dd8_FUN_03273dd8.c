/*
FUNCTION_NAME: FUN_03273dd8
ENTRY_POINT: 03273dd8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint FUN_03273dd8(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_2[3];
  local_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  local_20 = param_2[6];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uVar1 = Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled
                    (param_1 + 0x10,&local_50);
  return uVar1 & 1;
}



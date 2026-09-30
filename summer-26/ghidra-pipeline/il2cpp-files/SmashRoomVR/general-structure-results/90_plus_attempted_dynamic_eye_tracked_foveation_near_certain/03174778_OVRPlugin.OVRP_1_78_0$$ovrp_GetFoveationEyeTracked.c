/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 03174778
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(undefined8 *param_1)

{
  long in_x9;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(in_x9 + 0x2c);
  uVar3 = *(undefined8 *)(in_x9 + 0x28);
  uVar2 = *(undefined8 *)(in_x9 + 0x20);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(in_x9 + 0x34);
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return;
}



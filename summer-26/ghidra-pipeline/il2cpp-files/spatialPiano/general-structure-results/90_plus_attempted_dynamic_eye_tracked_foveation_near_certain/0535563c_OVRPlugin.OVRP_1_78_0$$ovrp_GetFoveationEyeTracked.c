/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 0535563c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  pcStack0000000000000010 = "ovr_ApplicationLifecycle_GetRegisteredPIDs";
  uStack0000000000000018 = 0x2a;
  uStack0000000000000020 = DAT_011b1530;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_02f454a0();
  *(code **)(unaff_x19 + 0x858) = pcVar1;
  (*pcVar1)();
  return;
}



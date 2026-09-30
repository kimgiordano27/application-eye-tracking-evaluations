/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 06977d44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 142
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5 [16],undefined1 param_6 [16],float param_7,float param_8)

{
  long unaff_x19;
  undefined4 uVar1;
  float in_s16;
  float in_s17;
  
  if (param_8 * param_8 + param_7 + in_s17 < in_s16) {
    *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x27c);
    *(undefined8 *)(unaff_x19 + 0x318) = *(undefined8 *)(unaff_x19 + 0x274);
  }
  else {
    uVar1 = FUN_07c8b244(0);
    *(undefined4 *)(unaff_x19 + 0x318) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x31c) = param_2;
    *(undefined4 *)(unaff_x19 + 800) = param_3;
    *(undefined4 *)(unaff_x19 + 0x324) = param_4;
  }
  return;
}



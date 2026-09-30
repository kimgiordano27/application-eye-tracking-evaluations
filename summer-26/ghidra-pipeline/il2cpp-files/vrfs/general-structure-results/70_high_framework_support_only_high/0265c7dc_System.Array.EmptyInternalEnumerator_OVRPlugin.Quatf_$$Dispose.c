/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 0265c7dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose(void)

{
  uint in_w8;
  code *pcVar1;
  long unaff_x19;
  int unaff_w22;
  
  if ((in_w8 >> 4 & 1) == 0) {
    if (unaff_w22 != 2) {
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_0265c82c;
    }
    pcVar1 = FUN_0126b408;
  }
  else if (unaff_w22 == 2) {
    pcVar1 = FUN_0126b41c;
  }
  else {
    pcVar1 = FUN_0126b464;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar1;
LAB_0265c82c:
  *(code **)(unaff_x19 + 0x38) = FUN_0126b3a8;
  return;
}



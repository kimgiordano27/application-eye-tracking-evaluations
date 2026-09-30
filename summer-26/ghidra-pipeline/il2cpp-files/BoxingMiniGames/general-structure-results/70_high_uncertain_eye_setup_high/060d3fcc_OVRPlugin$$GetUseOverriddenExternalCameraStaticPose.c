/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 060d3fcc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long param_1)

{
  undefined1 uVar1;
  int *in_x10;
  long *unaff_x19;
  int unaff_w21;
  
  (**(code **)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138))();
  (**(code **)(*unaff_x19 + 0x1a8))();
  if (unaff_w21 == 0) {
    uVar1 = (undefined1)unaff_x19[8];
  }
  else {
    if (unaff_w21 != 1) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)unaff_x19 + 0x59) = uVar1;
  return;
}



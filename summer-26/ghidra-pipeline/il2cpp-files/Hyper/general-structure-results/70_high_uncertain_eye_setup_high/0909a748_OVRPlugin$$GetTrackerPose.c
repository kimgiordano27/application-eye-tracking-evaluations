/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 0909a748
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(long param_1)

{
  long *plVar1;
  long in_x9;
  long in_x10;
  uint in_w11;
  long *unaff_x19;
  long unaff_x20;
  
  if (in_w11 < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  *(long **)(unaff_x20 + 0x118) = plVar1;
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  thunk_FUN_049ee3d8(unaff_x20 + 0x118,plVar1);
  *(long **)(unaff_x20 + 0x120) = unaff_x19;
  thunk_FUN_049ee3d8(unaff_x20 + 0x120);
  return;
}



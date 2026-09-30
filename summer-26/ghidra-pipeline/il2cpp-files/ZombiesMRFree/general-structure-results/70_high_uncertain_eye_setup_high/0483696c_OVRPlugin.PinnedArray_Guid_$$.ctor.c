/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 0483696c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_PinnedArray<Guid>___ctor(ulong param_1)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  
  if ((param_1 & 1) == 0) {
    FUN_02feb2c4();
  }
  uVar1 = FUN_048369a4();
  *unaff_x19 = (int)(uVar1 >> 0x20);
  return (uVar1 & 0xff) != 0;
}



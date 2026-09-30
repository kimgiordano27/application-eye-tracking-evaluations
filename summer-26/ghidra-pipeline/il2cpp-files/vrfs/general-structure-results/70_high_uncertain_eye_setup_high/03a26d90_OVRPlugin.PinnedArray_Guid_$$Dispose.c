/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$Dispose
ENTRY_POINT: 03a26d90
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__Dispose(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  uStack0000000000000000 = param_1;
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_015c2790();
  }
  if ((*(byte *)(**(long **)(lVar1 + 0xc0) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  thunk_FUN_015d01b0();
  return;
}



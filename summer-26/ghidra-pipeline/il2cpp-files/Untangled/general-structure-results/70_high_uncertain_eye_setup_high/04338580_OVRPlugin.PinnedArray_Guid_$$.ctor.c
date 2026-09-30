/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 04338580
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_04338470();
  memcpy(&stack0x00000068,&stack0x00000000,0x68);
  memcpy(&stack0x00000000,&stack0x00000068,0x68);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02eea768();
  }
  thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}



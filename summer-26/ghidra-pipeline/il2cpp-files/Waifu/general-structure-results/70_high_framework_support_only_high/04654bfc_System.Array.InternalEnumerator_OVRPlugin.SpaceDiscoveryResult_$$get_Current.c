/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 04654bfc
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
                    /* try { // try from 04654c04 to 04754cbf has its CatchHandler @ 04654a1c */
  FUN_0335b6c8(&DAT_083f90b8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x35b) = unaff_w21;
  if (*(long *)(unaff_x19 + 8) != 0) {
    FUN_04dde690((long *)(unaff_x19 + 8),DAT_083f90b0);
    return;
  }
  return;
}



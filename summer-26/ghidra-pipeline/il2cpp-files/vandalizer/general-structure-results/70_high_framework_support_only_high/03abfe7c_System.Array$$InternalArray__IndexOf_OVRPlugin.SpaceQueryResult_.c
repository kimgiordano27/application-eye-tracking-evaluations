/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03abfe7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
                    /* catch() { ... } // from try @ 03abfe64 with catch @ 03abfe98 */
                    /* try { // try from 03abfea0 to 03bbfeaf has its CatchHandler @ 03abfec4 */
  return **(undefined8 **)(lVar1 + 0xb8);
}



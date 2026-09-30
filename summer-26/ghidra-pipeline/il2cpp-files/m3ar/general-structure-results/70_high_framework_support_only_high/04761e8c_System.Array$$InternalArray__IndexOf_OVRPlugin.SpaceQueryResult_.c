/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04761e8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
                    /* try { // try from 04761e90 to 04861e9f has its CatchHandler @ 04761ea0 */
  FUN_054dbacc(param_2,param_3,*(undefined8 *)(param_1 + 0x18));
                    /* catch() { ... } // from try @ 04761e30 with catch @ 04761ea0
                       catch() { ... } // from try @ 04761e90 with catch @ 04761ea0 */
                    /* try { // try from 04761ea4 to 04861ea7 has its CatchHandler @ 04761eb0 */
                    /* try { // try from 04761ea8 to 04861eb3 has its CatchHandler @ 04761c6c */
  thunk_FUN_0406db0c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  return;
}



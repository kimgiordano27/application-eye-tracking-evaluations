/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$SequenceEqual<Vector2>
ENTRY_POINT: 03edc538
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Utilities__SequenceEqual<Vector2>(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_031f20f4(PTR_DAT_075d7c68);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0322bf50(param_2);
    }
  }
                    /* try { // try from 03edc570 to 03fdc597 has its CatchHandler @ 03edc678 */
  if (*(int *)(*(long *)PTR_DAT_075d7c68 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 03edc598 to 03fdc62b has its CatchHandler @ 03edc354 */
  FUN_03ee8378(param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
  return;
}



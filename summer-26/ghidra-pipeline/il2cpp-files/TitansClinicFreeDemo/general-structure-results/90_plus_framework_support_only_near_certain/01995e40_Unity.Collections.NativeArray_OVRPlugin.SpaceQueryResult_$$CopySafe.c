/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 01995e40
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long param_1,int param_2)

{
  int unaff_w22;
  
  if (param_2 < 0) {
                    /* try { // try from 01995ea8 to 01a95eb7 has its CatchHandler @ 01995eb8 */
    FUN_01f88388(0);
  }
  if (unaff_w22 < 0) {
                    /* catch() { ... } // from try @ 01995dd0 with catch @ 01995eb8
                       catch() { ... } // from try @ 01995e08 with catch @ 01995eb8
                       catch() { ... } // from try @ 01995e34 with catch @ 01995eb8
                       catch() { ... } // from try @ 01995ea8 with catch @ 01995eb8 */
                    /* try { // try from 01995ebc to 01a95ebf has its CatchHandler @ 01995ec8 */
    FUN_01f87fcc(0x10,4,0);
                    /* try { // try from 01995ec0 to 01a95ecb has its CatchHandler @ 01995d24 */
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w22) {
    FUN_01f87b08(0x17,0);
  }
  FUN_0137d45c(*(undefined8 *)(param_1 + 0x10),param_2,unaff_w22);
  return;
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 03b5e788
PROGRAM: hellodot-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  int unaff_w21;
  undefined4 unaff_w22;
  
  if (in_NG != in_OV) {
    FUN_04f51a70(0x17,0);
  }
                    /* catch() { ... } // from try @ 03b5e780 with catch @ 03b5e798 */
  if (1 < unaff_w21) {
    FUN_0332c1cc(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 03b5e7d8 to 03c5e7ff has its CatchHandler @ 03b5e814 */
  return;
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 047a6bf0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  uVar1 = FUN_03642a4c();
                    /* try { // try from 047a6c00 to 048a6c03 has its CatchHandler @ 047a6c0c */
  if (0 < *(int *)(unaff_x20 + 0x18)) {
                    /* catch() { ... } // from try @ 047a6c00 with catch @ 047a6c0c */
                    /* try { // try from 047a6c10 to 048a6c17 has its CatchHandler @ 047a6c20 */
                    /* try { // try from 047a6c18 to 048a6c23 has its CatchHandler @ 047a68d8 */
    FUN_05e3b3a4(*unaff_x19,0,uVar1,0,*(int *)(unaff_x20 + 0x18),0);
  }
  *unaff_x19 = uVar1;
  thunk_FUN_036b7ad0();
  return;
}



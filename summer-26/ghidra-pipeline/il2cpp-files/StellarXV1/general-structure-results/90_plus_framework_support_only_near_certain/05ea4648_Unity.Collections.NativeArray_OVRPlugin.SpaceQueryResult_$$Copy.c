/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ea4648
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_06d76994(param_2,param_3,*(undefined8 *)(param_1 + 0xf0));
                    /* try { // try from 05ea4650 to 05fa4667 has its CatchHandler @ 05ea4700 */
  if (unaff_x20 != 0) {
    uVar1 = *unaff_x19;
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19[1];
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    thunk_FUN_040ec700(unaff_x20 + 0x28,0);
                    /* try { // try from 05ea4668 to 05fa467b has its CatchHandler @ 05ea44a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}



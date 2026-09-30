/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 04178988
PROGRAM: Untangled-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  FUN_02f07e70();
  *(undefined1 *)(unaff_x20 + 0xd42) = 1;
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar1 = *plVar3;
                    /* try { // try from 04178998 to 042789af has its CatchHandler @ 04178a24 */
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fd8);
                    /* try { // try from 041789b0 to 04278a13 has its CatchHandler @ 041788e0 */
    FUN_05645a04(uVar2,0);
    FUN_02eca9b4(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}



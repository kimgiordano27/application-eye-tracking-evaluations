/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 06628cec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__ToArray(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_044adef4();
  uVar1 = FUN_07a80dec(uVar1,0);
                    /* try { // try from 06628cfc to 06728d1f has its CatchHandler @ 06628898 */
  thunk_FUN_044adef4(PTR_DAT_09f20bb0);
  uVar2 = thunk_FUN_0448520c();
  FUN_07a3e070(uVar2,uVar1,0);
                    /* try { // try from 06628d20 to 06728d2f has its CatchHandler @ 06628d30 */
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2);
}



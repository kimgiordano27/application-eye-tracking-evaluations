/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 0469a48c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
                    /* catch() { ... } // from try @ 0469a474 with catch @ 0469a48c */
  FUN_054c6628(&stack0x00000020);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  thunk_FUN_0301043c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90));
                    /* try { // try from 0469a4cc to 0479a4f3 has its CatchHandler @ 0469a508 */
  return;
}



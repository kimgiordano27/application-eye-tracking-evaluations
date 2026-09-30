/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 03c6a14c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Item(void)

{
  long lVar1;
  long *unaff_x21;
  
  lVar1 = FUN_02d9a2e0();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_02d9d688();
                    /* try { // try from 03c6a19c to 03d6a19f has its CatchHandler @ 03c6a1a8 */
                    /* try { // try from 03c6a1a0 to 03d6a1cb has its CatchHandler @ 03c69d18 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6a19c with catch @ 03c6a1a8
                        */
    FUN_03c6a04c();
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6a0d0 with catch @ 03c6a1ac
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88();
}



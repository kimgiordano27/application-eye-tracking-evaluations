/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 054dc5ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  long lVar1;
  long unaff_x23;
  
  lVar1 = FUN_03cf1244();
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054dc5e4 with catch @ 054dc5f0
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054dc510 with catch @ 054dc5f4
                        */
  if (*(int *)(lVar1 + 0xe0) == 0) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054dc448 with catch @ 054dc5f8
                        */
    thunk_FUN_03cd7500();
  }
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054dc488 with catch @ 054dc5fc
                        */
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
                    /* try { // try from 054dc614 to 055dc617 has its CatchHandler @ 054dc62c */
  FUN_054dc124();
                    /* catch() { ... } // from try @ 054dc614 with catch @ 054dc62c */
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054dc124();
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054dc124();
  return;
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 054dc4f4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(void)

{
  bool in_ZR;
  long lVar1;
  long unaff_x23;
  
  if (in_ZR) {
    lVar1 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
                    /* try { // try from 054dc510 to 055dc51f has its CatchHandler @ 054dc5f4 */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
                    /* try { // try from 054dc520 to 055dc5e3 has its CatchHandler @ 054dc144 */
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054dc124();
    return;
  }
                    /* try { // try from 054dc694 to 055dc69f has its CatchHandler @ 054dc144 */
  lVar1 = *(long *)(unaff_x23 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 054dc6a0 to 055dc6a7 has its CatchHandler @ 054dc6a8 */
    lVar1 = FUN_03cf1244();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054dc66c with catch @ 054dc6a8
                       catch(type#2 @ 00000000) { ... } // from try @ 054dc6a0 with catch @ 054dc6a8
                        */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054dce44();
  return;
}



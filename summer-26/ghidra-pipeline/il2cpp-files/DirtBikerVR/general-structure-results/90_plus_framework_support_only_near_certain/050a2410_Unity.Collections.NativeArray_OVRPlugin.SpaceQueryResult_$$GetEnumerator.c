/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 050a2410
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  while( true ) {
    lVar1 = *(long *)(param_1 + 0x48);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 050a2420 to 051a242f has its CatchHandler @ 050a2430 */
      lVar1 = FUN_03ac4090();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* catch() { ... } // from try @ 050a23a0 with catch @ 050a2430
                       catch() { ... } // from try @ 050a2420 with catch @ 050a2430 */
                    /* try { // try from 050a2434 to 051a2437 has its CatchHandler @ 050a2440 */
                    /* try { // try from 050a2438 to 051a2443 has its CatchHandler @ 050a22cc */
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a2434 with catch @ 050a2440
                        */
      FUN_03ac4090();
    }
    FUN_050a1ba0();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a24b0();
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w24 + unaff_w21 + 2U < 3) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    param_1 = *(long *)(lVar1 + 0xc0);
  }
  return;
}



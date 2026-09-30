/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 054de360
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  do {
    FUN_03cf1244();
    do {
                    /* try { // try from 054de368 to 055de38b has its CatchHandler @ 054de314 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054de354 with catch @ 054de374
                        */
      FUN_054de3ac();
      unaff_w21 = unaff_w21 + -1;
                    /* try { // try from 054de38c to 055de3a3 has its CatchHandler @ 054de3dc */
      if (unaff_w24 + unaff_w21 + 2 < 3) {
                    /* try { // try from 054de3a4 to 055de3cb has its CatchHandler @ 054de314 */
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03cf1244();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054dda48();
    } while ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}



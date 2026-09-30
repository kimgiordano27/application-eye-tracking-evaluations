/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 050a353c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  int in_w8;
  long unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_050a3064();
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
                    /* try { // try from 050a35a4 to 051a35f3 has its CatchHandler @ 050a35a4
                       catch() { ... } // from try @ 050a35a4 with catch @ 050a35a4
                       catch() { ... } // from try @ 050a366c with catch @ 050a35a4
                       catch() { ... } // from try @ 050a369c with catch @ 050a35a4
                       catch() { ... } // from try @ 050a371c with catch @ 050a35a4 */
  FUN_050a3064();
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_050a3064();
  return;
}



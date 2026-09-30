/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 02768ae0
PROGRAM: sharks-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly(long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w24;
  
  while( true ) {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
                    /* try { // try from 02768b08 to 02868b17 has its CatchHandler @ 02768b18 */
    Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor();
    unaff_w21 = unaff_w21 + -1;
                    /* catch() { ... } // from try @ 02768a94 with catch @ 02768b18
                       catch() { ... } // from try @ 02768b08 with catch @ 02768b18 */
                    /* try { // try from 02768b1c to 02868b1f has its CatchHandler @ 02768b28 */
    if (unaff_w24 + unaff_w21 + 2 < 3) break;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_027682a0();
    param_1 = *(long *)(unaff_x19 + 0x20);
  }
                    /* try { // try from 02768b20 to 02868b2b has its CatchHandler @ 02768988 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02768b1c with catch @ 02768b28
                        */
  return;
}



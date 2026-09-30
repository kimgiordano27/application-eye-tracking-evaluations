/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04d6671c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xc30);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    FUN_033b9870();
    lVar1 = *(long *)(unaff_x22 + 0xc30);
  }
                    /* try { // try from 04d66734 to 04e6673b has its CatchHandler @ 04d66830 */
                    /* try { // try from 04d6673c to 04e6680f has its CatchHandler @ 04d66534 */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
  if (*(int *)(DAT_083c96c8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083c96c8);
  }
  if (lVar1 != 0) {
    FUN_068bde18(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 0399a820
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (undefined8 param_1,uint param_2,void *param_3)

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  uint unaff_w21;
  
  if (in_w8 <= param_2) {
    FUN_04d9c8d0(0);
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 0399a838 to 03a9a83b has its CatchHandler @ 0399a8c4 */
  if (lVar1 != 0) {
                    /* try { // try from 0399a83c to 03a9a8c7 has its CatchHandler @ 0399a59c */
    if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w21 * 0x1b0;
      memmove((void *)(lVar1 + 0x20),param_3,0x1b0);
      thunk_FUN_02bb0e9c(lVar1 + 0x20,0);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}



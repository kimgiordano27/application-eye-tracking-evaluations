/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 0399a7b8
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
               (void *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint in_w9;
  long unaff_x21;
  
  if (in_w9 <= param_3) {
    FUN_04d9c8d0(0);
  }
  lVar1 = *(long *)(unaff_x21 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 0399a7dc to 03a9a7e3 has its CatchHandler @ 0399a80c */
    if (param_3 < *(uint *)(lVar1 + 0x18)) {
                    /* try { // try from 0399a7e8 to 03a9a7eb has its CatchHandler @ 0399a810 */
                    /* try { // try from 0399a7ec to 03a9a7ef has its CatchHandler @ 0399a814 */
                    /* try { // try from 0399a7f0 to 03a9a7f3 has its CatchHandler @ 0399a808 */
                    /* try { // try from 0399a7f4 to 03a9a7f7 has its CatchHandler @ 0399a804 */
                    /* try { // try from 0399a7f8 to 03a9a7fb has its CatchHandler @ 0399a814 */
                    /* try { // try from 0399a7fc to 03a9a837 has its CatchHandler @ 0399a59c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399a7a4 with catch @ 0399a800
                        */
      memcpy(param_1,(void *)(lVar1 + (long)(int)param_3 * 0x1b0 + 0x20),0x1b0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399a7f0 with catch @ 0399a808
                        */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399a7f4 with catch @ 0399a804
                        */
  FUN_02b3cac4();
}



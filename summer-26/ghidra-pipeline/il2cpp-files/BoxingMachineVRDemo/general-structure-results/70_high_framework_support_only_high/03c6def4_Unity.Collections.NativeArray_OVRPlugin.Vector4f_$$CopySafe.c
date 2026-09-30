/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 03c6def4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6df64) */

undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  undefined4 unaff_w20;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 03c6df00 to 03d6df0f has its CatchHandler @ 03c6df10 */
  FUN_04333d0c();
  if (unaff_x24 != 0) {
                    /* catch() { ... } // from try @ 03c6de80 with catch @ 03c6df10
                       catch() { ... } // from try @ 03c6df00 with catch @ 03c6df10 */
                    /* try { // try from 03c6df14 to 03d6df17 has its CatchHandler @ 03c6df20 */
                    /* try { // try from 03c6df18 to 03d6df23 has its CatchHandler @ 03c6ddb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03c6df14 with catch @ 03c6df20
                        */
    FUN_047cadf0();
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_02d6ec70();
    }
    return unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}



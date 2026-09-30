/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 059ceb24
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint in_w9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    if (in_w9 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (unaff_x20 == 0) break;
    puVar1 = (undefined8 *)(param_1 + unaff_x23);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    in_stack_00000038 = puVar1[3];
    in_stack_00000030 = puVar1[2];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    unaff_x23 = unaff_x23 + 0x20;
    unaff_w19 = unaff_w19 + 1;
                    /* try { // try from 059ceb64 to 05aceba3 has its CatchHandler @ 059ceb64
                       catch() { ... } // from try @ 059ceb64 with catch @ 059ceb64
                       catch() { ... } // from try @ 059cebb8 with catch @ 059ceb64
                       catch() { ... } // from try @ 059cebf4 with catch @ 059ceb64
                       catch() { ... } // from try @ 059cec34 with catch @ 059ceb64 */
    if (unaff_x22 == 0) {
      return 0xffffffff;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) break;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}



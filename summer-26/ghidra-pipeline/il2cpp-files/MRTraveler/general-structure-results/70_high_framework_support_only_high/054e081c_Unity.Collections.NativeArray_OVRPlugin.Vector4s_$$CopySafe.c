/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 054e081c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(long param_1)

{
  long in_x9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar1 = (undefined8 *)(unaff_x19 + 0x20 + unaff_x21 * 0x18);
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
                    /* try { // try from 054e0838 to 055e0883 has its CatchHandler @ 054e0838
                       catch() { ... } // from try @ 054e0838 with catch @ 054e0838
                       catch() { ... } // from try @ 054e08f0 with catch @ 054e0838
                       catch() { ... } // from try @ 054e0920 with catch @ 054e0838
                       catch() { ... } // from try @ 054e09a0 with catch @ 054e0838 */
  *(undefined8 *)(in_x9 + 0x30) = puVar1[2];
  *(undefined8 *)(in_x9 + 0x28) = uVar3;
  *(undefined8 *)(in_x9 + 0x20) = uVar2;
  thunk_FUN_03d233cc(unaff_x19 + 0x20 + param_1 * 0x18,0);
  if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
    puVar1[2] = in_stack_00000030;
    puVar1[1] = in_stack_00000028;
    *puVar1 = in_stack_00000020;
                    /* try { // try from 054e0884 to 055e08ef has its CatchHandler @ 054e08f0 */
    thunk_FUN_03d233cc(unaff_x19 + unaff_x21 * 0x18 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}



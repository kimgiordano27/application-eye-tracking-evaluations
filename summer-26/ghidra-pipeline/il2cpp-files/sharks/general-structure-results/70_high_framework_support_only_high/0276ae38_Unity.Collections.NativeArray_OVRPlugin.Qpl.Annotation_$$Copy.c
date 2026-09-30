/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 0276ae38
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(long param_1)

{
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar1 = (undefined8 *)(in_x11 + unaff_x21 * in_x10);
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
                    /* try { // try from 0276ae44 to 0286ae8b has its CatchHandler @ 0276ae44
                       catch() { ... } // from try @ 0276ae44 with catch @ 0276ae44
                       catch() { ... } // from try @ 0276aee4 with catch @ 0276ae44
                       catch() { ... } // from try @ 0276af14 with catch @ 0276ae44
                       catch() { ... } // from try @ 0276af90 with catch @ 0276ae44 */
  *(undefined8 *)(in_x9 + 0x30) = puVar1[2];
  *(undefined8 *)(in_x9 + 0x28) = uVar3;
  *(undefined8 *)(in_x9 + 0x20) = uVar2;
  thunk_FUN_0188fd20(in_x11 + param_1 * in_x10,0);
  if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 0276ae8c to 0286aee3 has its CatchHandler @ 0276aee4 */
    puVar1[2] = in_stack_00000030;
    puVar1[1] = in_stack_00000028;
    *puVar1 = in_stack_00000020;
    thunk_FUN_0188fd20(unaff_x19 + unaff_x21 * 0x18 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}



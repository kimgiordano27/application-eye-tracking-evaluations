/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 02765490
PROGRAM: sharks-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
               (undefined8 *param_1,undefined1 param_2 [16])

{
  undefined8 in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  param_1[2] = in_x9;
  param_1[1] = param_2._8_8_;
  *param_1 = param_2._0_8_;
  thunk_FUN_0188fd20();
  if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
    unaff_x21[2] = in_stack_000000d0;
    unaff_x21[1] = in_stack_000000c8;
    *unaff_x21 = in_stack_000000c0;
    thunk_FUN_0188fd20(unaff_x19 + unaff_x23 * 0x18 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 027654f8 to 0286560b has its CatchHandler @ 027654f8
                       catch() { ... } // from try @ 027654f8 with catch @ 027654f8
                       catch() { ... } // from try @ 027656e4 with catch @ 027654f8
                       catch() { ... } // from try @ 027657a0 with catch @ 027654f8
                       catch() { ... } // from try @ 027657a8 with catch @ 027654f8
                       catch() { ... } // from try @ 0276584c with catch @ 027654f8 */
  FUN_017fc5b0();
}



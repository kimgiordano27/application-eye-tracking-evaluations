/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04a0e54c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long in_stack_00000018;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  unaff_x28[1] = param_1._8_8_;
  *unaff_x28 = param_1._0_8_;
  thunk_FUN_0329bf60();
  if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
    unaff_x27[1] = uStack0000000000000008;
    *unaff_x27 = uStack0000000000000000;
    thunk_FUN_0329bf60(unaff_x19 + in_stack_00000018 * 0x10 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}



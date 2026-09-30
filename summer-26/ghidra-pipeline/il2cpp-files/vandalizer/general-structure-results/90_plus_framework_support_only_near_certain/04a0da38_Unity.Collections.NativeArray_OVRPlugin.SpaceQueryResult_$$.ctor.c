/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04a0da38
PROGRAM: vandalizer-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  uint unaff_w29;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  uStack0000000000000020 = param_2._0_8_;
  uStack0000000000000010 = param_1._0_8_;
  uStack0000000000000038 = in_stack_000001b8;
  uStack0000000000000030 = in_stack_000001b0;
  if (unaff_w29 < in_w8) {
    lVar1 = unaff_x19 + (long)(int)unaff_w29 * 0x30;
    *(long *)(lVar1 + 0x38) = param_2._8_8_;
    *(undefined8 *)(lVar1 + 0x30) = uStack0000000000000020;
    *(undefined8 *)(lVar1 + 0x48) = in_stack_000001b8;
    *(undefined8 *)(lVar1 + 0x40) = in_stack_000001b0;
    *(long *)(lVar1 + 0x28) = param_1._8_8_;
    *(undefined8 *)(lVar1 + 0x20) = uStack0000000000000010;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}



/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 02345430
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16])

{
  long unaff_x22;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000050 = param_5._0_8_;
  uStack0000000000000040 = param_4._0_8_;
  uStack0000000000000070 = param_3._0_8_;
  uStack0000000000000060 = param_2._0_8_;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if ((uint)unaff_x22 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + unaff_x22 * 0x40;
    *(long *)(param_1 + 0x48) = param_2._8_8_;
    *(undefined8 *)(param_1 + 0x40) = uStack0000000000000060;
    *(long *)(param_1 + 0x58) = param_3._8_8_;
    *(undefined8 *)(param_1 + 0x50) = uStack0000000000000070;
    *(long *)(param_1 + 0x28) = param_4._8_8_;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000040;
    *(long *)(param_1 + 0x38) = param_5._8_8_;
    *(undefined8 *)(param_1 + 0x30) = uStack0000000000000050;
    thunk_FUN_01e10808(param_1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}



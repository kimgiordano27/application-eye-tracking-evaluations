/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 03b68de0
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,undefined1 param_2 [16])

{
  undefined8 in_x9;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000020 = param_2._0_8_;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w20 * 0x18;
    *(undefined8 *)(param_1 + 0x30) = in_x9;
    *(long *)(param_1 + 0x28) = param_2._8_8_;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000020;
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}



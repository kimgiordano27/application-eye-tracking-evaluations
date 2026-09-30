/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 0234a92c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
  uStack0000000000000050 = unaff_x19[4];
  uStack0000000000000038 = unaff_x19[1];
  uStack0000000000000030 = *unaff_x19;
  uStack0000000000000048 = unaff_x19[3];
  uStack0000000000000040 = unaff_x19[2];
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if ((uint)unaff_x22 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + unaff_x22 * 0x28;
    *(undefined8 *)(lVar1 + 0x40) = uStack0000000000000050;
    *(undefined8 *)(lVar1 + 0x28) = uStack0000000000000038;
    *(undefined8 *)(lVar1 + 0x20) = uStack0000000000000030;
    *(undefined8 *)(lVar1 + 0x38) = uStack0000000000000048;
    *(undefined8 *)(lVar1 + 0x30) = uStack0000000000000040;
    thunk_FUN_01e10808(lVar1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}



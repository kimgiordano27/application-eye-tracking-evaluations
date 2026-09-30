/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 0418be9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  
  FUN_0418c4c4();
  lVar2 = *(long *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x18) = unaff_w22;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((uint)unaff_x23 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + unaff_x23 * 0x10;
    puVar1 = (undefined8 *)(lVar2 + 0x28);
    *puVar1 = unaff_x20;
    *(undefined8 *)(lVar2 + 0x20) = unaff_x19;
    thunk_FUN_02f411dc(puVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}



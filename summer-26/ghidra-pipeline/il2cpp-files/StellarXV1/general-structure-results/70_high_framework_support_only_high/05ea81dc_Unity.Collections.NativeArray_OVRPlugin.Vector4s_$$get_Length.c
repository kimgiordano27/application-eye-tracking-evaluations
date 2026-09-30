/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 05ea81dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  undefined1 auVar2 [16];
  
  if ((*(ushort *)(unaff_x22 + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  lVar1 = thunk_FUN_040b4e00();
  if (lVar1 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    if ((*(uint *)(lVar1 + 0x18) < (uint)unaff_x23) ||
       (*(uint *)(lVar1 + 0x18) - (uint)unaff_x23 < (unaff_w24 & 0x7fffffff))) {
      FUN_0769a508(0);
    }
    auVar2._8_4_ = unaff_w24 & 0x7fffffff;
    auVar2._0_8_ = lVar1 + unaff_x23 * 8 + 0x20;
    auVar2._12_4_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077bb0();
}



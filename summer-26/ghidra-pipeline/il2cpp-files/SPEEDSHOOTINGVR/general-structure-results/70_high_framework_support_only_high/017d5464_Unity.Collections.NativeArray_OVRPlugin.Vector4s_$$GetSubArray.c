/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 017d5464
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray(undefined4 param_1)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  
  if (!in_CY || in_ZR) {
    FUN_01d69330(0);
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)unaff_w20 * 0x10;
      *(undefined4 *)(lVar1 + 0x20) = param_1;
      *(undefined4 *)(lVar1 + 0x24) = unaff_s10;
      *(undefined4 *)(lVar1 + 0x28) = unaff_s9;
      *(undefined4 *)(lVar1 + 0x2c) = unaff_s8;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}



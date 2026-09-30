/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnly
ENTRY_POINT: 06e27bf8
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnly(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000008 = param_1[1];
  uStack0000000000000000 = *param_1;
  uStack0000000000000018 = param_1[3];
  uStack0000000000000010 = param_1[2];
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uStack0000000000000028 = param_1[5];
  uStack0000000000000020 = param_1[4];
  uStack0000000000000038 = param_1[7];
  uStack0000000000000030 = param_1[6];
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000008;
      *(undefined8 *)(lVar2 + 0x20) = uStack0000000000000000;
      *(undefined8 *)(lVar2 + 0x38) = uStack0000000000000018;
      *(undefined8 *)(lVar2 + 0x30) = uStack0000000000000010;
      *(undefined8 *)(lVar2 + 0x48) = uStack0000000000000028;
      *(undefined8 *)(lVar2 + 0x40) = uStack0000000000000020;
      *(undefined8 *)(lVar2 + 0x58) = uStack0000000000000038;
      *(undefined8 *)(lVar2 + 0x50) = uStack0000000000000030;
      thunk_FUN_049ee3d8(lVar2 + 0x20,0);
    }
    else {
      FUN_06e27b04();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}



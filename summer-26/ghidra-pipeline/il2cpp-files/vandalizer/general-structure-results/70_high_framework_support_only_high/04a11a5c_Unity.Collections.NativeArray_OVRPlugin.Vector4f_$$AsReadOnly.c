/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 04a11a5c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_0322bef4(param_2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar2 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar2 != 0) {
    lVar1 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar1 + -8) == param_2) goto LAB_04a11abc;
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 != 0);
  }
  FUN_0322c1e8();
LAB_04a11abc:
  FUN_05586d58();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_04a1230c();
  return;
}



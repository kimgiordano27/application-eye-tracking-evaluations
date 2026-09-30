/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyTo
ENTRY_POINT: 041a4264
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyTo(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  
  while (in_NG != in_OV) {
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar1) goto LAB_041a426c;
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
LAB_041a4298:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x20 == 0) goto LAB_041a4298;
    lVar2 = lVar2 + unaff_x22;
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
               *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c),
               *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x10;
    in_OV = SBORROW8(unaff_x23,(long)*(int *)(unaff_x19 + 0x18));
    in_NG = (long)(unaff_x23 - (long)*(int *)(unaff_x19 + 0x18)) < 0;
  }
  iVar1 = *(int *)(unaff_x19 + 0x1c);
LAB_041a426c:
  if (unaff_w21 == iVar1) {
    return;
  }
  FUN_055095dc(0);
  return;
}



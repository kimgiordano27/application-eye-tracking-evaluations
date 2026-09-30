/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 059cf094
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(undefined8 param_1)

{
  long lVar1;
  undefined8 in_x4;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_07508590(param_1,unaff_w21,param_1,unaff_w21 + 1,in_x4,0);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
    uVar4 = *unaff_x20;
    uVar3 = unaff_x20[3];
    uVar2 = unaff_x20[2];
    lVar1 = lVar1 + (long)(int)unaff_w21 * 0x20;
    *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}



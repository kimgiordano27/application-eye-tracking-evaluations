/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 041a417c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom
          (long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (param_2,param_3,*(undefined4 *)(param_1 + 0x28),
                       *(undefined4 *)(param_1 + 0x2c),param_4,param_5);
    unaff_x22 = unaff_x22 - 1;
    if ((uVar1 & 1) != 0) break;
    unaff_w21 = unaff_w21 - 1;
    if ((int)unaff_w21 < 0) {
      return 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_041a41d4;
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) goto LAB_041a41d8;
    if (unaff_x20 == 0) goto LAB_041a41d4;
    unaff_x23 = unaff_x22 & 0xffffffff;
    param_4 = *(undefined8 *)(unaff_x20 + 0x40);
    param_5 = *(undefined8 *)(unaff_x20 + 0x28);
    param_1 = param_1 + unaff_x23 * 0x10;
    param_2 = (ulong)*(uint *)(param_1 + 0x20);
    param_3 = (ulong)*(uint *)(param_1 + 0x24);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined4 *)(lVar2 + unaff_x23 * 0x10 + 0x20);
    }
LAB_041a41d8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_041a41d4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}



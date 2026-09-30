/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 041a1608
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined1 auVar5 [16];
  
  do {
    if (unaff_x20 == 0) {
LAB_041a1674:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + unaff_x21 + 0x20)
                       ,*(undefined8 *)(param_1 + unaff_x21 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_041a1674;
      if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
        uVar2 = *(undefined8 *)(lVar4 + unaff_x21 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + unaff_x21 + 0x28);
LAB_041a1664:
        auVar5._8_8_ = uVar3;
        auVar5._0_8_ = uVar2;
        return auVar5;
      }
      break;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_041a1664;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_041a1674;
  } while (unaff_x22 < *(uint *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


